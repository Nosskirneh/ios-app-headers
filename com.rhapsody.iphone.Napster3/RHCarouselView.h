//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RHCarouselItem, UIImage;

@interface RHCarouselView : UIView
{
    float _animationSpeed;
    float _animationDuration;
    float _parabolaCoeffecient;
    UIImage *_currentImage;
    UIImage *_nextImage;
    UIImage *_previousImage;
    UIImage *_offscreenRightImage;
    UIImage *_offscreenLeftImage;
    RHCarouselItem *_offscreenRightItem;
    RHCarouselItem *_nextItem;
    RHCarouselItem *_currentItem;
    RHCarouselItem *_previousItem;
    RHCarouselItem *_offscreenLeftItem;
}

@property(retain, nonatomic) RHCarouselItem *offscreenLeftItem; // @synthesize offscreenLeftItem=_offscreenLeftItem;
@property(retain, nonatomic) RHCarouselItem *previousItem; // @synthesize previousItem=_previousItem;
@property(retain, nonatomic) RHCarouselItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) RHCarouselItem *nextItem; // @synthesize nextItem=_nextItem;
@property(retain, nonatomic) RHCarouselItem *offscreenRightItem; // @synthesize offscreenRightItem=_offscreenRightItem;
@property(nonatomic) float parabolaCoeffecient; // @synthesize parabolaCoeffecient=_parabolaCoeffecient;
@property(nonatomic) float animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) float animationSpeed; // @synthesize animationSpeed=_animationSpeed;
@property(retain, nonatomic) UIImage *offscreenLeftImage; // @synthesize offscreenLeftImage=_offscreenLeftImage;
@property(retain, nonatomic) UIImage *offscreenRightImage; // @synthesize offscreenRightImage=_offscreenRightImage;
@property(retain, nonatomic) UIImage *previousImage; // @synthesize previousImage=_previousImage;
@property(retain, nonatomic) UIImage *nextImage; // @synthesize nextImage=_nextImage;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
- (void).cxx_destruct;
- (double)initialVerticalOffset;
- (double)baseImageWidth;
- (double)baseImageHeight;
- (double)calculateHorizontalPosition:(int)arg1 scalingFactor:(double)arg2;
- (double)calculateVerticalPosition:(int)arg1 scalingFactor:(double)arg2;
- (struct CGPoint)calculatePosition:(int)arg1 scalingFactor:(double)arg2;
- (struct CGSize)tierSize:(int)arg1 scalingFactor:(double)arg2;
- (void)setOffscreenLeftItemIPad:(id)arg1;
- (void)setPreviousItemIPad:(id)arg1;
- (void)setCurrentItemIPad:(id)arg1;
- (void)setOffscreenRightItemIPad:(id)arg1;
- (void)setNextItemIPad:(id)arg1;
- (void)setPreviousItemIPhone:(id)arg1;
- (void)setCurrentItemIPhone:(id)arg1;
- (void)setNextItemIPhone:(id)arg1;
- (void)iPhoneAnimatePreviousAndUponCompletion:(CDUnknownBlockType)arg1;
- (void)iPhoneAnimateNextAndUponCompletion:(CDUnknownBlockType)arg1;
- (void)animatePreviousAndUponCompletion:(CDUnknownBlockType)arg1;
- (void)animateNextAndUponCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)initLayersAndAnimations;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

