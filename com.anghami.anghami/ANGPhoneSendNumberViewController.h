//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGPhoneViewController.h"

#import "LoaderDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class ANGAsyncImageView, NSString, Telco, UIButton, UILabel, UITextField, UIView;

@interface ANGPhoneSendNumberViewController : ANGPhoneViewController <UITextFieldDelegate, LoaderDelegate>
{
    Telco *_telco;
    UILabel *_titleLabel;
    UITextField *_phoneField;
    UITextField *_codeField;
    ANGAsyncImageView *_telcoImageView;
    UIButton *_saveButton;
    UIView *_phoneNumberContentView;
}

@property(nonatomic) __weak UIView *phoneNumberContentView; // @synthesize phoneNumberContentView=_phoneNumberContentView;
@property(nonatomic) __weak UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak ANGAsyncImageView *telcoImageView; // @synthesize telcoImageView=_telcoImageView;
@property(retain, nonatomic) UITextField *codeField; // @synthesize codeField=_codeField;
@property(retain, nonatomic) UITextField *phoneField; // @synthesize phoneField=_phoneField;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)loadingFinished:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)refreshSaveButton;
- (void)verifyAction:(id)arg1;
- (double)myTextFieldBottom;
- (int)myScreen;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

