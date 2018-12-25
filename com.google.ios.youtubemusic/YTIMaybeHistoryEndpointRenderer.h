//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand;

@interface YTIMaybeHistoryEndpointRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUseNextHistoryItem; // @dynamic hasUseNextHistoryItem;
@property(nonatomic) _Bool hasUsePrevHistoryItem; // @dynamic hasUsePrevHistoryItem;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) _Bool useNextHistoryItem; // @dynamic useNextHistoryItem;
@property(nonatomic) _Bool usePrevHistoryItem; // @dynamic usePrevHistoryItem;

@end

