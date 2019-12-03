//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, UIImage;

@interface RHCarouselItem : NSObject
{
    _Bool _hasReflection;
    _Bool _hasGradient;
    CALayer *_carouselLayer;
    UIImage *_image;
    CALayer *_primaryLayer;
    CALayer *_gradientLayer;
    CALayer *_reflectionLayer;
    struct CGSize _size;
    struct CGPoint _position;
    struct CGRect _imageRect;
    struct CGRect _reflectionRect;
}

+ (id)gradientLayerColors;
@property(retain, nonatomic) CALayer *reflectionLayer; // @synthesize reflectionLayer=_reflectionLayer;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CALayer *primaryLayer; // @synthesize primaryLayer=_primaryLayer;
@property(nonatomic) struct CGRect reflectionRect; // @synthesize reflectionRect=_reflectionRect;
@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool hasGradient; // @synthesize hasGradient=_hasGradient;
@property(nonatomic) _Bool hasReflection; // @synthesize hasReflection=_hasReflection;
@property(retain, nonatomic) CALayer *carouselLayer; // @synthesize carouselLayer=_carouselLayer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeItemLayersFromCarouselLayer;
- (void)addItemLayersToCarouselLayer;
- (void)resetCarouselItem;
- (id)gradientLayerForImage;
- (id)reflectionLayerForImage;
- (id)primaryLayerForImage;
- (void)animateRightBounce;
- (void)animateLeftBounce;
- (void)animateItemRight;
- (void)animateItemLeft;
- (void)animateItemLeftLeavingCenter:(_Bool)arg1;
- (void)animateItemLeftTowardsCenter:(_Bool)arg1;
- (void)animateItemRightLeavingCenter:(_Bool)arg1;
- (void)animateItemRightTowardsCenter:(_Bool)arg1;
- (void)displayItem;
- (void)changeCarouselItemImage:(id)arg1;
- (id)initForLayer:(id)arg1 image:(id)arg2 position:(struct CGPoint)arg3 size:(struct CGSize)arg4 withReflection:(_Bool)arg5 withGradient:(_Bool)arg6;
- (struct CGRect)calculateContentRectForArea:(struct CGSize)arg1 imageSize:(struct CGSize)arg2;

@end
