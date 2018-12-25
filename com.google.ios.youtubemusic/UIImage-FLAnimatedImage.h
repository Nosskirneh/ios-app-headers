//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import "FLAnimatedImage-Protocol.h"

@class FLAnimatedImageData, NSDictionary, NSString;
@protocol FLAnimatedImageFrameDataSource;

@interface UIImage (FLAnimatedImage) <FLAnimatedImage>
- (id)fl_imageLazilyCachedAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIImage *fl_stillImage;
@property(readonly, nonatomic) _Bool fl_isAnimated;
@property(readonly, nonatomic) NSDictionary *fl_delayTimesForIndexes;
@property(readonly, nonatomic) id <FLAnimatedImageFrameDataSource> fl_frameDataSource;
@property(readonly, nonatomic) unsigned long long fl_frameCount;
@property(readonly, nonatomic) unsigned long long fl_loopCount;
@property(readonly, nonatomic) struct CGSize fl_size;
@property(readonly, nonatomic) FLAnimatedImageData *fl_data;
@property(nonatomic) unsigned long long fl_frameCacheSizeMax;
@property(readonly, nonatomic) unsigned long long fl_frameCacheSizeCurrent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
