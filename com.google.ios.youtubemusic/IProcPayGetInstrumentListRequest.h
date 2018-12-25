//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, OrchClientContext;

@interface IProcPayGetInstrumentListRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *clientToken; // @dynamic clientToken;
@property(nonatomic) _Bool collectCvnForCreditCard; // @dynamic collectCvnForCreditCard;
@property(nonatomic) _Bool collectPinForKoreanCard; // @dynamic collectPinForKoreanCard;
@property(retain, nonatomic) OrchClientContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *customerLegalCountryGuess; // @dynamic customerLegalCountryGuess;
@property(nonatomic) _Bool displayBrandImage; // @dynamic displayBrandImage;
@property(copy, nonatomic) NSString *facilitationPaymentDataRequest; // @dynamic facilitationPaymentDataRequest;
@property(copy, nonatomic) NSString *guestEmail; // @dynamic guestEmail;
@property(nonatomic) _Bool guestUser; // @dynamic guestUser;
@property(nonatomic) _Bool hasClientToken; // @dynamic hasClientToken;
@property(nonatomic) _Bool hasCollectCvnForCreditCard; // @dynamic hasCollectCvnForCreditCard;
@property(nonatomic) _Bool hasCollectPinForKoreanCard; // @dynamic hasCollectPinForKoreanCard;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCustomerLegalCountryGuess; // @dynamic hasCustomerLegalCountryGuess;
@property(nonatomic) _Bool hasDisplayBrandImage; // @dynamic hasDisplayBrandImage;
@property(nonatomic) _Bool hasFacilitationPaymentDataRequest; // @dynamic hasFacilitationPaymentDataRequest;
@property(nonatomic) _Bool hasGuestEmail; // @dynamic hasGuestEmail;
@property(nonatomic) _Bool hasGuestUser; // @dynamic hasGuestUser;
@property(nonatomic) _Bool hasIsTestMode; // @dynamic hasIsTestMode;
@property(nonatomic) _Bool hasReturnThinActionTokens; // @dynamic hasReturnThinActionTokens;
@property(nonatomic) _Bool isTestMode; // @dynamic isTestMode;
@property(nonatomic) _Bool returnThinActionTokens; // @dynamic returnThinActionTokens;

@end
