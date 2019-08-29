//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMVastObject.h"

@class NSString;

@interface IMVastTrackingEvent : IMVastObject
{
    long long _event;
    NSString *_url;
    NSString *_eventName;
}

@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (long long)vastEventForTrackingEvent:(id)arg1;

@end

