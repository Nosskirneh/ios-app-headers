//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIDismissableDialogRenderer, YTIPaidChannelUpsellDialogRenderer, YTISubscribeMessageEndpointRenderer, YTIYpcOffersListRenderer;

@interface YTISubscribeMessageSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDismissableDialogRenderer *dismissableDialogRenderer; // @dynamic dismissableDialogRenderer;
@property(nonatomic) _Bool hasDismissableDialogRenderer; // @dynamic hasDismissableDialogRenderer;
@property(nonatomic) _Bool hasPaidChannelUpsellDialogRenderer; // @dynamic hasPaidChannelUpsellDialogRenderer;
@property(nonatomic) _Bool hasSubscribeMessageEndpointRenderer; // @dynamic hasSubscribeMessageEndpointRenderer;
@property(nonatomic) _Bool hasYpcOffersListRenderer; // @dynamic hasYpcOffersListRenderer;
@property(retain, nonatomic) YTIPaidChannelUpsellDialogRenderer *paidChannelUpsellDialogRenderer; // @dynamic paidChannelUpsellDialogRenderer;
@property(retain, nonatomic) YTISubscribeMessageEndpointRenderer *subscribeMessageEndpointRenderer; // @dynamic subscribeMessageEndpointRenderer;
@property(retain, nonatomic) YTIYpcOffersListRenderer *ypcOffersListRenderer; // @dynamic ypcOffersListRenderer;

@end
