//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class PlaylogMusicClientExtension_PinningEventInfo_PinDetails, PlaylogMusicClientExtension_PinningEventInfo_PinningStatusDetails, PlaylogMusicClientExtension_PinningEventInfo_UnpinDetails;

@interface PlaylogMusicClientExtension_PinningEventInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasPinDetails; // @dynamic hasPinDetails;
@property(nonatomic) _Bool hasPinningStatusDetails; // @dynamic hasPinningStatusDetails;
@property(nonatomic) _Bool hasUnpinDetails; // @dynamic hasUnpinDetails;
@property(retain, nonatomic) PlaylogMusicClientExtension_PinningEventInfo_PinDetails *pinDetails; // @dynamic pinDetails;
@property(retain, nonatomic) PlaylogMusicClientExtension_PinningEventInfo_PinningStatusDetails *pinningStatusDetails; // @dynamic pinningStatusDetails;
@property(retain, nonatomic) PlaylogMusicClientExtension_PinningEventInfo_UnpinDetails *unpinDetails; // @dynamic unpinDetails;

@end
