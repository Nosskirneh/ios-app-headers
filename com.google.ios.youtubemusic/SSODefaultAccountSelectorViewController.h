//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SSODefaultAccountListViewControllerDelegate-Protocol.h"

@class NSString, SSODefaultAccountListViewController, UIButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol SSODefaultAccountSelectorLoggingDelegate, SSOService;

@interface SSODefaultAccountSelectorViewController : UIViewController <SSODefaultAccountListViewControllerDelegate>
{
    id <SSOService> _ssoService;
    CDUnknownBlockType _completion;
    UIScrollView *_rootScrollView;
    UIImageView *_googleLogoView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIView *_accountsContainerView;
    SSODefaultAccountListViewController *_accountListController;
    UILabel *_fineprintLabel;
    UIButton *_doneButton;
    id <SSODefaultAccountSelectorLoggingDelegate> _loggingDelegate;
}

@property(nonatomic) __weak id <SSODefaultAccountSelectorLoggingDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
- (void).cxx_destruct;
- (void)didSwitchFromIdentity:(id)arg1 toIdentity:(id)arg2;
- (void)didTapDoneButton:(id)arg1;
- (void)invokeCompletionBlockWithIdentity:(id)arg1;
- (struct UIEdgeInsets)sso_safeAreaInsets;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)internalSSOService;
- (id)initWithService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

