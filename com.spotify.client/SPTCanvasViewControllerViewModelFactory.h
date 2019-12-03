//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTCanvasImageResolverFactory;
@protocol SPTCanvasTrackChecker, SPTVideoFeaturePlayerFactory, SPTVideoURLAssetLoader;

@interface SPTCanvasViewControllerViewModelFactory : NSObject
{
    id <SPTCanvasTrackChecker> _canvasTrackChecker;
    id <SPTVideoFeaturePlayerFactory> _videoPlayerFactory;
    id <SPTVideoURLAssetLoader> _videoAssetLoader;
    SPTCanvasImageResolverFactory *_imageResolverFactory;
}

@property(readonly, nonatomic) SPTCanvasImageResolverFactory *imageResolverFactory; // @synthesize imageResolverFactory=_imageResolverFactory;
@property(readonly, nonatomic) id <SPTVideoURLAssetLoader> videoAssetLoader; // @synthesize videoAssetLoader=_videoAssetLoader;
@property(readonly, nonatomic) id <SPTVideoFeaturePlayerFactory> videoPlayerFactory; // @synthesize videoPlayerFactory=_videoPlayerFactory;
@property(readonly, nonatomic) id <SPTCanvasTrackChecker> canvasTrackChecker; // @synthesize canvasTrackChecker=_canvasTrackChecker;
- (void).cxx_destruct;
- (id)createViewModelForTrack:(id)arg1 withCanvasModel:(id)arg2 usingVideoExporterProvider:(CDUnknownBlockType)arg3;
- (id)createViewModelForTrack:(id)arg1 withCanvasModel:(id)arg2;
- (id)createViewModelForTrack:(id)arg1 usingVideoExporterProvider:(CDUnknownBlockType)arg2;
- (id)createViewModelForTrack:(id)arg1;
- (CDUnknownBlockType)canvasVideoExporterProvider;
- (CDUnknownBlockType)videoPlayerLoaderProvider;
- (CDUnknownBlockType)videoPreloaderProvider;
- (CDUnknownBlockType)imagePreloaderProvider;
- (_Bool)canCreateViewModelForTrack:(id)arg1;
- (id)initWithCanvasTrackChecker:(id)arg1 videoPlayerFactory:(id)arg2 videoAssetLoader:(id)arg3 imageResolverFactory:(id)arg4;

@end
