//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC4WiMP16FordProxyManager : NSObject
{
    // Error parsing type: , name: port
    // Error parsing type: , name: hmiLevelState
    // Error parsing type: , name: fordLockScreen
    // Error parsing type: , name: sdlManager
    // Error parsing type: , name: currentOnHMIStatus
    // Error parsing type: , name: currentMediaItemDuration
    // Error parsing type: , name: lastImageResourceId
    // Error parsing type: , name: lastMediaItemName
    // Error parsing type: , name: itemsSets
    // Error parsing type: , name: currentShowTexts
    // Error parsing type: , name: manualPaused
    // Error parsing type: , name: currentAlbumId
    // Error parsing type: , name: currentPlaylistUuid
    // Error parsing type: , name: currentArtistId
    // Error parsing type: , name: isRadioPlaying
    // Error parsing type: , name: isButtonsEnabled
    // Error parsing type: , name: elapsedTimer
    // Error parsing type: , name: seconds
    // Error parsing type: , name: sceneLoader
    // Error parsing type: , name: sceneLoaderCompletion
    // Error parsing type: , name: observersAdded
    // Error parsing type: , name: radioPlaybackProvider
    // Error parsing type: , name: reloadQueue
    // Error parsing type: , name: tappedItem
    // Error parsing type: , name: menuLoaded
}

+ (void)setDebug:(_Bool)arg1;
+ (_Bool)debug;
+ (void)setIpAddress:(id)arg1;
+ (id)ipAddress;
+ (id)sharedManager;
- (CDUnknownBlockType).cxx_destruct;
- (void)hmiLevel:(id)arg1 didChangeToLevel:(id)arg2;
- (_Bool)isConnected;
- (void)stop;
- (void)connect;
- (id)init;
- (void)removeObservers;
- (void)addObservers;
- (void)hmiStatusChanged:(id)arg1;
- (void)playerFailedToPlay:(id)arg1;
- (void)handlePlaybackQualityChangedNotification:(id)arg1;
- (void)updateElapsedTime;
- (void)elapsedTimeDidChange:(id)arg1;
- (void)queuePositionDidChange:(id)arg1;
- (void)didChangePlayQueue:(id)arg1;
- (void)playerBadConnection:(id)arg1;
- (void)playerBufferIsEmpty:(id)arg1;
- (void)updateSeconds;
- (void)updateProgressBarWith:(id)arg1;
- (void)showOneLineWithText:(id)arg1;
- (void)showCurrentTexts;
- (void)showEmptyNowPlaying;
- (void)updateNowPlayingWith:(id)arg1;
- (id)softButtonsVRCommands;
- (void)preloadSoftButtonsWith:(id)arg1;
- (void)updateSoftButtons;
- (void)updateRadioButtonToActiveState;

@end

