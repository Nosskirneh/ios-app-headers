//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FLAnimatedImageData, NSDictionary, UIImage;
@protocol FLAnimatedImageFrameDataSource;

@protocol FLAnimatedImage <NSObject>
@property(readonly, nonatomic) id <FLAnimatedImageFrameDataSource> fl_frameDataSource;
@property(readonly, nonatomic) _Bool fl_isAnimated;
@property(readonly, nonatomic) FLAnimatedImageData *fl_data;
@property(nonatomic) unsigned long long fl_frameCacheSizeMax;
@property(readonly, nonatomic) unsigned long long fl_frameCacheSizeCurrent;
@property(readonly, nonatomic) unsigned long long fl_frameCount;
@property(readonly, nonatomic) NSDictionary *fl_delayTimesForIndexes;
@property(readonly, nonatomic) unsigned long long fl_loopCount;
@property(readonly, nonatomic) struct CGSize fl_size;
@property(readonly, nonatomic) UIImage *fl_stillImage;
- (UIImage *)fl_imageLazilyCachedAtIndex:(unsigned long long)arg1;
@end

