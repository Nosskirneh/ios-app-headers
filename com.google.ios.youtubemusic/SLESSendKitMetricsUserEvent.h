//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface SLESSendKitMetricsUserEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int animationFps; // @dynamic animationFps;
@property(nonatomic) int entityCount; // @dynamic entityCount;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasAnimationFps; // @dynamic hasAnimationFps;
@property(nonatomic) _Bool hasEntityCount; // @dynamic hasEntityCount;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasLatencyUsec; // @dynamic hasLatencyUsec;
@property(nonatomic) _Bool hasMemoryAllocatedDelta; // @dynamic hasMemoryAllocatedDelta;
@property(nonatomic) long long latencyUsec; // @dynamic latencyUsec;
@property(nonatomic) long long memoryAllocatedDelta; // @dynamic memoryAllocatedDelta;

@end
