//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingAdPlayerObserver.h"
#import "SPTNowPlayingVideoControlsVisibilityDelegate.h"

@class NSString, SPTNowPlayingAdPlayerObservable, SPTNowPlayingVideoAdMode;

@interface SPTAdNowPlayingVideoShowStateManager : NSObject <SPTNowPlayingAdPlayerObserver, SPTNowPlayingVideoControlsVisibilityDelegate>
{
    _Bool _currentShowControlsState;
    SPTNowPlayingVideoAdMode *_videoAdMode;
    SPTNowPlayingAdPlayerObservable *_observable;
    id <SPTAdsManager> _adsManager;
    struct SPTNowPlayingTrack _currentTrack;
}

@property(readonly, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) SPTNowPlayingAdPlayerObservable *observable; // @synthesize observable=_observable;
@property(readonly, nonatomic) SPTNowPlayingVideoAdMode *videoAdMode; // @synthesize videoAdMode=_videoAdMode;
@property(nonatomic) struct SPTNowPlayingTrack currentTrack; // @synthesize currentTrack=_currentTrack;
@property(nonatomic) _Bool currentShowControlsState; // @synthesize currentShowControlsState=_currentShowControlsState;
- (void).cxx_destruct;
- (void)nowPlayingAdStateDidChangeToTrack:(struct SPTNowPlayingTrack)arg1;
- (void)npvUnitTapEvent;
- (_Bool)shouldToggleUnitVisibility;
- (void)dealloc;
- (id)initWithVideoMode:(id)arg1 adsManager:(id)arg2 playerObservable:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
