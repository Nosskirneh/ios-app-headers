//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIConversationInviteMorePanelSupportedRenderers, YTIResponseContext;

@interface YTIGetConversationInviteMorePanelResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) YTIConversationInviteMorePanelSupportedRenderers *contents; // @dynamic contents;
@property(nonatomic) _Bool hasContents; // @dynamic hasContents;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

