//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, OrchButton, OrchInfoMessage, OrchUiField;

@interface OrchOtpField : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchButton *button; // @dynamic button;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(nonatomic) _Bool hasInfoMessage; // @dynamic hasInfoMessage;
@property(nonatomic) _Bool hasOtp; // @dynamic hasOtp;
@property(nonatomic) _Bool hasOtpFromSmsRetrievalRegex; // @dynamic hasOtpFromSmsRetrievalRegex;
@property(nonatomic) _Bool hasOtpSenderNumberRegex; // @dynamic hasOtpSenderNumberRegex;
@property(retain, nonatomic) OrchInfoMessage *infoMessage; // @dynamic infoMessage;
@property(retain, nonatomic) OrchUiField *otp; // @dynamic otp;
@property(copy, nonatomic) NSString *otpFromSmsRetrievalRegex; // @dynamic otpFromSmsRetrievalRegex;
@property(copy, nonatomic) NSString *otpSenderNumberRegex; // @dynamic otpSenderNumberRegex;

@end

