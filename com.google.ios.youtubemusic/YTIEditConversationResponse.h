//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTICommand, YTIResponseContext;

@interface YTIEditConversationResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) NSMutableArray *commandsArray; // @dynamic commandsArray;
@property(readonly, nonatomic) unsigned long long commandsArray_Count; // @dynamic commandsArray_Count;
@property(copy, nonatomic) NSString *conversationIdToRefresh; // @dynamic conversationIdToRefresh;
@property(copy, nonatomic) NSString *conversationIdToRemove; // @dynamic conversationIdToRemove;
@property(nonatomic) _Bool hasConversationIdToRefresh; // @dynamic hasConversationIdToRefresh;
@property(nonatomic) _Bool hasConversationIdToRemove; // @dynamic hasConversationIdToRemove;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

