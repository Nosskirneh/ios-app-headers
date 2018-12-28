//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOModalPresentation-Protocol.h"

@class CAShapeLayer, MDCShadowLayer, NSString, QTMActivityIndicator, UILabel;

@interface ASMModalActivityView : UIView <GOOModalPresentation>
{
    MDCShadowLayer *_shadow;
    CAShapeLayer *_background;
    UIView *_rect;
    QTMActivityIndicator *_spinner;
    UILabel *_label;
    CDUnknownBlockType _cancelCallback;
}

- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)reposition;
- (double)hideAnimationDuration;
- (double)showAnimationDuration;
- (_Bool)shouldDimBackground;
- (void)dismissDialog:(_Bool)arg1;
- (void)revealDialog;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)didTapAnywhere;
- (id)initWithText:(id)arg1 cancelCallback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(nonatomic) double backgroundDimAlpha;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=shouldPostScreenChangeNotificationOnDismiss) _Bool postScreenChangeNotificationOnDismiss;
@property(readonly) Class superclass;
@property(nonatomic) __weak UIView *viewToReceiveVoiceOverFocusAfterDismissal;

@end

