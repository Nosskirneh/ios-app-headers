//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, MSACapturedImage, NSCondition, NSLock, NSString, NSThread;
@protocol MSADynamicCaptureSettings, MSAScreenCaptureDelegate, MSAScreenCaptureWindowSource;

@interface MSAScreenCapturer : NSObject
{
    NSCondition *waitForThreadStopCond;
    NSCondition *waitForThreadStartCond;
    NSCondition *wakeThreadCond;
    _Bool shouldStop;
    _Bool isStarted;
    NSThread *screenCapturerWorkerThread;
    CADisplayLink *mainThreadLink;
    double lastCaptureStart;
    struct CGSize previousCaptureSize;
    struct CGSize captureSize;
    struct CGSize targetOutputSize;
    _Bool recreateContextNextFrame;
    struct CGContext *_context;
    struct CGColorSpace *_colorspace;
    void *_pixelBuffer;
    NSLock *frontBufferLock;
    MSACapturedImage *_frontBuffer;
    NSLock *backBufferLock;
    MSACapturedImage *_backBuffer;
    _Bool hasNewFrame;
    NSCondition *hasNewFrameCond;
    _Bool _useBigEndian;
    _Bool _useAlphaInFront;
    id <MSAScreenCaptureWindowSource> _windowSource;
    id <MSAScreenCaptureDelegate> _captureDelegate;
    NSString *_frameOverlayText;
    long long _screenCapturingMethod;
    id <MSADynamicCaptureSettings> _dynamicSettingsProvider;
}

+ (void)dumpLayerHierarchy:(id)arg1 atLevel:(int)arg2;
@property(nonatomic) __weak id <MSADynamicCaptureSettings> dynamicSettingsProvider; // @synthesize dynamicSettingsProvider=_dynamicSettingsProvider;
@property long long screenCapturingMethod; // @synthesize screenCapturingMethod=_screenCapturingMethod;
@property(retain, nonatomic) NSString *frameOverlayText; // @synthesize frameOverlayText=_frameOverlayText;
@property(nonatomic) _Bool useAlphaInFront; // @synthesize useAlphaInFront=_useAlphaInFront;
@property(nonatomic) _Bool useBigEndian; // @synthesize useBigEndian=_useBigEndian;
@property(nonatomic) __weak id <MSAScreenCaptureDelegate> captureDelegate; // @synthesize captureDelegate=_captureDelegate;
@property(nonatomic) __weak id <MSAScreenCaptureWindowSource> windowSource; // @synthesize windowSource=_windowSource;
- (void).cxx_destruct;
- (void)dumpInfo:(Class)arg1;
- (id)findOpenGLView:(id)arg1;
- (id)findOpenGLLayer:(id)arg1;
- (int)animKeysCount:(id)arg1;
- (void)renderViewLayer:(id)arg1 inContext:(struct CGContext *)arg2 withCheckForOpenGL:(_Bool)arg3;
- (void)renderHierarchyWithoutOpenGL:(id)arg1 inContext:(struct CGContext *)arg2;
- (unsigned long long)captureWindowList:(id)arg1 inSize:(struct CGSize)arg2;
- (void)createCachedFrame;
- (void)screenCapturerThreadFunc;
- (void)mainThreadDisplayLinkUpdate:(id)arg1;
- (void)performScreenCapture;
- (_Bool)shouldCaptureNow;
- (void)renderOverlayText;
- (void)setupScreenCapture;
- (void)invalidateContext;
- (void)stop;
- (void)start;
@property(readonly) _Bool isActive;
- (id)init;

@end

