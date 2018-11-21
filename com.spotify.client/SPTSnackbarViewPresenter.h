//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, SPTSnackbarView, UIView;

@interface SPTSnackbarViewPresenter : NSObject
{
    _Bool _isShowAnimationInProgress;
    _Bool _isHideAnimationInProgress;
    SPTSnackbarView *_currentPresentedSnackbar;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    UIView *_containerView;
    double _snackBarHeight;
}

@property(nonatomic) double snackBarHeight; // @synthesize snackBarHeight=_snackBarHeight;
@property(nonatomic) _Bool isHideAnimationInProgress; // @synthesize isHideAnimationInProgress=_isHideAnimationInProgress;
@property(nonatomic) _Bool isShowAnimationInProgress; // @synthesize isShowAnimationInProgress=_isShowAnimationInProgress;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak SPTSnackbarView *currentPresentedSnackbar; // @synthesize currentPresentedSnackbar=_currentPresentedSnackbar;
- (void).cxx_destruct;
- (void)updateSnackbarStyle:(id)arg1;
- (void)runHorizontalAnimationWithDirection:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runVerticalAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideSnackbarWithAnimatinType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideSnackbarWithSwipeDirection:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideSnackbarWithCompletion:(CDUnknownBlockType)arg1;
- (void)showSnackbarView:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

