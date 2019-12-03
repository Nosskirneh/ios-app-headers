//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSubviewVC.h"

#import "AKFViewControllerDelegate-Protocol.h"
#import "PhoneLoginDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSDateFormatter, NSIndexPath, NSMutableDictionary, NSString, UIButton, UIDatePicker, UIImageView, UIPickerView, UITextField, UIView;

@interface SSVC_EditProfile : SettingsSubviewVC <UITextFieldDelegate, AKFViewControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource, PhoneLoginDelegate>
{
    NSMutableDictionary *fetchResponse;
    NSMutableDictionary *originalValues;
    UITextField *currentField;
    NSIndexPath *currentIndexPath;
    NSArray *indexPathHash;
    NSArray *fieldNameHash;
    double tableFullHeight;
    _Bool viewSetUp;
    _Bool isEmailLoginCredential;
    _Bool mergeStatus;
    UIDatePicker *datePicker;
    UIPickerView *genderPicker;
    UIView *pickerToolbar;
    UIButton *doneBtn;
    UIButton *cancelBtn;
    NSDateFormatter *serverDateFormatter;
    NSDateFormatter *displayDateFormatter;
    UIView *header;
    UIImageView *userImage;
    UIView *FBConnectFooter;
    UIButton *FBConnectBtn;
}

+ (id)saavnTheme;
- (void).cxx_destruct;
- (void)cancelSettings;
- (void)saveSettings;
- (void)showFBPermissionError:(_Bool)arg1 withError:(id)arg2;
- (void)linkFBAccount:(id)arg1;
- (void)getFacebookDetails;
- (void)FBConnect:(id)arg1;
- (id)getCountryCodeDictionary;
- (void)viewControllerDidCancel:(id)arg1;
- (void)viewController:(id)arg1 didFailWithError:(id)arg2;
- (void)viewController:(id)arg1 didCompleteLoginWithAccessToken:(id)arg2 state:(id)arg3;
- (void)prepareLoginViewController:(id)arg1;
- (void)callFbAccountKit:(id)arg1;
- (void)mergeStatusAlert:(id)arg1;
- (void)mergeStatusAlertDict:(id)arg1;
- (void)updateUserData:(id)arg1;
- (void)updateUserWithoutMerge;
- (void)updateUserWithMerge:(id)arg1;
- (void)verifyMergedEmail:(id)arg1;
- (void)verifyMergePassword:(id)arg1;
- (void)handlePhoneMerge:(id)arg1;
- (void)canMerge:(id)arg1 withIdentifier:(id)arg2;
- (_Bool)isValidEmail:(id)arg1;
- (_Bool)validateFields;
- (id)getGenderOptions;
- (id)formatGenderForDisplay:(id)arg1;
- (id)formatDOBForDisplay:(id)arg1;
- (void)didSelectPhoneNumber:(id)arg1 tokenId:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)cancelPicker;
- (void)updatePickerField;
- (void)updateKeyboard;
- (void)updateUIMode;
- (void)initPickers;
- (void)parseAndUpdateData;
- (void)fetchSuccess:(id)arg1;
- (void)initFBFooter;
- (void)initHeader;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
