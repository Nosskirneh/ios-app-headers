//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageOutput.h"

#import "GPUImageInput-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol GPUImageInput;

@interface GPUImageFilterGroup : GPUImageOutput <GPUImageInput>
{
    NSMutableArray *filters;
    _Bool isEndProcessing;
    GPUImageOutput<GPUImageInput> *_terminalFilter;
    NSArray *_initialFilters;
    GPUImageOutput<GPUImageInput> *_inputFilterToIgnoreForUpdates;
}

@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *inputFilterToIgnoreForUpdates; // @synthesize inputFilterToIgnoreForUpdates=_inputFilterToIgnoreForUpdates;
@property(retain, nonatomic) NSArray *initialFilters; // @synthesize initialFilters=_initialFilters;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *terminalFilter; // @synthesize terminalFilter=_terminalFilter;
- (void).cxx_destruct;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize)arg1;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (CDUnknownBlockType)frameProcessingCompletionBlock;
- (void)setFrameProcessingCompletionBlock:(CDUnknownBlockType)arg1;
- (id)targets;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)setTargetToIgnoreForUpdates:(id)arg1;
- (struct CGImage *)newCGImageFromCurrentlyProcessedOutput;
- (void)useNextFrameForImageCapture;
- (unsigned long long)filterCount;
- (id)filterAtIndex:(unsigned long long)arg1;
- (void)addFilter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

