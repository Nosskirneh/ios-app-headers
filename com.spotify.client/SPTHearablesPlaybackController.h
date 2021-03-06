//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHearablesSpotifyGoAPI-Protocol.h"

@class NSString, SPTAccessory;
@protocol SPTExternalIntegrationDebugLog, SPTExternalIntegrationPlaybackController, SPTGaiaConnectAPI, SPTHearablesRecommendationEngine;

@interface SPTHearablesPlaybackController : NSObject <SPTHearablesSpotifyGoAPI>
{
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTGaiaConnectAPI> _connectApi;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    SPTAccessory *_accessory;
    id <SPTHearablesRecommendationEngine> _recommendationEngine;
}

@property(retain, nonatomic) id <SPTHearablesRecommendationEngine> recommendationEngine; // @synthesize recommendationEngine=_recommendationEngine;
@property(retain, nonatomic) SPTAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectApi; // @synthesize connectApi=_connectApi;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (void)playRecommendation;
- (void)resumePlayback;
- (void)playNewRecommendedContent:(id)arg1;
- (void)playAllUserTracksShuffled;
- (void)resumeIfPlayingAndAllowRecommendation:(_Bool)arg1;
- (void)performGoCommand;
- (id)playOriginForSource:(id)arg1;
- (void)setCurrentAccessory:(id)arg1;
- (id)initWithPlaybackController:(id)arg1 connectApi:(id)arg2 recommendationEngine:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

