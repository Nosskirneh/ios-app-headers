//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SSOExpressSignInViewControllerDelegate-Protocol.h"
#import "SSOInterfaceControllerDelegate-Protocol.h"

@class MDXSeamlessSignInRequest, NSString;
@protocol MDXChooseIdentityViewControllerDelegate;

@interface MDXChooseIdentityViewController : UIViewController <SSOExpressSignInViewControllerDelegate, SSOInterfaceControllerDelegate>
{
    MDXSeamlessSignInRequest *_request;
    id <MDXChooseIdentityViewControllerDelegate> _delegate;
}

+ (id)configuredSignInViewControllerWithSSOService:(id)arg1 theme:(id)arg2;
@property(nonatomic) __weak id <MDXChooseIdentityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)presentingViewControllerForInterfaceController:(id)arg1;
- (long long)interfaceControllerAccountSelectorAppearance:(id)arg1;
- (void)expressSignInViewController:(id)arg1 didSignInIdentity:(id)arg2 error:(id)arg3;
- (void)completeStepWithIdentity:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

