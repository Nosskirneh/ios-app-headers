//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UIButton, UILabel, UITextField, UIView;

@interface _TtC7TV4Play30TV4PasswordTableViewController : UITableViewController
{
    // Error parsing type: , name: loginInfoViewController
    // Error parsing type: , name: infoViewHeight
    // Error parsing type: , name: loginSingleton
    // Error parsing type: , name: tapGestureRecognizer
    // Error parsing type: , name: prevButton
    // Error parsing type: , name: nextButton
    // Error parsing type: , name: prevButtonButton
    // Error parsing type: , name: nextButtonButton
    // Error parsing type: , name: switchToLoginSegmentVar
    // Error parsing type: , name: zipCreateViewController
    // Error parsing type: , name: latestEmailAddressCheckedForExists
    // Error parsing type: , name: segmentedControlBackgroundView
    // Error parsing type: , name: segmentedControl
    // Error parsing type: , name: emailTextField
    // Error parsing type: , name: passwordTextField
    // Error parsing type: , name: passwordInfoLabel
    // Error parsing type: , name: forgotPasswordButton
    // Error parsing type: , name: bigNextButton
    // Error parsing type: , name: pervideoCellBackgroundView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)switchToLoginSegment;
- (void)cancelButtonWasTapped;
- (void)addCancelButton;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)userTappedOnBackground;
- (void)resignKeyboard;
- (void)previousTextField;
- (void)nextTextField;
- (void)switchToLoginSegmentByNotification;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)nextButtonWasPressed:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)switchedViews:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)applicationUserInterfaceHasToBeResetAndSentBackToStartScreenAfterLongInactivityInBackground;
- (void)viewDidAppear:(_Bool)arg1;
- (void)handleNewsPushNotificationWillBePlayedSoon:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIView *pervideoCellBackgroundView; // @synthesize pervideoCellBackgroundView;
@property(nonatomic) __weak UIButton *bigNextButton; // @synthesize bigNextButton;
@property(nonatomic) __weak UIButton *forgotPasswordButton; // @synthesize forgotPasswordButton;
@property(nonatomic) __weak UILabel *passwordInfoLabel; // @synthesize passwordInfoLabel;
@property(nonatomic) __weak UITextField *passwordTextField; // @synthesize passwordTextField;
@property(nonatomic) __weak UITextField *emailTextField; // @synthesize emailTextField;
@property(nonatomic) __weak UIView *segmentedControlBackgroundView; // @synthesize segmentedControlBackgroundView;

@end
