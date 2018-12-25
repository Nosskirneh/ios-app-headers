//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTOfflineEndpoint-Protocol.h"

@class NSString, YTIOfflineEndpointPromoSupportedRenderers;

@interface YTIOfflineEndpoint : GPBMessage <YTOfflineEndpoint>
{
}

+ (id)descriptor;
@property(retain, nonatomic, setter=yt_setParams:) NSString *yt_params;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasAccessToOffline; // @dynamic hasAccessToOffline;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasHasAccessToOffline; // @dynamic hasHasAccessToOffline;
@property(nonatomic) _Bool hasOfflineId; // @dynamic hasOfflineId;
@property(nonatomic) _Bool hasPromo; // @dynamic hasPromo;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *offlineId; // @dynamic offlineId;
@property(retain, nonatomic) YTIOfflineEndpointPromoSupportedRenderers *promo; // @dynamic promo;
@property(readonly) Class superclass;

@end

