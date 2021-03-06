//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, PostalAddress;

@interface OrchCreditCardDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bankName; // @dynamic bankName;
@property(retain, nonatomic) PostalAddress *billingAddress; // @dynamic billingAddress;
@property(copy, nonatomic) NSString *binBasedArtURL; // @dynamic binBasedArtURL;
@property(copy, nonatomic) NSString *cardDescription; // @dynamic cardDescription;
@property(copy, nonatomic) NSString *cardNumberSuffix; // @dynamic cardNumberSuffix;
@property(copy, nonatomic) NSString *cardholderName; // @dynamic cardholderName;
@property(nonatomic) long long expirationMonth; // @dynamic expirationMonth;
@property(nonatomic) long long expirationYear; // @dynamic expirationYear;
@property(nonatomic) _Bool hasBankName; // @dynamic hasBankName;
@property(nonatomic) _Bool hasBillingAddress; // @dynamic hasBillingAddress;
@property(nonatomic) _Bool hasBinBasedArtURL; // @dynamic hasBinBasedArtURL;
@property(nonatomic) _Bool hasCardDescription; // @dynamic hasCardDescription;
@property(nonatomic) _Bool hasCardNumberSuffix; // @dynamic hasCardNumberSuffix;
@property(nonatomic) _Bool hasCardholderName; // @dynamic hasCardholderName;
@property(nonatomic) _Bool hasExpirationMonth; // @dynamic hasExpirationMonth;
@property(nonatomic) _Bool hasExpirationYear; // @dynamic hasExpirationYear;
@property(nonatomic) _Bool hasIntegratorSpecificCardType; // @dynamic hasIntegratorSpecificCardType;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(nonatomic) _Bool hasSequenceNumber; // @dynamic hasSequenceNumber;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(nonatomic) int integratorSpecificCardType; // @dynamic integratorSpecificCardType;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(copy, nonatomic) NSString *sequenceNumber; // @dynamic sequenceNumber;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

