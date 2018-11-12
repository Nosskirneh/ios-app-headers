//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GlobalLogEvent.h"

@class NSDictionary, NSString;

@interface AdLogEvent : GlobalLogEvent
{
    NSString *_timeStamp;
    NSString *_action;
    NSString *_type;
    NSString *_server;
    NSString *_status;
    NSString *_campaignId;
    NSString *_count;
    NSDictionary *_content;
}

+ (id)logAdEvtWithAction:(long long)arg1 type:(long long)arg2 server:(long long)arg3 status:(long long)arg4 campaignId:(id)arg5 adCount:(unsigned long long)arg6;
+ (int)logPhase;
+ (id)persistedPropertiesNames;
+ (id)filePrefix;
@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *server; // @synthesize server=_server;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
- (void).cxx_destruct;
- (id)channelName;
- (_Bool)isVirtualEvent;
- (id)logContent;

@end
