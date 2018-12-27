//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8Features13PlayQueueItem_-Protocol.h"

@class NSString, NSURL, Urn;

@interface PlayQueueItemProxy : NSObject <_TtP8Features13PlayQueueItem_>
{
    Urn *_urn;
}

@property(readonly, copy, nonatomic) Urn *urn; // @synthesize urn=_urn;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *playQueueTitle;
@property(readonly, copy, nonatomic) NSURL *artworkURL;
@property(readonly, nonatomic) double fullDuration;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) Urn *artworkUrn;
@property(readonly, nonatomic) long long itemType;
- (id)initWithUrn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

