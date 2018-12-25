//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIUserCompleteAvatar;

@interface YTIConnectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUserCompleteAvatar *avatar; // @dynamic avatar;
@property(retain, nonatomic) YTIButtonSupportedRenderers *blockButton; // @dynamic blockButton;
@property(copy, nonatomic) NSString *connectionId; // @dynamic connectionId;
@property(retain, nonatomic) YTICommand *contactMenuEndpoint; // @dynamic contactMenuEndpoint;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasBlockButton; // @dynamic hasBlockButton;
@property(nonatomic) _Bool hasConnectionId; // @dynamic hasConnectionId;
@property(nonatomic) _Bool hasContactMenuEndpoint; // @dynamic hasContactMenuEndpoint;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasProtoCreationTimestampMs; // @dynamic hasProtoCreationTimestampMs;
@property(nonatomic) _Bool hasRemoveButton; // @dynamic hasRemoveButton;
@property(nonatomic) _Bool hasSendShareToContactsEndpoint; // @dynamic hasSendShareToContactsEndpoint;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUserPublicName; // @dynamic hasUserPublicName;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(nonatomic) long long protoCreationTimestampMs; // @dynamic protoCreationTimestampMs;
@property(retain, nonatomic) YTIButtonSupportedRenderers *removeButton; // @dynamic removeButton;
@property(retain, nonatomic) YTICommand *sendShareToContactsEndpoint; // @dynamic sendShareToContactsEndpoint;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *userPublicName; // @dynamic userPublicName;

@end

