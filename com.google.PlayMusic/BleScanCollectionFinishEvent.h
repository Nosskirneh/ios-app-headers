//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface BleScanCollectionFinishEvent : GPBMessage
{
}

+ (id)descriptor;
+ (id)eventWithFinishReason:(int)arg1;

// Remaining properties
@property(nonatomic) int finishReason; // @dynamic finishReason;
@property(nonatomic) _Bool hasFinishReason; // @dynamic hasFinishReason;

@end

