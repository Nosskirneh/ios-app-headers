//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface PublishedDevice : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasActiveConnection; // @dynamic hasActiveConnection;
@property(nonatomic) _Bool hasHasActiveConnection; // @dynamic hasHasActiveConnection;
@property(nonatomic) _Bool hasReceiverMetricsId; // @dynamic hasReceiverMetricsId;
@property(copy, nonatomic) NSString *receiverMetricsId; // @dynamic receiverMetricsId;
@property(retain, nonatomic) NSMutableArray *supportedCriteriaArray; // @dynamic supportedCriteriaArray;
@property(readonly, nonatomic) unsigned long long supportedCriteriaArray_Count; // @dynamic supportedCriteriaArray_Count;

@end

