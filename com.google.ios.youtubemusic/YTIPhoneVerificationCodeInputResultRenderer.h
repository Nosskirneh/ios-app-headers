//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIPhoneVerificationCodeInputErrorScreenSupportedRenderers, YTIPhoneVerificationCodeInputSuccessScreenSupportedRenderers;

@interface YTIPhoneVerificationCodeInputResultRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIPhoneVerificationCodeInputErrorScreenSupportedRenderers *error; // @dynamic error;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) YTIPhoneVerificationCodeInputSuccessScreenSupportedRenderers *success; // @dynamic success;

@end
