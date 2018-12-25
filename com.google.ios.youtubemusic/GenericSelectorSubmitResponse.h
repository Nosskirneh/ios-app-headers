//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GenericSelectorPage, OrchIntegratorCallbackData, OrchResponseContext, OrchUiError;

@interface GenericSelectorSubmitResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long addressId; // @dynamic addressId;
@property(retain, nonatomic) OrchIntegratorCallbackData *callbackData; // @dynamic callbackData;
@property(retain, nonatomic) OrchResponseContext *context; // @dynamic context;
@property(retain, nonatomic) OrchUiError *error; // @dynamic error;
@property(nonatomic) int flowInstruction; // @dynamic flowInstruction;
@property(nonatomic) _Bool hasAddressId; // @dynamic hasAddressId;
@property(nonatomic) _Bool hasCallbackData; // @dynamic hasCallbackData;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasFlowInstruction; // @dynamic hasFlowInstruction;
@property(nonatomic) _Bool hasNextPage; // @dynamic hasNextPage;
@property(retain, nonatomic) GenericSelectorPage *nextPage; // @dynamic nextPage;

@end

