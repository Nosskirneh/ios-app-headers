//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, RHAccountController, RHDataController, RHStationMO, RHStationTrackMO, ZDSDeferred;

@interface RHStationSession : NSObject
{
    RHStationMO *_station;
    NSMutableArray *_syncDeferreds;
    RHDataController *_dataController;
    unsigned long long _sessionID;
    RHStationTrackMO *_initialTrack;
    ZDSDeferred *_deferredLoadingTracks;
}

@property(retain, nonatomic) ZDSDeferred *deferredLoadingTracks; // @synthesize deferredLoadingTracks=_deferredLoadingTracks;
@property(retain, nonatomic) RHStationTrackMO *initialTrack; // @synthesize initialTrack=_initialTrack;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak RHDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) NSMutableArray *syncDeferreds; // @synthesize syncDeferreds=_syncDeferreds;
@property(readonly, nonatomic) RHStationMO *station; // @synthesize station=_station;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak RHAccountController *accountController;
- (id)radioPlaybackRequestWithFragment:(id)arg1;
- (void)refillPreviewTracksIfRequired;
- (void)consumeCurrentTrack;
- (id)deferredFeedbackWithFragment:(id)arg1 stationTracks:(id)arg2;
- (id)deferredFeedbackWithStationTracks:(id)arg1;
- (id)deferredSyncWithBlock:(CDUnknownBlockType)arg1;
- (id)deferredTracksWithCount:(unsigned long long)arg1 previewCount:(unsigned long long)arg2 replaceUpcomingPreviews:(_Bool)arg3;
- (id)disableUpcommingTrackToBeCurrentOrOldFirstUpcommingTrack:(id)arg1;
- (id)deferredTuningUpdateWithVariety:(double)arg1;
- (void)prepareForDisposal;
- (id)synchronize;
- (id)dislikeStationTrack:(id)arg1;
- (id)updateStationTrack:(id)arg1 asLiked:(long long)arg2;
- (id)skipStationTrack:(id)arg1;
- (id)tuningUpdateWithVariety:(double)arg1;
- (id)consumeTrack:(id)arg1;
- (id)playStationTrack:(id)arg1;
- (id)initialStationTrack;
- (void)endSession:(unsigned long long)arg1 track:(id)arg2;
- (unsigned long long)beginSession;
@property(readonly, nonatomic) _Bool isSyncing;
- (void)resetInitialTrackTo:(id)arg1;
- (void)dealloc;
- (id)initWithStation:(id)arg1 initialTrack:(id)arg2 dataController:(id)arg3;

@end

