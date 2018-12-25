//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, YTClientSamplerGate;
@protocol YTEventLogger;

@protocol YTNonCriticalStartupSchedulerConfig <NSObject>
@property(retain, nonatomic) YTClientSamplerGate *telemetrySampler;
@property(retain, nonatomic) id <YTEventLogger> eventLogger;
@property(readonly, nonatomic) NSArray *smartSchedulerTicks;
@property(readonly, nonatomic) long long staggeredSchedulerStaggerMs;
@property(readonly, nonatomic) long long delayedSchedulerTimeoutMs;
@property(readonly, nonatomic) NSSet *whitelistLabelsSet;
@property(readonly, nonatomic) Class schedulerClass;
@end

