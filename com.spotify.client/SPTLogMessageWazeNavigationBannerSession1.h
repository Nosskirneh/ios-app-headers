//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageWazeNavigationBannerSession1 : SPTLogMessage
{
    _Bool _navigationActiveValue;
    NSString *_sessionIdValue;
    NSString *_eventTypeValue;
    NSString *_clickTypeValue;
    NSString *_reasonValue;
    long long _navigationCountValue;
}

+ (id)messageWithSessionId:(id)arg1 eventType:(id)arg2 clickType:(id)arg3 reason:(id)arg4 navigationCount:(long long)arg5 navigationActive:(_Bool)arg6;
@property(nonatomic) _Bool navigationActiveValue; // @synthesize navigationActiveValue=_navigationActiveValue;
@property(nonatomic) long long navigationCountValue; // @synthesize navigationCountValue=_navigationCountValue;
@property(retain, nonatomic) NSString *reasonValue; // @synthesize reasonValue=_reasonValue;
@property(retain, nonatomic) NSString *clickTypeValue; // @synthesize clickTypeValue=_clickTypeValue;
@property(retain, nonatomic) NSString *eventTypeValue; // @synthesize eventTypeValue=_eventTypeValue;
@property(retain, nonatomic) NSString *sessionIdValue; // @synthesize sessionIdValue=_sessionIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
