//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AgeGatePresenterDelegate-Protocol.h"
#import "AgeTextFieldDelegate-Protocol.h"
#import "GenderSelectViewDelegate-Protocol.h"

@class AgeGatePickerPresenter, AgeTextFieldView, GenderOption, GenderSelectView, NSNumber, NSString, UIBarButtonItem;

@interface AgeGateSignUpViewController : BaseViewController <AgeTextFieldDelegate, GenderSelectViewDelegate, AgeGatePresenterDelegate>
{
    CDUnknownBlockType _completion;
    GenderOption *_selectedGenderOption;
    NSNumber *_selectedAge;
    NSString *_selectedGender;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    AgeGatePickerPresenter *_pickerPresenter;
    GenderSelectView *_genderSelectView;
    AgeTextFieldView *_ageSelectView;
}

@property(nonatomic) __weak AgeTextFieldView *ageSelectView; // @synthesize ageSelectView=_ageSelectView;
@property(nonatomic) __weak GenderSelectView *genderSelectView; // @synthesize genderSelectView=_genderSelectView;
@property(nonatomic) __weak AgeGatePickerPresenter *pickerPresenter; // @synthesize pickerPresenter=_pickerPresenter;
@property(nonatomic) __weak UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) NSString *selectedGender; // @synthesize selectedGender=_selectedGender;
@property(copy, nonatomic) NSNumber *selectedAge; // @synthesize selectedAge=_selectedAge;
@property(retain, nonatomic) GenderOption *selectedGenderOption; // @synthesize selectedGenderOption=_selectedGenderOption;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)genderSelectView:(id)arg1 didTapCustomButton:(id)arg2;
- (void)genderSelectView:(id)arg1 didChangeCustomGender:(id)arg2;
- (void)ageTextFieldViewDidEndEditing:(id)arg1;
- (void)ageTextFieldView:(id)arg1 didChangeAge:(id)arg2;
- (_Bool)canProceedWithSignUp;
- (_Bool)isGenderRequirementMet;
- (_Bool)isAgeRequirementMet;
- (void)showCustomGenderElements;
- (void)updateDoneButtonColor;
- (void)setupLabels;
- (void)doneButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)dismissElements:(id)arg1;
- (void)pickerDidSelectRow:(long long)arg1;
- (long long)screen;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

