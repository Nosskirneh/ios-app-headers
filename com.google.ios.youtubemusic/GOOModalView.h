//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOModalPresentation-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GOODialogView, NSString, QTMColorGroup, UIButton, UIColor, UIFont;

@interface GOOModalView : UIView <UIGestureRecognizerDelegate, GOOModalPresentation>
{
    float _cachedDialogShadowOpacity;
    UIButton *_backgroundCancelButton;
    _Bool postScreenChangeNotificationOnDismiss;
    _Bool _shouldDismissOnBackgroundTap;
    _Bool _shouldDismissOnApplicationBackground;
    UIView *viewToReceiveVoiceOverFocusAfterDismissal;
    id _target;
    id _userObject;
    GOODialogView *_dialogView;
}

+ (void)applyContainerShadowToLayer:(id)arg1;
@property(retain, nonatomic) GOODialogView *dialogView; // @synthesize dialogView=_dialogView;
@property(nonatomic) _Bool shouldDismissOnApplicationBackground; // @synthesize shouldDismissOnApplicationBackground=_shouldDismissOnApplicationBackground;
@property(nonatomic) _Bool shouldDismissOnBackgroundTap; // @synthesize shouldDismissOnBackgroundTap=_shouldDismissOnBackgroundTap;
@property(retain, nonatomic) id userObject; // @synthesize userObject=_userObject;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic, getter=shouldPostScreenChangeNotificationOnDismiss) _Bool postScreenChangeNotificationOnDismiss; // @synthesize postScreenChangeNotificationOnDismiss;
@property(nonatomic) __weak UIView *viewToReceiveVoiceOverFocusAfterDismissal; // @synthesize viewToReceiveVoiceOverFocusAfterDismissal;
- (void).cxx_destruct;
- (void)cancel;
- (void)sizeToFit;
- (void)dismissWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareToShow;
- (id)backgroundCancelButton;
@property(retain, nonatomic) UIFont *actionButtonTitleFont;
@property(nonatomic) double actionButtonOpacity; // @dynamic actionButtonOpacity;
@property(retain, nonatomic) UIColor *actionButtonIconColor;
@property(retain, nonatomic) UIColor *actionButtonTitleColor;
@property(retain, nonatomic) QTMColorGroup *actionButtonColorGroup;
@property(nonatomic) _Bool colorizeActionButtons;
@property(retain, nonatomic) UIColor *dialogBackgroundColor;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withStyle:(int)arg3 automationIdentifier:(id)arg4 accessibilityTraits:(unsigned long long)arg5 insets:(struct UIEdgeInsets)arg6 showHorizontalDivider:(_Bool)arg7 action:(CDUnknownBlockType)arg8;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withStyle:(int)arg3 automationIdentifier:(id)arg4 accessibilityTraits:(unsigned long long)arg5 action:(CDUnknownBlockType)arg6;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withStyle:(int)arg3 automationIdentifier:(id)arg4 action:(CDUnknownBlockType)arg5;
- (void)addTitle:(id)arg1 withStyle:(int)arg2 automationIdentifier:(id)arg3 action:(CDUnknownBlockType)arg4;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withStyle:(int)arg3 automationIdentifier:(id)arg4 accessibilityTraits:(unsigned long long)arg5 userObject:(id)arg6 selector:(SEL)arg7;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withStyle:(int)arg3 automationIdentifier:(id)arg4 selector:(SEL)arg5;
- (void)addTitle:(id)arg1 withStyle:(int)arg2 automationIdentifier:(id)arg3 selector:(SEL)arg4;
- (void)addButton:(id)arg1 withAction:(CDUnknownBlockType)arg2;
- (void)addButton:(id)arg1 userObject:(id)arg2 withSelector:(SEL)arg3;
- (void)addButton:(id)arg1 withSelector:(SEL)arg2;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withDestructiveAction:(CDUnknownBlockType)arg3;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withDestructiveSelector:(SEL)arg3;
- (void)addTitle:(id)arg1 withDestructiveAction:(CDUnknownBlockType)arg2;
- (void)addTitle:(id)arg1 withDestructiveSelector:(SEL)arg2;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withCancelAction:(CDUnknownBlockType)arg3;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withCancelSelector:(SEL)arg3;
- (void)addTitle:(id)arg1 withCancelAction:(CDUnknownBlockType)arg2;
- (void)addTitle:(id)arg1 withCancelSelector:(SEL)arg2;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 automationIdentifier:(id)arg3 accessibilityTraits:(unsigned long long)arg4 withAction:(CDUnknownBlockType)arg5;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 automationIdentifier:(id)arg3 withAction:(CDUnknownBlockType)arg4;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withAction:(CDUnknownBlockType)arg3;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 automationIdentifier:(id)arg3 withSelector:(SEL)arg4;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withSelector:(SEL)arg3;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withAction:(CDUnknownBlockType)arg3;
- (void)addTitle:(id)arg1 withAction:(CDUnknownBlockType)arg2;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 accessibilityTraits:(unsigned long long)arg3 withSelector:(SEL)arg4;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withSelector:(SEL)arg3;
- (void)addTitle:(id)arg1 userObject:(id)arg2 withSelector:(SEL)arg3;
- (void)addTitle:(id)arg1 withSelector:(SEL)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)hideAnimationDuration;
- (double)showAnimationDuration;
- (void)revealDialog;
- (void)dismissDialog:(_Bool)arg1;
- (_Bool)shouldDimBackground;
- (void)reposition;
- (void)dismissDueToApplicationBackground;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(nonatomic) double backgroundDimAlpha;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

