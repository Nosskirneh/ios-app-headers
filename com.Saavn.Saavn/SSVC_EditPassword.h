//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSubviewVC.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UITextField;

@interface SSVC_EditPassword : SettingsSubviewVC <UITextFieldDelegate>
{
    _Bool viewSetUp;
    double tableFullHeight;
    UITextField *currentField;
    NSIndexPath *currentIndexPath;
    NSMutableArray *fieldStrings;
}

- (void).cxx_destruct;
- (void)saveSettings;
- (void)showGenericError;
- (void)doneSaving;
- (void)handleSaveResponse:(id)arg1;
- (_Bool)validateFields;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateKeyboard;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
