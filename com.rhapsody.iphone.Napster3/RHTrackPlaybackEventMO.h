//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_RHTrackPlaybackEventMO.h"

#import "RHPlayableEntity-Protocol.h"

@class NSString, NSURL, RHTrackMO;

@interface RHTrackPlaybackEventMO : _RHTrackPlaybackEventMO <RHPlayableEntity>
{
}

+ (id)processPlaybackEventsPayload:(id)arg1 range:(id)arg2 context:(id)arg3;
+ (_Bool)shouldRefreshEventsForProbePayload:(id)arg1 range:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic) RHTrackMO *playableTrack;
@property(readonly, nonatomic) NSURL *uri;
- (void)setOrdinal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
