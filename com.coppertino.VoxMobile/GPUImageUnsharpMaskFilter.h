//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageFilter, GPUImageGaussianBlurFilter;

@interface GPUImageUnsharpMaskFilter : GPUImageFilterGroup
{
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageFilter *unsharpMaskFilter;
    double blurRadiusInPixels;
    double _intensity;
}

@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (void).cxx_destruct;
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels;
- (id)init;

@end

