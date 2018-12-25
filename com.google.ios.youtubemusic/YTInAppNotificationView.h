//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FLXLayout, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, YTImageView, YTLabel;
@protocol GA11YMixinImpl, YTInAppNotificationViewDelegate;

@interface YTInAppNotificationView : UIView <GA11YMixinEmbedder, UIGestureRecognizerDelegate>
{
    FLXLayout *_layout;
    UITapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTInAppNotificationViewDelegate> _delegate;
    YTImageView *_imageView;
    YTLabel *_titleLabel;
    YTLabel *_subtitleLabel;
}

@property(retain, nonatomic) YTLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) YTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YTImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <YTInAppNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
@property(readonly, nonatomic) UIView *root;
- (void)layoutSubviews;
- (void)updateFrame;
- (double)statusBarPadding;
- (void)didPan:(id)arg1;
- (void)didTap:(id)arg1;
- (void)animateResetNotificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateDismissNotificationWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateShowNotificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)setImage:(id)arg1;
- (void)setRenderer:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
