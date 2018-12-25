//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView, YTIFullScreenOverlayRenderer, YTImageView, YTQTMButton;
@protocol YTFullScreenOverlayViewProtocol;

@interface YTFullScreenOverlayView : UIView
{
    id <YTFullScreenOverlayViewProtocol> _delegate;
    UIScrollView *_scrollView;
    YTIFullScreenOverlayRenderer *_renderer;
    YTQTMButton *_dismissButton;
    UIView *_fullScreenView;
    YTImageView *_backgroundImageView;
}

@property(readonly, nonatomic) YTImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *fullScreenView; // @synthesize fullScreenView=_fullScreenView;
- (void).cxx_destruct;
- (void)didTapDismissButton;
- (void)layoutSubviews;
- (id)initWithRenderer:(id)arg1 delegate:(id)arg2;
- (double)buttonPadding;

@end
