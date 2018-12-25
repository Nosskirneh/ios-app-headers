//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, OrchResponseContext, OrchSecureDataHeader, OrchUiError;

@interface BuyflowInitializeTemplateResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buyflowTemplateArray; // @dynamic buyflowTemplateArray;
@property(readonly, nonatomic) unsigned long long buyflowTemplateArray_Count; // @dynamic buyflowTemplateArray_Count;
@property(retain, nonatomic) OrchResponseContext *context; // @dynamic context;
@property(retain, nonatomic) OrchUiError *error; // @dynamic error;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasSecureHeader; // @dynamic hasSecureHeader;
@property(retain, nonatomic) OrchSecureDataHeader *secureHeader; // @dynamic secureHeader;

@end

