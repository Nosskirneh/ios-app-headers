//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface YTIAbrState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int audioBitrateKbps; // @dynamic audioBitrateKbps;
@property(retain, nonatomic) GPBInt32Array *availableVideoBitratesAverageKbpsArray; // @dynamic availableVideoBitratesAverageKbpsArray;
@property(readonly, nonatomic) unsigned long long availableVideoBitratesAverageKbpsArray_Count; // @dynamic availableVideoBitratesAverageKbpsArray_Count;
@property(nonatomic) float batteryLevel; // @dynamic batteryLevel;
@property(nonatomic) int bearerType; // @dynamic bearerType;
@property(nonatomic) _Bool hasAudioBitrateKbps; // @dynamic hasAudioBitrateKbps;
@property(nonatomic) _Bool hasBatteryLevel; // @dynamic hasBatteryLevel;
@property(nonatomic) _Bool hasBearerType; // @dynamic hasBearerType;
@property(nonatomic) _Bool hasIsStickyCeiling; // @dynamic hasIsStickyCeiling;
@property(nonatomic) _Bool hasJoinLatencyMs; // @dynamic hasJoinLatencyMs;
@property(nonatomic) _Bool hasLastManualDirection; // @dynamic hasLastManualDirection;
@property(nonatomic) _Bool hasLocalTimestampMs; // @dynamic hasLocalTimestampMs;
@property(nonatomic) _Bool hasReadaheadMs; // @dynamic hasReadaheadMs;
@property(nonatomic) _Bool hasRemainingChunks; // @dynamic hasRemainingChunks;
@property(nonatomic) _Bool hasTimeSinceLastManualFormatSelectionMs; // @dynamic hasTimeSinceLastManualFormatSelectionMs;
@property(nonatomic) _Bool hasViewportHeightPx; // @dynamic hasViewportHeightPx;
@property(nonatomic) _Bool hasViewportWidthPx; // @dynamic hasViewportWidthPx;
@property(nonatomic) _Bool hasWalltimeSinceRebufferMs; // @dynamic hasWalltimeSinceRebufferMs;
@property(nonatomic) _Bool isStickyCeiling; // @dynamic isStickyCeiling;
@property(nonatomic) int joinLatencyMs; // @dynamic joinLatencyMs;
@property(nonatomic) int lastManualDirection; // @dynamic lastManualDirection;
@property(nonatomic) long long localTimestampMs; // @dynamic localTimestampMs;
@property(nonatomic) int readaheadMs; // @dynamic readaheadMs;
@property(nonatomic) int remainingChunks; // @dynamic remainingChunks;
@property(nonatomic) long long timeSinceLastManualFormatSelectionMs; // @dynamic timeSinceLastManualFormatSelectionMs;
@property(retain, nonatomic) GPBInt32Array *trailingNetworkThroughputKbpsArray; // @dynamic trailingNetworkThroughputKbpsArray;
@property(readonly, nonatomic) unsigned long long trailingNetworkThroughputKbpsArray_Count; // @dynamic trailingNetworkThroughputKbpsArray_Count;
@property(nonatomic) int viewportHeightPx; // @dynamic viewportHeightPx;
@property(nonatomic) int viewportWidthPx; // @dynamic viewportWidthPx;
@property(nonatomic) int walltimeSinceRebufferMs; // @dynamic walltimeSinceRebufferMs;

@end

