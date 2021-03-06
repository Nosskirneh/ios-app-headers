//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTaskCompletionSource;
@protocol SPTCanvasContentLayerVideoPreloaderDelegate, SPTCanvasModel, SPTVideoURLAssetLoader;

@interface SPTCanvasContentLayerVideoPreloader : NSObject
{
    id <SPTCanvasContentLayerVideoPreloaderDelegate> _delegate;
    id <SPTVideoURLAssetLoader> _videoAssetLoader;
    id <SPTCanvasModel> _canvasModel;
    SPTaskCompletionSource *_completionSource;
}

@property(retain, nonatomic) SPTaskCompletionSource *completionSource; // @synthesize completionSource=_completionSource;
@property(readonly, nonatomic) id <SPTCanvasModel> canvasModel; // @synthesize canvasModel=_canvasModel;
@property(readonly, nonatomic) id <SPTVideoURLAssetLoader> videoAssetLoader; // @synthesize videoAssetLoader=_videoAssetLoader;
@property(nonatomic) __weak id <SPTCanvasContentLayerVideoPreloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)loadVideo;
- (void)didLoadAsset:(id)arg1 withError:(id)arg2;
- (void)loadAsset:(id)arg1 withError:(id)arg2;
- (void)loadAssetWithURL:(id)arg1;
- (id)resultForAsset:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)preloadErrorUnknown;
- (id)preloadErrorLoadingKeys;
- (id)preloadErrorNotSupported;
- (id)initWithVideoAssetLoader:(id)arg1 canvasModel:(id)arg2;

@end

