//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Deezer23StackableViewController.h"

@class NSLayoutConstraint, UIActivityIndicatorView, UIButton, UITextField;

@interface _TtC6Deezer32MailAuthenticationViewController : _TtC6Deezer23StackableViewController
{
    // Error parsing type: , name: email
    // Error parsing type: , name: password
    // Error parsing type: , name: signIn
    // Error parsing type: , name: signInSpinner
    // Error parsing type: , name: forgotPassword
    // Error parsing type: , name: onePassword
    // Error parsing type: , name: onePasswordWidthConstraint
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)useOnePassword:(id)arg1;
- (void)forgotPassword:(id)arg1;
- (void)login:(id)arg1;
- (void)presentError:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) NSLayoutConstraint *onePasswordWidthConstraint; // @synthesize onePasswordWidthConstraint;
@property(nonatomic) __weak UIButton *onePassword; // @synthesize onePassword;
@property(nonatomic) __weak UIButton *forgotPassword; // @synthesize forgotPassword;
@property(nonatomic) __weak UIActivityIndicatorView *signInSpinner; // @synthesize signInSpinner;
@property(nonatomic) __weak UIButton *signIn; // @synthesize signIn;
@property(nonatomic) __weak UITextField *password; // @synthesize password;
@property(nonatomic) __weak UITextField *email; // @synthesize email;

@end

