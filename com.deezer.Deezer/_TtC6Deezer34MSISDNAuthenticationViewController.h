//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Deezer20MSISDNViewController.h"

@class UILabel, UITextField;

@interface _TtC6Deezer34MSISDNAuthenticationViewController : _TtC6Deezer20MSISDNViewController
{
    // Error parsing type: , name: countryName
    // Error parsing type: , name: countryCode
    // Error parsing type: , name: relogHeader
    // Error parsing type: , name: relogFooter
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: isDissociationContext
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)canSubmitwithPhoneWithPhoneText:(id)arg1;
- (_Bool)canSubmit;
- (void)hideKeyboard;
- (_Bool)isValidCountry;
- (void)updateCountryCodeField;
- (void)onSubmitTouchUpInside:(id)arg1;
- (void)layout;
- (void)localizeUI;
- (id)titleSubmitButton;
- (void)configurationView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)logUserAction;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) _Bool isDissociationContext; // @synthesize isDissociationContext;
@property(nonatomic, readonly) _Bool isRelogContext;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UILabel *relogFooter; // @synthesize relogFooter;
@property(nonatomic) __weak UILabel *relogHeader; // @synthesize relogHeader;
@property(nonatomic) __weak UITextField *countryCode; // @synthesize countryCode;
@property(nonatomic) __weak UITextField *countryName; // @synthesize countryName;

@end

