//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GHKConfig, NSTimer, SUPMetricsReporter;

@interface GHKChatSessionTimer : NSObject
{
    unsigned long long _timeInternal;
    GHKConfig *_config;
    SUPMetricsReporter *_metricsReporter;
    NSTimer *_timer;
}

+ (id)objectionInitializer;
+ (id)objectionRequires;
+ (void)initialize;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)onTimerTriggered;
- (void)dealloc;
- (void)didReceiveGCMNotification;
- (void)stop;
- (void)start;
- (id)initWithTimeInterval:(unsigned long long)arg1;

@end

