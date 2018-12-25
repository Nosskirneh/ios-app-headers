//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollisionBehaviorDelegate-Protocol.h"
#import "UIDynamicAnimatorDelegate-Protocol.h"

@class DTPieProgressIndicator, DTProgressHUDWindow, NSString, UIActivityIndicatorView, UIColor, UIDynamicAnimator, UIGravityBehavior, UIImageView, UILabel;

@interface DTProgressHUD : UIView <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate>
{
    UIView *_hudView;
    unsigned long long _currentHUDProgressType;
    DTPieProgressIndicator *_pieProgressIndicator;
    UIActivityIndicatorView *_activityIndicator;
    UIDynamicAnimator *_animator;
    UIGravityBehavior *_gravity;
    _Bool _hidden;
    DTProgressHUDWindow *_hudWindow;
    double _fadeInDuration;
    double _fadeOutDuration;
    UIColor *_contentColor;
    unsigned long long _hideAnimationType;
    unsigned long long _showAnimationType;
    UILabel *_textLabel;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) unsigned long long showAnimationType; // @synthesize showAnimationType=_showAnimationType;
@property(nonatomic) unsigned long long hideAnimationType; // @synthesize hideAnimationType=_hideAnimationType;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
- (void).cxx_destruct;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)_resetAnimation;
- (void)_prepareForReuse;
- (void)_centerView:(id)arg1;
- (void)_configureImageView;
- (void)_configureProgressView;
- (void)_configureTextLabel:(id)arg1;
- (void)hideAfterDelay:(double)arg1;
- (void)hide;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)_showAnimation;
- (void)showWithText:(id)arg1 progressType:(unsigned long long)arg2;
- (void)showWithText:(id)arg1 image:(id)arg2;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
