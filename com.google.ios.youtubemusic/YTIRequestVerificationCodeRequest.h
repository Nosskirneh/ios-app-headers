//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInnerTubeContext;

@interface YTIRequestVerificationCodeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int codeDeliveryMethod; // @dynamic codeDeliveryMethod;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) _Bool hasCodeDeliveryMethod; // @dynamic hasCodeDeliveryMethod;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;

@end
