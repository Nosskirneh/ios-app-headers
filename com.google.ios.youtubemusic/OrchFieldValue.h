//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class OrchAddressFormValue, OrchCountrySelectorValue, OrchNameFormValue, OrchOtpFieldValue, OrchPhoneFormValue, OrchUiFieldValue;

@interface OrchFieldValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchAddressFormValue *addressFormValue; // @dynamic addressFormValue;
@property(retain, nonatomic) OrchCountrySelectorValue *countrySelectorValue; // @dynamic countrySelectorValue;
@property(readonly, nonatomic) int fieldvalueOneOfCase; // @dynamic fieldvalueOneOfCase;
@property(retain, nonatomic) OrchNameFormValue *nameFormValue; // @dynamic nameFormValue;
@property(retain, nonatomic) OrchOtpFieldValue *otpFieldValue; // @dynamic otpFieldValue;
@property(retain, nonatomic) OrchPhoneFormValue *phoneFormValue; // @dynamic phoneFormValue;
@property(retain, nonatomic) OrchUiFieldValue *uiFieldValue; // @dynamic uiFieldValue;

@end

