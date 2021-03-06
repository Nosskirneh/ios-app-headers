//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol PDLPhenotypeFlags <NSObject>
- (_Bool)logBatteryDischargeEventCount;
- (long long)cpuCollectInterval;
- (_Bool)logPeopleWithIDProcessCPUUsage;
- (_Bool)logCacheUpdateProcessCPUUsage;
- (_Bool)logQueryProcessCPUUsage;
- (long long)memoryCollectInterval;
- (_Bool)logCacheUpdateProcessMemoryUsage;
- (_Bool)logQueryProcessMemoryUsage;
- (_Bool)refactorRankerInSeparateClass;
- (_Bool)skipDeviceContactsCacheUpdateWhenDeviceContactsNotUsed;
- (_Bool)removeAutocompleteServiceAccessViaSRL;
- (_Bool)logPhoneRegionCodes;
- (_Bool)disableTopSuggestionsThresholding;
- (_Bool)calendarConfigUpdateForLookup;
- (_Bool)deviceContactsAffinityRanking;
- (_Bool)logDeviceCacheItemsCount;
- (_Bool)logTopNCacheItemsCount;
- (_Bool)skipServerAutocompletionDecoration;
- (_Bool)logBaselineCLFallback;
- (_Bool)enableGRPC;
- (_Bool)enableDynamiteContainerType;
- (void)update;
@end

