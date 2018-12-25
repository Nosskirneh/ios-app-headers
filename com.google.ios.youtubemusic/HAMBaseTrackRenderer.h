//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBaseComponent.h"

#import "HAMTrackRenderer-Protocol.h"

@class NSString;
@protocol HAMRootMediaSource, HAMTrackRendererDelegate;

@interface HAMBaseTrackRenderer : HAMBaseComponent <HAMTrackRenderer>
{
    id <HAMRootMediaSource> _rootMediaSource;
    id <HAMTrackRendererDelegate> _delegate;
    long long _status;
    float _rate;
    CDStruct_e83c9415 _seekableTimeRange;
}

@property(readonly, nonatomic) CDStruct_e83c9415 seekableTimeRange; // @synthesize seekableTimeRange=_seekableTimeRange;
@property(readonly, nonatomic) id <HAMRootMediaSource> rootMediaSource; // @synthesize rootMediaSource=_rootMediaSource;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) __weak id <HAMTrackRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)doWorkAtTime:(CDStruct_576a8307)arg1 error:(id *)arg2;
- (void)terminate;
- (_Bool)disableAndReturnError:(id *)arg1;
- (_Bool)stopAndReturnError:(id *)arg1;
- (_Bool)startAndReturnError:(id *)arg1;
- (_Bool)primeAndReturnError:(id *)arg1;
- (_Bool)enableAndReturnError:(id *)arg1;
- (_Bool)prepareAndReturnError:(id *)arg1;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) _Bool allowsBackgroundPlayback;
@property(readonly, nonatomic) int mediaContentType;
@property(readonly, nonatomic) CDStruct_576a8307 currentTime;
- (id)initWithContext:(id)arg1 rootMediaSource:(id)arg2;
- (_Bool)internalDoWorkAtTime:(CDStruct_576a8307)arg1 error:(id *)arg2;
- (void)internalSeekToTime:(CDStruct_1b6d18a9)arg1;
- (void)internalSetRate:(float)arg1;
- (void)internalTerminate;
- (_Bool)internalDisableAndReturnError:(id *)arg1;
- (_Bool)internalStopAndReturnError:(id *)arg1;
- (_Bool)internalStartAndReturnError:(id *)arg1;
- (_Bool)internalPrimeAndReturnError:(id *)arg1;
- (_Bool)internalEnableAndReturnError:(id *)arg1;
- (_Bool)internalPrepareAndReturnError:(id *)arg1;
- (void)failWithError:(id)arg1;
- (void)setSeekableTimeRange:(CDStruct_e83c9415)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

