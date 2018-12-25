//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class FixInstrumentPage, OrchResponseContext, OrchSecureDataHeader, OrchUiError, OrchWidgetReference;

@interface FixInstrumentSubmitResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchResponseContext *context; // @dynamic context;
@property(retain, nonatomic) OrchUiError *error; // @dynamic error;
@property(nonatomic) _Bool flowComplete; // @dynamic flowComplete;
@property(nonatomic) int flowInstruction; // @dynamic flowInstruction;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasFlowComplete; // @dynamic hasFlowComplete;
@property(nonatomic) _Bool hasFlowInstruction; // @dynamic hasFlowInstruction;
@property(nonatomic) _Bool hasNextPage; // @dynamic hasNextPage;
@property(nonatomic) _Bool hasNextWidget; // @dynamic hasNextWidget;
@property(nonatomic) _Bool hasSecureHeader; // @dynamic hasSecureHeader;
@property(retain, nonatomic) FixInstrumentPage *nextPage; // @dynamic nextPage;
@property(retain, nonatomic) OrchWidgetReference *nextWidget; // @dynamic nextWidget;
@property(retain, nonatomic) OrchSecureDataHeader *secureHeader; // @dynamic secureHeader;

@end

