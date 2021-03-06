//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogEvent.h"

@class NSDictionary, NSString;

@interface DZRChannelOnboardingLogEvent : DeezerLogEvent
{
    long long _type;
    long long _step;
    NSDictionary *_content;
    NSDictionary *_payload;
    NSString *_identifier;
}

+ (id)logEventWithStep:(long long)arg1 type:(long long)arg2 timestamp:(double)arg3;
+ (id)logEventWithStep:(long long)arg1 type:(long long)arg2;
+ (id)stringForActionStep:(long long)arg1;
+ (id)stringForActionType:(long long)arg1;
+ (id)persistedPropertiesNames;
+ (int)logPhase;
+ (id)filePrefix;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(nonatomic) long long step; // @synthesize step=_step;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)actionDictionary;
- (id)description;
- (_Bool)isVirtualEvent;
- (id)channelName;
- (_Bool)shouldSendLog;
- (id)logContent;
- (id)init;

@end

