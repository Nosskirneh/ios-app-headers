//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTElementsCommand-Protocol.h"

@class NSData, NSString, YTISearchEndpointInteractionLoggingExtension, YTISearchNavigationSupportedConfigs;

@interface YTISearchEndpoint : GPBMessage <YTElementsCommand>
{
}

+ (id)descriptor;
- (void)executeWithCommand:(id)arg1 context:(id)arg2 sender:(id)arg3 touch:(id)arg4;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(copy, nonatomic) NSString *cowatchServerParams; // @dynamic cowatchServerParams;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *displayQuery; // @dynamic displayQuery;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasCowatchServerParams; // @dynamic hasCowatchServerParams;
@property(nonatomic) _Bool hasDisplayQuery; // @dynamic hasDisplayQuery;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasInteractionLoggingExtension; // @dynamic hasInteractionLoggingExtension;
@property(nonatomic) _Bool hasNavigationConfig; // @dynamic hasNavigationConfig;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasQueryIntent; // @dynamic hasQueryIntent;
@property(nonatomic) _Bool hasUncorrectedOriginalQuery; // @dynamic hasUncorrectedOriginalQuery;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTISearchEndpointInteractionLoggingExtension *interactionLoggingExtension; // @dynamic interactionLoggingExtension;
@property(retain, nonatomic) YTISearchNavigationSupportedConfigs *navigationConfig; // @dynamic navigationConfig;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(copy, nonatomic) NSData *queryIntent; // @dynamic queryIntent;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *uncorrectedOriginalQuery; // @dynamic uncorrectedOriginalQuery;

@end

