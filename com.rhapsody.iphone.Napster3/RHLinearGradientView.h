//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface RHLinearGradientView : UIView
{
    NSArray *_colors;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (void)addLinearGradientBackground;
- (void)layoutSubviews;
- (void)setStyle;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

