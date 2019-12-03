//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VOXArtworkSource : NSObject
{
    float _fetchTimeoutSeconds;
    NSDictionary *_mediaItemDictionary;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) float fetchTimeoutSeconds; // @synthesize fetchTimeoutSeconds=_fetchTimeoutSeconds;
@property(retain, nonatomic) NSDictionary *mediaItemDictionary; // @synthesize mediaItemDictionary=_mediaItemDictionary;
- (void).cxx_destruct;
- (_Bool)fetchForAlbum;
- (_Bool)performFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithItem:(id)arg1;

@end
