//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageInAppMessageClientRegularExpressionPerformance1 : SPTLogMessage
{
    long long _triggersCountValue;
    NSString *_performanceTimeValue;
}

+ (id)messageWithTriggersCount:(long long)arg1 performanceTime:(id)arg2;
@property(retain, nonatomic) NSString *performanceTimeValue; // @synthesize performanceTimeValue=_performanceTimeValue;
@property(nonatomic) long long triggersCountValue; // @synthesize triggersCountValue=_triggersCountValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

