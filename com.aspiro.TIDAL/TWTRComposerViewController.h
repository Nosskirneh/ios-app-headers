//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, TWTRAPIClient, TWTRCardConfiguration, TWTRComposerActionBar, TWTRComposerContentView, TWTRComposerPresenter, TWTRComposerTheme, TWTRComposerTopBar, TWTRUser, UITraitCollection, UIView;
@protocol TWTRComposerViewControllerDelegate;

@interface TWTRComposerViewController : UIViewController <UIViewControllerTransitioningDelegate, UIScrollViewDelegate>
{
    _Bool _textFieldHasBecomeFirstResponder;
    id <TWTRComposerViewControllerDelegate> _delegate;
    TWTRComposerTheme *_theme;
    TWTRComposerPresenter *_presenter;
    TWTRAPIClient *_APIClient;
    TWTRUser *_user;
    TWTRCardConfiguration *_cardConfig;
    TWTRComposerTopBar *_topBar;
    TWTRComposerActionBar *_actionBar;
    TWTRComposerContentView *_contentView;
    UIView *_bottomSeparatorLine;
    UIView *_topSeparatorLine;
    NSLayoutConstraint *_topBarHeightConstraint;
    UITraitCollection *_targetTraitCollection;
}

@property(retain, nonatomic) UITraitCollection *targetTraitCollection; // @synthesize targetTraitCollection=_targetTraitCollection;
@property(readonly, nonatomic) NSLayoutConstraint *topBarHeightConstraint; // @synthesize topBarHeightConstraint=_topBarHeightConstraint;
@property(readonly, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(readonly, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(readonly, nonatomic) TWTRComposerContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) TWTRComposerActionBar *actionBar; // @synthesize actionBar=_actionBar;
@property(readonly, nonatomic) TWTRComposerTopBar *topBar; // @synthesize topBar=_topBar;
@property(readonly, nonatomic) TWTRCardConfiguration *cardConfig; // @synthesize cardConfig=_cardConfig;
@property(retain, nonatomic) TWTRUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) TWTRAPIClient *APIClient; // @synthesize APIClient=_APIClient;
@property(retain, nonatomic) TWTRComposerPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) TWTRComposerTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <TWTRComposerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)notifyDelegateTweetOperationFinishedWithTweet:(id)arg1 error:(id)arg2;
- (void)sendTweet;
- (void)handleCloseButton;
- (void)fetchUserObject:(CDUnknownBlockType)arg1;
- (void)updateProfileImageViewWithUser:(id)arg1;
- (void)updateProfileImageView;
- (void)updateCharacterCountLabelColor:(long long)arg1;
- (void)updateCharacterCountLabelWithRemainingCount:(long long)arg1;
- (id)makeSeparatorLine;
- (id)makeComposerContentView;
- (id)makeActionBar;
- (id)makeTopBar;
- (void)updateThemedViews;
- (void)setupSubviews;
- (_Bool)isCompactHorizontalSizeClass;
- (_Bool)shouldShowCompressedBarsForSize:(struct CGSize)arg1 interfaceOrientation:(long long)arg2;
- (double)topBarHeightForSize:(struct CGSize)arg1 interfaceOrientation:(long long)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 cardConfiguration:(id)arg2;
- (id)initWithUserID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

