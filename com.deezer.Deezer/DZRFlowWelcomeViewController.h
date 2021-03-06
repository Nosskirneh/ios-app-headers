//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonController.h"

@class DZRDynamicPageUser, NSLayoutConstraint, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView, _TtC6Deezer16IllustrationView;
@protocol DZRDynamicPageAction;

@interface DZRFlowWelcomeViewController : CommonController
{
    _Bool _needReonboard;
    NSLayoutConstraint *_containerHeightConstraint;
    NSLayoutConstraint *_containerWidthConstraint;
    NSLayoutConstraint *_firstToTopConstraint;
    NSLayoutConstraint *_secondToFirstConstraint;
    NSLayoutConstraint *_thirdToSecondConstraint;
    NSLayoutConstraint *_fourthToThirdConstraint;
    NSLayoutConstraint *_playButtonToBottomConstraint;
    NSLayoutConstraint *_playButtonWidthConstraint;
    NSLayoutConstraint *_playButtonHeightConstraint;
    UIVisualEffectView *_blurView;
    UILabel *_titleLabel;
    UILabel *_firstDescriptionLabel;
    UILabel *_secondDescriptionLabel;
    UIButton *_playButton;
    UIImageView *_logoImageView;
    UIView *_loadingSpinnerView;
    UIActivityIndicatorView *_loadingSpinner;
    _TtC6Deezer16IllustrationView *_backgroundRotatingView;
    DZRDynamicPageUser *_user;
    id <DZRDynamicPageAction> _playAction;
    unsigned long long _context;
}

@property(nonatomic) _Bool needReonboard; // @synthesize needReonboard=_needReonboard;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) id <DZRDynamicPageAction> playAction; // @synthesize playAction=_playAction;
@property(retain, nonatomic) DZRDynamicPageUser *user; // @synthesize user=_user;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *backgroundRotatingView; // @synthesize backgroundRotatingView=_backgroundRotatingView;
@property(nonatomic) __weak UIActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(nonatomic) __weak UIView *loadingSpinnerView; // @synthesize loadingSpinnerView=_loadingSpinnerView;
@property(nonatomic) __weak UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak UILabel *secondDescriptionLabel; // @synthesize secondDescriptionLabel=_secondDescriptionLabel;
@property(nonatomic) __weak UILabel *firstDescriptionLabel; // @synthesize firstDescriptionLabel=_firstDescriptionLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak NSLayoutConstraint *playButtonHeightConstraint; // @synthesize playButtonHeightConstraint=_playButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *playButtonWidthConstraint; // @synthesize playButtonWidthConstraint=_playButtonWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *playButtonToBottomConstraint; // @synthesize playButtonToBottomConstraint=_playButtonToBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *fourthToThirdConstraint; // @synthesize fourthToThirdConstraint=_fourthToThirdConstraint;
@property(nonatomic) __weak NSLayoutConstraint *thirdToSecondConstraint; // @synthesize thirdToSecondConstraint=_thirdToSecondConstraint;
@property(nonatomic) __weak NSLayoutConstraint *secondToFirstConstraint; // @synthesize secondToFirstConstraint=_secondToFirstConstraint;
@property(nonatomic) __weak NSLayoutConstraint *firstToTopConstraint; // @synthesize firstToTopConstraint=_firstToTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *containerWidthConstraint; // @synthesize containerWidthConstraint=_containerWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *containerHeightConstraint; // @synthesize containerHeightConstraint=_containerHeightConstraint;
- (void).cxx_destruct;
- (void)showNext;
- (void)goReonboard;
- (void)playFlow;
- (void)animate;
- (void)showViewAtIndex:(long long)arg1;
- (id)allVerticalSpacingConstraints;
- (id)allDelays;
- (id)allViews;
- (void)hideViews;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)populateUIForFlowTab;
- (void)reOnboardIfNeeded;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithReonboard:(_Bool)arg1;
- (id)initWithUser:(id)arg1 andAction:(id)arg2;

@end

