//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommunityPostSectionRenderer, YTIConnectionSectionRenderer, YTIMessageInputSectionRenderer, YTISenderIdSectionRenderer, YTIThirdPartyNetworkSectionRenderer;

@interface YTISharePanelSectionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommunityPostSectionRenderer *communityPostSectionRenderer; // @dynamic communityPostSectionRenderer;
@property(retain, nonatomic) YTIConnectionSectionRenderer *connectionSection; // @dynamic connectionSection;
@property(nonatomic) _Bool hasCommunityPostSectionRenderer; // @dynamic hasCommunityPostSectionRenderer;
@property(nonatomic) _Bool hasConnectionSection; // @dynamic hasConnectionSection;
@property(nonatomic) _Bool hasMessageInputSection; // @dynamic hasMessageInputSection;
@property(nonatomic) _Bool hasSenderIdSectionRenderer; // @dynamic hasSenderIdSectionRenderer;
@property(nonatomic) _Bool hasThirdPartyNetworkSection; // @dynamic hasThirdPartyNetworkSection;
@property(retain, nonatomic) YTIMessageInputSectionRenderer *messageInputSection; // @dynamic messageInputSection;
@property(retain, nonatomic) YTISenderIdSectionRenderer *senderIdSectionRenderer; // @dynamic senderIdSectionRenderer;
@property(retain, nonatomic) YTIThirdPartyNetworkSectionRenderer *thirdPartyNetworkSection; // @dynamic thirdPartyNetworkSection;

@end

