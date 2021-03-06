//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEGradientView, GLUEImageView, SPTHomeUIPromoV2ViewStyle, UIImage;
@protocol GLUETheme;

@interface SPTHomeUIPromoV2BackgroundView : UIView
{
    id <GLUETheme> _theme;
    SPTHomeUIPromoV2ViewStyle *_style;
    GLUEImageView *_backgroundImageView;
    UIView *_overlayView;
    GLUEGradientView *_overlayGradientView;
}

@property(readonly, nonatomic) GLUEGradientView *overlayGradientView; // @synthesize overlayGradientView=_overlayGradientView;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) GLUEImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) SPTHomeUIPromoV2ViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
- (id)createOverlayGradientView;
- (id)createOverlayView;
- (id)createBackgroundView;
- (void)setupSubviews;
- (id)initWithTheme:(id)arg1;

@end

