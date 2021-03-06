//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface GRCEndpointerEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int decoderLatencyMsec; // @dynamic decoderLatencyMsec;
@property(nonatomic) long long detectedTimeUsec; // @dynamic detectedTimeUsec;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasDecoderLatencyMsec; // @dynamic hasDecoderLatencyMsec;
@property(nonatomic) _Bool hasDetectedTimeUsec; // @dynamic hasDetectedTimeUsec;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasSilenceThresholdMsec; // @dynamic hasSilenceThresholdMsec;
@property(nonatomic) _Bool hasTimeUsec; // @dynamic hasTimeUsec;
@property(nonatomic) long long silenceThresholdMsec; // @dynamic silenceThresholdMsec;
@property(nonatomic) long long timeUsec; // @dynamic timeUsec;

@end

