//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface InAppBrowserEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *eventData; // @dynamic eventData;
@property(copy, nonatomic) NSString *eventName; // @dynamic eventName;
@property(nonatomic) _Bool hasEventData; // @dynamic hasEventData;
@property(nonatomic) _Bool hasEventName; // @dynamic hasEventName;
@property(nonatomic) _Bool hasTimeStamp; // @dynamic hasTimeStamp;
@property(nonatomic) long long timeStamp; // @dynamic timeStamp;

@end
