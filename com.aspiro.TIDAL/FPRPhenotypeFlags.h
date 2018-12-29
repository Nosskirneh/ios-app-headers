//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHTPhenotypeFlags;

@interface FPRPhenotypeFlags : NSObject
{
    PHTPhenotypeFlags *_allFlags;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) PHTPhenotypeFlags *allFlags; // @synthesize allFlags=_allFlags;
- (void).cxx_destruct;
- (unsigned int)cpuSamplingFrequencyInBackgroundInMS;
- (unsigned int)cpuSamplingFrequencyInForegroundInMS;
- (_Bool)sessionsCPUCaptureEnabled;
- (float)sessionsSamplingPercentage;
- (_Bool)featureSessionsEnabled;
- (unsigned int)featureRolloutScreenTracesVCAnalyticsParityAutopush;
- (unsigned int)featureRolloutScreenTracesVCAnalyticsParity;
- (unsigned int)featureRolloutScreenTracesForContainerVCAutopush;
- (unsigned int)featureRolloutScreenTracesForContainerVC;
- (unsigned int)featureRolloutScreenTracesSwizzlingAutopush;
- (unsigned int)featureRolloutScreenTracesSwizzling;
- (unsigned int)featureRolloutScreenTracesAutopush;
- (unsigned int)featureRolloutScreenTraces;
- (unsigned int)featureRolloutDelegateSwizzlingAutopush;
- (unsigned int)featureRolloutNSURLConnectionAutopush;
- (unsigned int)featureRolloutDelegateSwizzling;
- (unsigned int)featureRolloutNSURLConnection;
- (unsigned int)backgroundNetworkEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)backgroundNetworkEventCountForLogSource:(int)arg1;
- (unsigned int)foregroundNetworkEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)foregroundNetworkEventCountForLogSource:(int)arg1;
- (unsigned int)backgroundEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)backgroundEventCountForLogSource:(int)arg1;
- (unsigned int)foregroundEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)foregroundEventCountForLogSource:(int)arg1;
- (unsigned int)backgroundEventLimitingRateForLogSource:(int)arg1;
- (unsigned int)foregroundEventLimitingRateForLogSource:(int)arg1;
- (unsigned int)logSamplingDenominatorForLogSource:(int)arg1;
- (unsigned int)logSamplingNumeratorForLogSource:(int)arg1;
- (id)logSamplingSeedForLogSource:(int)arg1;
@property(readonly, nonatomic) NSString *phenotypePackageName;
- (void)update;
- (id)initWithPhenotypeFlags:(id)arg1;
- (id)initWithPhenotype:(id)arg1;

@end

