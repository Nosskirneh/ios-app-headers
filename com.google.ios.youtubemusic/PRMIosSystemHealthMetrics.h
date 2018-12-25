//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, PRMApplicationInfo, PRMBatteryUsageMetric, PRMCPUTimeMetric, PRMCPUUsageMetric, PRMCrashMetric, PRMDroppedFramesEvent, PRMFrameRateMetric, PRMLaunchTimeMetric, PRMMemoryUsageMetric, PRMMetricExtension, PRMNetworkUsageMetric, PRMTimerMetric, PRMTraceMetric, PRMUuidProto;

@interface PRMIosSystemHealthMetrics : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PRMApplicationInfo *applicationInfo; // @dynamic applicationInfo;
@property(nonatomic) int applicationState; // @dynamic applicationState;
@property(retain, nonatomic) PRMBatteryUsageMetric *batteryUsageMetric; // @dynamic batteryUsageMetric;
@property(retain, nonatomic) PRMCPUTimeMetric *cpuTimeMetric; // @dynamic cpuTimeMetric;
@property(retain, nonatomic) PRMCPUUsageMetric *cpuUsageMetric; // @dynamic cpuUsageMetric;
@property(retain, nonatomic) PRMCrashMetric *crashMetric; // @dynamic crashMetric;
@property(copy, nonatomic) NSString *customEventName; // @dynamic customEventName;
@property(retain, nonatomic) PRMDroppedFramesEvent *droppedFramesEvent; // @dynamic droppedFramesEvent;
@property(retain, nonatomic) PRMFrameRateMetric *frameRateMetric; // @dynamic frameRateMetric;
@property(nonatomic) _Bool hasApplicationInfo; // @dynamic hasApplicationInfo;
@property(nonatomic) _Bool hasApplicationState; // @dynamic hasApplicationState;
@property(nonatomic) _Bool hasBatteryUsageMetric; // @dynamic hasBatteryUsageMetric;
@property(nonatomic) _Bool hasCpuTimeMetric; // @dynamic hasCpuTimeMetric;
@property(nonatomic) _Bool hasCpuUsageMetric; // @dynamic hasCpuUsageMetric;
@property(nonatomic) _Bool hasCrashMetric; // @dynamic hasCrashMetric;
@property(nonatomic) _Bool hasCustomEventName; // @dynamic hasCustomEventName;
@property(nonatomic) _Bool hasDroppedFramesEvent; // @dynamic hasDroppedFramesEvent;
@property(nonatomic) _Bool hasFrameRateMetric; // @dynamic hasFrameRateMetric;
@property(nonatomic) _Bool hasHashedCustomEventName; // @dynamic hasHashedCustomEventName;
@property(nonatomic) _Bool hasIsOnWifi; // @dynamic hasIsOnWifi;
@property(nonatomic) _Bool hasLaunchId; // @dynamic hasLaunchId;
@property(nonatomic) _Bool hasLaunchTimeMetric; // @dynamic hasLaunchTimeMetric;
@property(nonatomic) _Bool hasLowPowerModeEnabled; // @dynamic hasLowPowerModeEnabled;
@property(nonatomic) _Bool hasMemoryUsageMetric; // @dynamic hasMemoryUsageMetric;
@property(nonatomic) _Bool hasMetricEventCode; // @dynamic hasMetricEventCode;
@property(nonatomic) _Bool hasMetricExtension; // @dynamic hasMetricExtension;
@property(nonatomic) _Bool hasNetworkUsageMetric; // @dynamic hasNetworkUsageMetric;
@property(nonatomic) _Bool hasPrimesBuildVersion; // @dynamic hasPrimesBuildVersion;
@property(nonatomic) _Bool hasTimerMetric; // @dynamic hasTimerMetric;
@property(nonatomic) _Bool hasTrace; // @dynamic hasTrace;
@property(nonatomic) _Bool hasViewControllerName; // @dynamic hasViewControllerName;
@property(nonatomic) unsigned long long hashedCustomEventName; // @dynamic hashedCustomEventName;
@property(nonatomic) _Bool isOnWifi; // @dynamic isOnWifi;
@property(retain, nonatomic) PRMUuidProto *launchId; // @dynamic launchId;
@property(retain, nonatomic) PRMLaunchTimeMetric *launchTimeMetric; // @dynamic launchTimeMetric;
@property(nonatomic) _Bool lowPowerModeEnabled; // @dynamic lowPowerModeEnabled;
@property(retain, nonatomic) PRMMemoryUsageMetric *memoryUsageMetric; // @dynamic memoryUsageMetric;
@property(nonatomic) int metricEventCode; // @dynamic metricEventCode;
@property(retain, nonatomic) PRMMetricExtension *metricExtension; // @dynamic metricExtension;
@property(retain, nonatomic) PRMNetworkUsageMetric *networkUsageMetric; // @dynamic networkUsageMetric;
@property(nonatomic) unsigned long long primesBuildVersion; // @dynamic primesBuildVersion;
@property(retain, nonatomic) PRMTimerMetric *timerMetric; // @dynamic timerMetric;
@property(retain, nonatomic) PRMTraceMetric *trace; // @dynamic trace;
@property(copy, nonatomic) NSString *viewControllerName; // @dynamic viewControllerName;

@end

