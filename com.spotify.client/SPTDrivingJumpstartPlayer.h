//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTCollectionEntityListObserver-Protocol.h"
#import "SPTDrivingJumpstartHandler-Protocol.h"

@class NSString, SPTGaiaDeviceManager;
@protocol SPTCollectionEntityList, SPTExternalIntegrationPlaybackController, SPTPlayerFeature, SPTUICompletionNotifier;

@interface SPTDrivingJumpstartPlayer : NSObject <SPTCollectionEntityListObserver, SPTDrivingJumpstartHandler>
{
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTCollectionEntityList> _recentlyPlayedEntityList;
    SPTGaiaDeviceManager *_gaiaDeviceManager;
    id <SPTUICompletionNotifier> _uiCompletionNotifier;
}

@property(readonly, nonatomic) id <SPTUICompletionNotifier> uiCompletionNotifier; // @synthesize uiCompletionNotifier=_uiCompletionNotifier;
@property(readonly, nonatomic) SPTGaiaDeviceManager *gaiaDeviceManager; // @synthesize gaiaDeviceManager=_gaiaDeviceManager;
@property(readonly, nonatomic) id <SPTCollectionEntityList> recentlyPlayedEntityList; // @synthesize recentlyPlayedEntityList=_recentlyPlayedEntityList;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (void)entityListDidReload:(id)arg1;
- (void)attemptPlayingRecentlyPlayedContextAtIndex:(unsigned long long)arg1;
- (void)attemptPlayingMostRecentlyPlayedContext;
- (_Bool)shouldResumePlayingForPlayerState:(id)arg1;
- (void)autoplayForPlayerState:(id)arg1;
- (void)handleJumpstart;
- (void)dealloc;
- (id)initWithPlaybackController:(id)arg1 playerFeature:(id)arg2 recentlyPlayedEntityList:(id)arg3 gaiaDeviceManager:(id)arg4 uiCompletionNotifier:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

