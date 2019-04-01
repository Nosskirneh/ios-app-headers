//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BITImageAnnotation.h"

@class CALayer, UIImage;

@interface BITBlurImageAnnotation : BITImageAnnotation
{
    CALayer *_imageLayer;
    UIImage *_scaledImage;
    CALayer *_selectedLayer;
}

@property(retain, nonatomic) CALayer *selectedLayer; // @synthesize selectedLayer=_selectedLayer;
@property(retain, nonatomic) UIImage *scaledImage; // @synthesize scaledImage=_scaledImage;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (void).cxx_destruct;
- (_Bool)resizable;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)setSourceImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

