//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonRenderer, YTIOfflinePromoRenderer, YTIOfflineabilityRenderer;

@interface YTIOfflineabilitySupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer; // @dynamic buttonRenderer;
@property(nonatomic) _Bool hasButtonRenderer; // @dynamic hasButtonRenderer;
@property(nonatomic) _Bool hasOfflinePromoRenderer; // @dynamic hasOfflinePromoRenderer;
@property(nonatomic) _Bool hasOfflineabilityRenderer; // @dynamic hasOfflineabilityRenderer;
@property(retain, nonatomic) YTIOfflinePromoRenderer *offlinePromoRenderer; // @dynamic offlinePromoRenderer;
@property(retain, nonatomic) YTIOfflineabilityRenderer *offlineabilityRenderer; // @dynamic offlineabilityRenderer;

@end

