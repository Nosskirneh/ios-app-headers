//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIButton, UITextField;

@interface ANGSignupView : UIView <UITextFieldDelegate>
{
    UITextField *_nameField;
    UITextField *_emailField;
    UITextField *_monthField;
    UITextField *_dayField;
    UITextField *_yearField;
    UIButton *_maleButton;
    UIButton *_femaleButton;
    NSLayoutConstraint *_textFieldHeightConstraint;
    UITextField *_activeTextField;
    long long _chosenGender;
}

@property(nonatomic) long long chosenGender; // @synthesize chosenGender=_chosenGender;
@property(retain, nonatomic) UITextField *activeTextField; // @synthesize activeTextField=_activeTextField;
@property(retain, nonatomic) NSLayoutConstraint *textFieldHeightConstraint; // @synthesize textFieldHeightConstraint=_textFieldHeightConstraint;
@property(retain, nonatomic) UIButton *femaleButton; // @synthesize femaleButton=_femaleButton;
@property(retain, nonatomic) UIButton *maleButton; // @synthesize maleButton=_maleButton;
@property(retain, nonatomic) UITextField *yearField; // @synthesize yearField=_yearField;
@property(retain, nonatomic) UITextField *dayField; // @synthesize dayField=_dayField;
@property(retain, nonatomic) UITextField *monthField; // @synthesize monthField=_monthField;
@property(retain, nonatomic) UITextField *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) UITextField *nameField; // @synthesize nameField=_nameField;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (long long)selectedGender;
- (id)birthday;
- (id)email;
- (id)name;
- (_Bool)validateData;
- (void)femaleButtonAction:(id)arg1;
- (void)maleButtonAction:(id)arg1;
- (void)updateGenderButtons;
- (void)setup;
- (id)init;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

