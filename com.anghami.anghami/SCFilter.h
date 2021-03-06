//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class CIFilter, CIImage, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol SCFilterDelegate;

@interface SCFilter : NSObject <NSCoding>
{
    NSMutableDictionary *_unwrappedValues;
    NSMutableArray *_subFilters;
    NSMutableArray *_animations;
    _Bool _enabled;
    CIFilter *_CIFilter;
    NSString *_name;
    id <SCFilterDelegate> _delegate;
    CIImage *_overlayImage;
}

+ (char *)createRGBABitmapFromImage:(struct CGImage *)arg1;
+ (id)colorCubeDataWithCGImage:(struct CGImage *)arg1 dimension:(long long)arg2;
+ (_Bool)data:(id)arg1 hasMagic:(unsigned int)arg2;
+ (id)filterWithCIImage:(id)arg1;
+ (id)filterWithFilters:(id)arg1;
+ (id)filterWithContentsOfURL:(id)arg1;
+ (id)filterWithData:(id)arg1;
+ (id)filterWithData:(id)arg1 error:(id *)arg2;
+ (id)filterWithCIFilterName:(id)arg1;
+ (id)filterWithCIFilter:(id)arg1;
+ (id)filterWithAffineTransform:(struct CGAffineTransform)arg1;
+ (id)emptyFilter;
@property(retain, nonatomic) CIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) __weak id <SCFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CIFilter *CIFilter; // @synthesize CIFilter=_CIFilter;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *animations;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)writeToFile:(id)arg1 error:(id *)arg2;
- (id)imageByProcessingImage:(id)arg1 atTime:(double)arg2;
- (id)imageByProcessingImage:(id)arg1;
@property(readonly, nonatomic) NSArray *subFilters;
- (void)removeAllAnimations;
- (void)removeAnimation:(id)arg1;
- (void)addAnimation:(id)arg1;
- (id)addAnimationForParameterKey:(id)arg1 startValue:(id)arg2 endValue:(id)arg3 startTime:(double)arg4 duration:(double)arg5;
- (void)removeSubFilterAtIndex:(long long)arg1;
- (void)insertSubFilter:(id)arg1 atIndex:(long long)arg2;
- (void)removeSubFilter:(id)arg1;
- (void)addSubFilter:(id)arg1;
- (void)resetToDefaults;
- (void)encodeWithCoder:(id)arg1;
- (void)setParameterValue:(id)arg1 forKey:(id)arg2;
- (id)parameterValueForKey:(id)arg1;
- (void)_didChangeParameter:(id)arg1;
- (id)_wrappedValue:(id)arg1 forKey:(id)arg2;
- (id)_unwrappedValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCIFilter:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)UIImageByProcessingUIImage:(id)arg1 atTime:(double)arg2;
- (id)UIImageByProcessingUIImage:(id)arg1;
- (id)videoCompositionWithAsset:(id)arg1;

@end

