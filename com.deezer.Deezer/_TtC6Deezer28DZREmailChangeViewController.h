//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DZFlatButton, NSArray, NSLayoutConstraint, UILabel, UITextField;

@interface _TtC6Deezer28DZREmailChangeViewController : UIViewController
{
    // Error parsing type: , name: popupTitle
    // Error parsing type: , name: currentEmailField
    // Error parsing type: , name: passwordField
    // Error parsing type: , name: mailField
    // Error parsing type: , name: mailConfirmationField
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: okButton
    // Error parsing type: , name: errorLabel
    // Error parsing type: , name: bottomConstraint
    // Error parsing type: , name: textFields
    // Error parsing type: , name: emailChangeModel.storage
    // Error parsing type: , name: keyboardNoteObservers
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dismissErrorWithCode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentError:(id)arg1;
- (void)cancellationButtonPressed:(id)arg1;
- (void)validationButtonPressed:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
@property(nonatomic, copy) NSArray *keyboardNoteObservers; // @synthesize keyboardNoteObservers;
@property(nonatomic, copy) NSArray *textFields; // @synthesize textFields;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint;
@property(nonatomic) __weak UILabel *errorLabel; // @synthesize errorLabel;
@property(nonatomic) __weak DZFlatButton *okButton; // @synthesize okButton;
@property(nonatomic) __weak DZFlatButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak UITextField *mailConfirmationField; // @synthesize mailConfirmationField;
@property(nonatomic) __weak UITextField *mailField; // @synthesize mailField;
@property(nonatomic) __weak UITextField *passwordField; // @synthesize passwordField;
@property(nonatomic) __weak UITextField *currentEmailField; // @synthesize currentEmailField;
@property(nonatomic) __weak UILabel *popupTitle; // @synthesize popupTitle;

@end

