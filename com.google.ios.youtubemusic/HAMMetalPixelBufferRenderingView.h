//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HAMPixelBufferRenderingView-Protocol.h"

@class CAMetalLayer, HAMToneMap, NSArray, NSDictionary, NSString;
@protocol HAMPixelBufferRenderingViewErrorDelegate, HAMPixelBufferRenderingViewFrameSizeDelegate, MTLBuffer, MTLCommandQueue, MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLTexture;

@interface HAMMetalPixelBufferRenderingView : UIView <HAMPixelBufferRenderingView>
{
    CAMetalLayer *_metalLayer;
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLCommandQueue> _commandQueue;
    struct __CVMetalTextureCache *_textureCache;
    id <MTLRenderPipelineState> _renderPipelineStateSDR;
    id <MTLRenderPipelineState> _renderPipelineStateHDR;
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _ycbcrMatrixBuffer;
    id <MTLBuffer> _ycbcrOffsetBuffer;
    id <MTLTexture> _LUT;
    HAMToneMap *_toneMap;
    _Bool _is10Bit;
    void *_lastRenderedPixelBuffer;
    struct CGSize _layerSize;
    _Bool _delegateRenderedSizeNeedsUpdate;
    _Bool _pixelBufferAttributesChanged;
    _Bool _terminated;
    _Bool _prepared;
    id <HAMPixelBufferRenderingViewErrorDelegate> _errorDelegate;
    id <HAMPixelBufferRenderingViewFrameSizeDelegate> _frameSizeDelegate;
    double _scale;
}

+ (_Bool)deviceSupportsMetal;
+ (id)supportedPixelFormats;
+ (id)requiredPixelBufferAttributes;
+ (id)layerClass;
@property double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
@property(nonatomic) __weak id <HAMPixelBufferRenderingViewFrameSizeDelegate> frameSizeDelegate; // @synthesize frameSizeDelegate=_frameSizeDelegate;
@property(nonatomic) __weak id <HAMPixelBufferRenderingViewErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
- (void).cxx_destruct;
- (id)createVertexBuffer;
- (id)createTextureFromPixelBuffer:(struct __CVBuffer *)arg1 planeIndex:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)updateLayerSize;
- (id)nextDrawable;
- (void)willMoveToWindow:(id)arg1;
- (void)terminate;
- (void)appDidEnterBackground;
- (void)pixelBufferAttributesWillChange;
- (_Bool)renderPixelBuffer:(id)arg1;
- (void)clear;
- (void)reset;
- (_Bool)prepareAndReturnError:(id *)arg1;
@property(readonly, nonatomic) NSArray *supportedPixelFormats;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributes;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

