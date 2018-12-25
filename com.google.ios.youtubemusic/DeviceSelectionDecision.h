//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface DeviceSelectionDecision : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool canBeHijacked; // @dynamic canBeHijacked;
@property(nonatomic) int duckingTimeoutMs; // @dynamic duckingTimeoutMs;
@property(nonatomic) _Bool hasCanBeHijacked; // @dynamic hasCanBeHijacked;
@property(nonatomic) _Bool hasDuckingTimeoutMs; // @dynamic hasDuckingTimeoutMs;
@property(nonatomic) _Bool hasIsFinal; // @dynamic hasIsFinal;
@property(nonatomic) _Bool hasMultiDeviceDuckingUuid; // @dynamic hasMultiDeviceDuckingUuid;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool isFinal; // @dynamic isFinal;
@property(copy, nonatomic) NSString *multiDeviceDuckingUuid; // @dynamic multiDeviceDuckingUuid;
@property(nonatomic) _Bool selected; // @dynamic selected;

@end

