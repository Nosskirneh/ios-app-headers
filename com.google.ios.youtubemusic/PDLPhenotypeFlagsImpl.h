//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDLPhenotypeFlags-Protocol.h"

@class NSString, PHTPhenotypeFlags;

@interface PDLPhenotypeFlagsImpl : NSObject <PDLPhenotypeFlags>
{
    PHTPhenotypeFlags *_allFlags;
}

@property(readonly, nonatomic) PHTPhenotypeFlags *allFlags; // @synthesize allFlags=_allFlags;
- (void).cxx_destruct;
- (long long)intValueForFlag:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)boolValueForFlag:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)logBatteryDischargeEventCount;
- (long long)cpuCollectInterval;
- (_Bool)logPeopleWithIDProcessCPUUsage;
- (_Bool)logCacheUpdateProcessCPUUsage;
- (_Bool)logQueryProcessCPUUsage;
- (long long)memoryCollectInterval;
- (_Bool)logCacheUpdateProcessMemoryUsage;
- (_Bool)logQueryProcessMemoryUsage;
- (void)update;
- (_Bool)refactorRankerInSeparateClass;
- (_Bool)skipDeviceContactsCacheUpdateWhenDeviceContactsNotUsed;
- (_Bool)removeAutocompleteServiceAccessViaSRL;
- (_Bool)logDeviceCacheItemsCount;
- (_Bool)logTopNCacheItemsCount;
- (_Bool)logPhoneRegionCodes;
- (_Bool)disableTopSuggestionsThresholding;
- (_Bool)calendarConfigUpdateForLookup;
- (_Bool)deviceContactsAffinityRanking;
- (_Bool)skipServerAutocompletionDecoration;
- (_Bool)logBaselineCLFallback;
- (_Bool)enableGRPC;
- (_Bool)enableDynamiteContainerType;
- (id)initWithUserID:(id)arg1 packageName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

