//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRMessagingChannelEvent.h"

@class NSString;

@interface DZRWebSocketMessagingChannelEvent : DZRMessagingChannelEvent
{
    NSString *_channelName;
    NSString *_eventName;
}

@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
- (void).cxx_destruct;
- (id)initWithChannelName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

