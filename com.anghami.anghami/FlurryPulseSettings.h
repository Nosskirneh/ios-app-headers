//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface FlurryPulseSettings : NSObject <NSCoding>
{
    int _maxCallbackRetries;
    int _maxCallbackAttemptsPerReport;
    long long _lastResponseTime;
    long long _nextRefreshTTL;
    long long _expirationTTL;
    NSDictionary *_callbacks;
    NSDictionary *_callbackEventsMap;
    long long _maxReportDelaySecs;
    NSString *_agentReportUrl;
    NSDictionary *_globalSettings;
    NSDictionary *_analytics;
}

@property(retain, nonatomic) NSDictionary *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) NSDictionary *globalSettings; // @synthesize globalSettings=_globalSettings;
@property(retain, nonatomic) NSString *agentReportUrl; // @synthesize agentReportUrl=_agentReportUrl;
@property(nonatomic) long long maxReportDelaySecs; // @synthesize maxReportDelaySecs=_maxReportDelaySecs;
@property(nonatomic) int maxCallbackAttemptsPerReport; // @synthesize maxCallbackAttemptsPerReport=_maxCallbackAttemptsPerReport;
@property(nonatomic) int maxCallbackRetries; // @synthesize maxCallbackRetries=_maxCallbackRetries;
@property(retain, nonatomic) NSDictionary *callbackEventsMap; // @synthesize callbackEventsMap=_callbackEventsMap;
@property(retain, nonatomic) NSDictionary *callbacks; // @synthesize callbacks=_callbacks;
@property(nonatomic) long long expirationTTL; // @synthesize expirationTTL=_expirationTTL;
@property(nonatomic) long long nextRefreshTTL; // @synthesize nextRefreshTTL=_nextRefreshTTL;
@property(nonatomic) long long lastResponseTime; // @synthesize lastResponseTime=_lastResponseTime;
- (void).cxx_destruct;
- (id)dataDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

