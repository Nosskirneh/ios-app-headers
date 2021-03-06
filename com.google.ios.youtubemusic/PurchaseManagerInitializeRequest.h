//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, OrchRequestContext, PurchaseManagerPurchaseManagerParameters;

@interface PurchaseManagerInitializeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *clientParameters; // @dynamic clientParameters;
@property(retain, nonatomic) OrchRequestContext *context; // @dynamic context;
@property(copy, nonatomic) NSData *encryptedParameters; // @dynamic encryptedParameters;
@property(nonatomic) _Bool hasClientParameters; // @dynamic hasClientParameters;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasEncryptedParameters; // @dynamic hasEncryptedParameters;
@property(nonatomic) _Bool hasParameters; // @dynamic hasParameters;
@property(retain, nonatomic) PurchaseManagerPurchaseManagerParameters *parameters; // @dynamic parameters;

@end

