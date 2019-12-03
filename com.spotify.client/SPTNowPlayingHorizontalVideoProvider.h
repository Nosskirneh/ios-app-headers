//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingContentLayerProvider-Protocol.h"

@class BMVideoSurfaceFactory, NSString, SPTTheme;
@protocol BMVideoSurfaceManager, SPTGLUEImageLoaderFactory, SPTNowPlayingContentLayerProviderDelegate, SPTNowPlayingVideoManager;

@interface SPTNowPlayingHorizontalVideoProvider : NSObject <SPTNowPlayingContentLayerProvider>
{
    SPTTheme *_theme;
    id <BMVideoSurfaceManager> _videoSurfaceManager;
    BMVideoSurfaceFactory *_surfaceFactory;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    id <SPTNowPlayingVideoManager> _nowPlayingVideoManager;
}

@property(readonly, nonatomic) id <SPTNowPlayingVideoManager> nowPlayingVideoManager; // @synthesize nowPlayingVideoManager=_nowPlayingVideoManager;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) BMVideoSurfaceFactory *surfaceFactory; // @synthesize surfaceFactory=_surfaceFactory;
@property(readonly, nonatomic) id <BMVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)didSelectCell:(id)arg1 withProvider:(id)arg2 withTrack:(id)arg3 containerViewController:(id)arg4;
- (void)didEndDisplayingCell:(id)arg1 withTrack:(id)arg2 containerViewController:(id)arg3;
- (void)willDisplayCell:(id)arg1 withTrack:(id)arg2 containerViewController:(id)arg3;
- (_Bool)displaysFullScreenContentForTrack:(id)arg1;
- (_Bool)requiresOverlayForTrack:(id)arg1;
- (_Bool)isActiveForTrack:(id)arg1 playerState:(id)arg2;
- (id)reuseIdentifier;
- (void)configureCell:(id)arg1 withTrack:(id)arg2 windowedContentInsets:(struct UIEdgeInsets)arg3 peekingDisallowed:(_Bool)arg4;
- (Class)cellClass;
- (long long)priority;
- (unsigned long long)contentType;
- (id)initWithTheme:(id)arg1 surfaceFactory:(id)arg2 videoSurfaceManager:(id)arg3 imageLoaderFactory:(id)arg4 nowPlayingVideoManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPTNowPlayingContentLayerProviderDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
