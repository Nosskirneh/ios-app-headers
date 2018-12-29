//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TWTRScribeSerializable-Protocol.h"

@class NSString;

@interface TWTRScribeMediaDetails : NSObject <TWTRScribeSerializable>
{
    NSString *_publisherID;
    NSString *_contentID;
    unsigned long long _mediaType;
}

+ (id)scribeKey;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, copy, nonatomic) NSString *publisherID; // @synthesize publisherID=_publisherID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithPublisherID:(id)arg1 contentID:(id)arg2 mediaType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

