//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSMutableArray, NSTimer, NSURL, UIImage, UVScreenShot;

@interface UVVideoRecorder : NSObject
{
    AVAssetWriter *videoWriter;
    AVAssetWriterInput *videoWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *avAdaptor;
    NSMutableArray *ssQueue;
    NSTimer *ssTimer;
    UVScreenShot *lastEncodedFrame;
    double lastEncodedFramePresentationTime;
    _Bool Recording;
    _Bool VideoReady;
    _Bool _Paused;
    float FrameRate;
    NSURL *VideoPath;
    double FirstFrameTime;
    long long BitRate;
    UIImage *_ExternalOverlayImage;
    struct CGSize ScreenSize;
    struct CGSize VideoSize;
    struct CGRect _ExternalOverlayImageRect;
}

+ (id)instance;
@property struct CGRect ExternalOverlayImageRect; // @synthesize ExternalOverlayImageRect=_ExternalOverlayImageRect;
@property(retain, nonatomic) UIImage *ExternalOverlayImage; // @synthesize ExternalOverlayImage=_ExternalOverlayImage;
@property _Bool Paused; // @synthesize Paused=_Paused;
@property(nonatomic) float FrameRate; // @synthesize FrameRate;
@property(nonatomic) long long BitRate; // @synthesize BitRate;
@property(nonatomic) struct CGSize VideoSize; // @synthesize VideoSize;
@property _Bool VideoReady; // @synthesize VideoReady;
@property(nonatomic) double FirstFrameTime; // @synthesize FirstFrameTime;
@property _Bool Recording; // @synthesize Recording;
@property(retain, nonatomic) NSURL *VideoPath; // @synthesize VideoPath;
@property(nonatomic) struct CGSize ScreenSize; // @synthesize ScreenSize;
- (void).cxx_destruct;
- (void)renderViewSafe:(id)arg1 context:(struct CGContext *)arg2;
- (long long)getImageOrientation;
- (struct __CVBuffer *)pixelBufferFromScreenShot:(id)arg1 size:(struct CGSize)arg2;
- (void)queueScreenShot:(id)arg1;
- (void)appendUIKitScreenShot;
- (void)appendEmptyScreenShot;
- (id)createEmptyScreenshot;
- (void)applyRotationTransformation:(struct CGContext *)arg1 orientation:(long long)arg2;
- (void)renderViewInContext:(id)arg1 context:(struct CGContext *)arg2 orientation:(long long)arg3 glView:(id)arg4;
- (double)transformationScaleY:(struct CGAffineTransform)arg1;
- (double)transformationScaleX:(struct CGAffineTransform)arg1;
- (double)transformationRotationAngle:(struct CGAffineTransform)arg1;
- (void)renderWindowInContext:(id)arg1 context:(struct CGContext *)arg2;
- (_Bool)shouldSkipFrameByView:(id)arg1;
- (_Bool)shouldSkipFrame;
- (void)timerTick;
- (void)appendVideoFrame:(id)arg1;
- (void)finishRecording:(_Bool)arg1;
- (void)videoDone;
- (void)finalizeVideo;
- (void)processQueue;
- (void)startRecording;
- (void)prepareToRecord;
- (void)reset;
- (void)resetFirstFrameTime;
- (id)init;

@end

