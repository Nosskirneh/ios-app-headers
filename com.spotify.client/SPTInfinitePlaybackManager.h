//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSMutableArray, NSString, NSURL, SPSession, SPTDataLoader, SPTInfinitePlaybackContext, SPTNetworkConnectivityController, SPTRadioAutoplayOfflineLogger, SPTRadioLogger, SPTRadioPlaybackService;
@protocol SPTGaiaManager, SPTLocalSettings, SPTPlayer;

@interface SPTInfinitePlaybackManager : NSObject <SPTDataLoaderDelegate, SPTPlayerObserver>
{
    _Bool _enabled;
    _Bool _trackHasPlayed;
    _Bool _launchingAutoplay;
    id <SPTPlayer> _player;
    SPTRadioPlaybackService *_radioPlaybackService;
    id <SPTLocalSettings> _localSettings;
    SPSession *_session;
    SPTDataLoader *_dataLoader;
    SPTNetworkConnectivityController *_networkConnectivity;
    id <SPTGaiaManager> _gaiaManager;
    SPTRadioLogger *_logger;
    SPTRadioAutoplayOfflineLogger *_offlineLogger;
    NSMutableArray *_previousTrackURIs;
    NSURL *_seedURI;
    SPTInfinitePlaybackContext *_autoplayContext;
}

@property(retain, nonatomic) SPTInfinitePlaybackContext *autoplayContext; // @synthesize autoplayContext=_autoplayContext;
@property(nonatomic, getter=isLaunchingAutoplay) _Bool launchingAutoplay; // @synthesize launchingAutoplay=_launchingAutoplay;
@property(nonatomic) _Bool trackHasPlayed; // @synthesize trackHasPlayed=_trackHasPlayed;
@property(retain, nonatomic) NSURL *seedURI; // @synthesize seedURI=_seedURI;
@property(readonly, nonatomic) NSMutableArray *previousTrackURIs; // @synthesize previousTrackURIs=_previousTrackURIs;
@property(readonly, nonatomic) SPTRadioAutoplayOfflineLogger *offlineLogger; // @synthesize offlineLogger=_offlineLogger;
@property(readonly, nonatomic) __weak SPTRadioLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
@property(readonly, nonatomic) __weak SPTNetworkConnectivityController *networkConnectivity; // @synthesize networkConnectivity=_networkConnectivity;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) __weak SPTRadioPlaybackService *radioPlaybackService; // @synthesize radioPlaybackService=_radioPlaybackService;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)logOfflineAutoplaySkippedWithSeedUri:(id)arg1;
- (void)startPlayerContextURI:(id)arg1 fromPlayerState:(id)arg2;
- (void)startRadioStationWithSeedURI:(id)arg1 fromPlayerState:(id)arg2;
- (void)launchAutoplayWithSeedURI:(id)arg1 fromPlayerState:(id)arg2;
- (_Bool)isContextAutoPlayEnabledForState:(id)arg1;
- (void)resetState;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 playbackService:(id)arg2 localSettings:(id)arg3 session:(id)arg4 dataLoader:(id)arg5 networkConnectivity:(id)arg6 gaiaManager:(id)arg7 logger:(id)arg8 offlineLogger:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

