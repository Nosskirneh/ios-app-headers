//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVideoSurfaceContextDelegate.h"
#import "SPTVideoSurfaceManager.h"

@class FBKVOController, NSArray, NSHashTable, NSString, SPTVideoDisplayView, SPTVideoPlayerSource, SPTVideoPreferences, UIView<SPTVideoSurface>;

@interface SPTVideoSurfaceManagerImpl : NSObject <SPTVideoSurfaceContextDelegate, SPTVideoSurfaceManager>
{
    // Error parsing type: Aq, name: _surfaceIndex
    _Bool _isPlayingInBackground;
    id <SPTVideoSurfaceManagerDataSource> _dataSource;
    NSHashTable *_surfaces;
    SPTVideoDisplayView *_displayView;
    id <SPTVideoKeyframeLoader> _keyframeLoader;
    FBKVOController *_kvoController;
    SPTVideoPreferences *_preferences;
    SPTVideoPlayerSource *_playerSource;
    UIView<SPTVideoSurface> *_renderingSurface;
}

@property(retain, nonatomic) UIView<SPTVideoSurface> *renderingSurface; // @synthesize renderingSurface=_renderingSurface;
@property(nonatomic) _Bool isPlayingInBackground; // @synthesize isPlayingInBackground=_isPlayingInBackground;
@property(retain, nonatomic) SPTVideoPlayerSource *playerSource; // @synthesize playerSource=_playerSource;
@property(retain, nonatomic) SPTVideoPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) id <SPTVideoKeyframeLoader> keyframeLoader; // @synthesize keyframeLoader=_keyframeLoader;
@property(retain, nonatomic) SPTVideoDisplayView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) NSHashTable *surfaces; // @synthesize surfaces=_surfaces;
@property(nonatomic) __weak id <SPTVideoSurfaceManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)currentIdentity;
- (void)videoSurfacePriorityChanged:(id)arg1;
- (void)videoSurfaceEligibleForAttachmentChanged:(id)arg1;
- (void)refreshDebugUI;
- (void)videoSurfaceAttachedStateDidChange:(id)arg1;
- (void)videoSurfaceAttachedStateWillChange:(id)arg1;
- (void)videoSurfaceSizeDidChangeWhileAttached:(id)arg1;
- (void)videoSurfaceLayoutChanged:(id)arg1;
- (id)playbackIdentityForVideoSurface:(id)arg1;
@property(readonly, nonatomic) NSArray *attachedSurfaces;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic, getter=isAnySurfaceAttached) _Bool anySurfaceAttached;
- (id)createSurfaceFullscreen;
- (id)createSurface;
- (id)createSurface:(_Bool)arg1;
- (void)updateDisplayViewsPlayer;
- (void)refreshRenderingSurface:(id)arg1;
- (void)refreshRenderingSurface;
- (void)playerChanged;
- (void)dealloc;
- (id)initWithPlayerSource:(id)arg1 keyframeLoader:(id)arg2 preferences:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

