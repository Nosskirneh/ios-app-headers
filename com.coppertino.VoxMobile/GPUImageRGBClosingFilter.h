//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageRGBDilationFilter, GPUImageRGBErosionFilter;

@interface GPUImageRGBClosingFilter : GPUImageFilterGroup
{
    GPUImageRGBErosionFilter *erosionFilter;
    GPUImageRGBDilationFilter *dilationFilter;
}

- (void).cxx_destruct;
- (id)initWithRadius:(unsigned long long)arg1;
- (id)init;

@end

