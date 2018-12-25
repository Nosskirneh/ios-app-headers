//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIConversationItemHeartDetailsSupportedRenderers, YTIConversationItemHeartSupportedRenderers, YTIConversationItemMenuSupportedRenderers, YTIConversationItemStyle, YTIConversationUserBadge, YTIFormattedString, YTIMenuSupportedRenderers, YTIThumbnailDetails;

@interface YTIConversationTextItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *aggregationId; // @dynamic aggregationId;
@property(retain, nonatomic) YTICommand *contactMenuEndpoint; // @dynamic contactMenuEndpoint;
@property(retain, nonatomic) YTICommand *eventMenuEndpoint; // @dynamic eventMenuEndpoint;
@property(retain, nonatomic) YTICommand *eventMenuServiceEndpoint; // @dynamic eventMenuServiceEndpoint;
@property(nonatomic) _Bool hasAggregationId; // @dynamic hasAggregationId;
@property(nonatomic) _Bool hasContactMenuEndpoint; // @dynamic hasContactMenuEndpoint;
@property(nonatomic) _Bool hasEventMenuEndpoint; // @dynamic hasEventMenuEndpoint;
@property(nonatomic) _Bool hasEventMenuServiceEndpoint; // @dynamic hasEventMenuServiceEndpoint;
@property(nonatomic) _Bool hasHeartDetailsRenderer; // @dynamic hasHeartDetailsRenderer;
@property(nonatomic) _Bool hasHeartRenderer; // @dynamic hasHeartRenderer;
@property(nonatomic) _Bool hasIsHighlighted; // @dynamic hasIsHighlighted;
@property(nonatomic) _Bool hasItemActionsMenu; // @dynamic hasItemActionsMenu;
@property(nonatomic) _Bool hasPostText; // @dynamic hasPostText;
@property(nonatomic) _Bool hasProtoCreationTimestamp; // @dynamic hasProtoCreationTimestamp;
@property(nonatomic) _Bool hasReferenceUserBadge; // @dynamic hasReferenceUserBadge;
@property(nonatomic) _Bool hasReferenceUserConnectionMenu; // @dynamic hasReferenceUserConnectionMenu;
@property(nonatomic) _Bool hasReferenceUserText; // @dynamic hasReferenceUserText;
@property(nonatomic) _Bool hasReferenceUserThumbnail; // @dynamic hasReferenceUserThumbnail;
@property(nonatomic) _Bool hasRemoveHeartAccessiblityLabel; // @dynamic hasRemoveHeartAccessiblityLabel;
@property(nonatomic) _Bool hasSendHeartAccessiblityLabel; // @dynamic hasSendHeartAccessiblityLabel;
@property(nonatomic) _Bool hasShowChatBubble; // @dynamic hasShowChatBubble;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTemporaryClientId; // @dynamic hasTemporaryClientId;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasTimestampText; // @dynamic hasTimestampText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(retain, nonatomic) YTIConversationItemHeartDetailsSupportedRenderers *heartDetailsRenderer; // @dynamic heartDetailsRenderer;
@property(retain, nonatomic) YTIConversationItemHeartSupportedRenderers *heartRenderer; // @dynamic heartRenderer;
@property(nonatomic) _Bool isHighlighted; // @dynamic isHighlighted;
@property(retain, nonatomic) YTIConversationItemMenuSupportedRenderers *itemActionsMenu; // @dynamic itemActionsMenu;
@property(retain, nonatomic) YTIFormattedString *postText; // @dynamic postText;
@property(nonatomic) long long protoCreationTimestamp; // @dynamic protoCreationTimestamp;
@property(retain, nonatomic) YTIConversationUserBadge *referenceUserBadge; // @dynamic referenceUserBadge;
@property(retain, nonatomic) NSMutableArray *referenceUserBadgesArray; // @dynamic referenceUserBadgesArray;
@property(readonly, nonatomic) unsigned long long referenceUserBadgesArray_Count; // @dynamic referenceUserBadgesArray_Count;
@property(retain, nonatomic) YTIMenuSupportedRenderers *referenceUserConnectionMenu; // @dynamic referenceUserConnectionMenu;
@property(retain, nonatomic) YTIFormattedString *referenceUserText; // @dynamic referenceUserText;
@property(retain, nonatomic) YTIThumbnailDetails *referenceUserThumbnail; // @dynamic referenceUserThumbnail;
@property(copy, nonatomic) NSString *removeHeartAccessiblityLabel; // @dynamic removeHeartAccessiblityLabel;
@property(copy, nonatomic) NSString *sendHeartAccessiblityLabel; // @dynamic sendHeartAccessiblityLabel;
@property(nonatomic) _Bool showChatBubble; // @dynamic showChatBubble;
@property(retain, nonatomic) YTIConversationItemStyle *style; // @dynamic style;
@property(copy, nonatomic) NSString *temporaryClientId; // @dynamic temporaryClientId;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) YTIFormattedString *timestampText; // @dynamic timestampText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(copy, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end
