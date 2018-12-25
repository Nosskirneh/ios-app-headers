//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIEditConversationNameSupportedRenderers, YTIFormattedString, YTIIcon;

@interface YTIConversationParticipantSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *conversationEndpoint; // @dynamic conversationEndpoint;
@property(retain, nonatomic) YTICommand *editConversationNameEntryEndpoint; // @dynamic editConversationNameEntryEndpoint;
@property(retain, nonatomic) YTIEditConversationNameSupportedRenderers *editConversationNameRenderers; // @dynamic editConversationNameRenderers;
@property(nonatomic) _Bool hasConversationEndpoint; // @dynamic hasConversationEndpoint;
@property(nonatomic) _Bool hasEditConversationNameEntryEndpoint; // @dynamic hasEditConversationNameEntryEndpoint;
@property(nonatomic) _Bool hasEditConversationNameRenderers; // @dynamic hasEditConversationNameRenderers;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleIcon; // @dynamic hasTitleIcon;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *participantsArray; // @dynamic participantsArray;
@property(readonly, nonatomic) unsigned long long participantsArray_Count; // @dynamic participantsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIIcon *titleIcon; // @dynamic titleIcon;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
