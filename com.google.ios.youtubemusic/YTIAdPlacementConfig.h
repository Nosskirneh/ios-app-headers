//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAdPlacementTimeOffset;

@interface YTIAdPlacementConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAdPlacementTimeOffset *adTimeOffset; // @dynamic adTimeOffset;
@property(nonatomic) _Bool hasAdTimeOffset; // @dynamic hasAdTimeOffset;
@property(nonatomic) _Bool hasHideCueRangeMarker; // @dynamic hasHideCueRangeMarker;
@property(nonatomic) _Bool hasInterruptive; // @dynamic hasInterruptive;
@property(nonatomic) _Bool hasKind; // @dynamic hasKind;
@property(nonatomic) _Bool hideCueRangeMarker; // @dynamic hideCueRangeMarker;
@property(nonatomic) _Bool interruptive; // @dynamic interruptive;
@property(nonatomic) int kind; // @dynamic kind;

@end

