//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString;

@interface YTIChannelLegalInfoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool autoscroll; // @dynamic autoscroll;
@property(nonatomic) _Bool hasAutoscroll; // @dynamic hasAutoscroll;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;

@end

