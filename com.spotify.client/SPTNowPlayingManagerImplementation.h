//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MessageBarControllerDelegate-Protocol.h"
#import "SPTGaiaManagerObserver-Protocol.h"
#import "SPTMetaViewControllerObserver-Protocol.h"
#import "SPTNowPlayingManager-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSMapTable, NSString, NSTimer, SPTNowPlayingModel, UIViewController;
@protocol SPTGaiaManager, SPTMetaViewController, SPTPlayer;

@interface SPTNowPlayingManagerImplementation : NSObject <SPTPlayerObserver, MessageBarControllerDelegate, SPTGaiaManagerObserver, SPTMetaViewControllerObserver, SPTNowPlayingModelObserver, SPTNowPlayingManager, SPTURISubtypeHandler>
{
    SPTNowPlayingModel *_model;
    id <SPTMetaViewController> _metaViewController;
    id <SPTPlayer> _player;
    id <SPTGaiaManager> _gaiaManager;
    NSTimer *_metadataTimer;
    NSMapTable *_observers;
}

@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSTimer *metadataTimer; // @synthesize metadataTimer=_metadataTimer;
@property(retain, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)nowPlayingModel:(id)arg1 toggleModeDidChange:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)metaViewControllerWillShowNowPlaying:(id)arg1;
- (void)didChangeRootViewOfMetaViewController:(id)arg1;
- (void)gaiaManagerDidChangeGaiaVolumeControlState:(id)arg1;
- (void)gaiaManagerDidChangeConnectionTypesAvailable:(id)arg1;
- (void)gaiaManagerDidChangeRemoteConnectionState:(id)arg1;
- (void)gaiaManagerDidChangeActiveDeviceName:(id)arg1;
- (void)gaiaManagerDidChangeAvailable:(id)arg1;
- (void)metadataTimerFired:(id)arg1;
- (void)messageBarControllerDefaultAction:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (void)setCurrentToggleMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)currentToggleMode;
@property(readonly, nonatomic) UIViewController *nowPlayingViewController;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldHideBar;
@property(nonatomic) _Bool barHidden;
- (void)setBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)fireMetadataTimerIfNeeded;
- (void)invalidate;
- (void)dealloc;
- (id)initWithModel:(id)arg1 metaViewController:(id)arg2 player:(id)arg3 gaiaManager:(id)arg4 messageBarController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

