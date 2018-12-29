//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KeyboardNotificationFactory, NSLayoutConstraint, RACDisposable;

@interface OverlayView : UIView
{
    KeyboardNotificationFactory *_notificationFactory;
    UIView *_contentView;
    UIView *_fadingView;
    NSLayoutConstraint *_bottomConstraint;
    RACDisposable *_disposable;
}

@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak UIView *fadingView; // @synthesize fadingView=_fadingView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) KeyboardNotificationFactory *notificationFactory; // @synthesize notificationFactory=_notificationFactory;
- (void).cxx_destruct;
- (void)removeAllSubviews;
- (double)constraintAdjustmentWithNotification:(id)arg1;
- (void)animateConstraintWithNotification:(id)arg1 willShow:(_Bool)arg2;
- (id)observeKeyboardHide;
- (id)observeKeyboardShow;
- (id)observeKeyboardEvents;
- (void)addAutolayoutConstraintsToContentView:(id)arg1;
- (void)hideIfEmpty;
- (void)resetContent;
- (void)removeFromContentView:(id)arg1;
- (void)updateContentView:(id)arg1;
- (void)showFadingView:(_Bool)arg1;
- (void)addSubviewsFromNibFile;
- (void)initOverlayView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
