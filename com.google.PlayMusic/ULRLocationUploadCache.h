//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ULRPersistentCache.h"

@class NSArray, NSDate, NSMutableArray, ULRAnalyticsLogger;

@interface ULRLocationUploadCache : ULRPersistentCache
{
    ULRAnalyticsLogger *_analyticsLogger;
    NSMutableArray *_cachedLocations;
    _Bool _isGroomed;
    NSDate *_nowDate;
    unsigned long long _maxSize;
    double _maxLocationAge;
}

+ (double)minimumLocationSpacingInterval;
- (void).cxx_destruct;
- (_Bool)arrayContainsRefinableLocations:(id)arg1;
- (_Bool)arrayContainsIntermediateStationaryLocations:(id)arg1;
- (_Bool)arrayContainsExcessivelyFrequentConsecutiveLocations:(id)arg1;
- (_Bool)arrayContainsConsecutiveIdenticalLocations:(id)arg1;
- (_Bool)isFutureLocation:(id)arg1;
- (_Bool)isExpiredLocation:(id)arg1;
- (_Bool)arrayIsOverMaxCacheSize:(id)arg1;
- (double)refineTimeInterval;
- (double)stationaryLocationsDistance;
- (double)identicalLocationsDistance;
- (id)initWithCacheIdentifier:(id)arg1 nowDate:(id)arg2;
- (void)refineLocations:(id)arg1 byTime:(double)arg2 whileCountExceeds:(unsigned long long)arg3;
- (void)mergeIntermediateStationaryLocations:(id)arg1 whileCountExceeds:(unsigned long long)arg2;
- (void)mergeIdenticalLocations:(id)arg1 whileCountExceeds:(unsigned long long)arg2;
- (_Bool)groomLocations;
- (id)bestMergedMetadataLocationForCandidates:(id)arg1;
- (id)mergeMetadataFromLocation:(id)arg1 intoNearbyLocation:(id)arg2;
- (void)clearCacheContent;
- (void)failedToWriteCacheContent:(id)arg1 error:(id)arg2;
- (void)priorCacheContent:(id)arg1 error:(id)arg2;
- (void)removeLocations:(id)arg1;
- (void)addLocations:(id)arg1;
@property(readonly) NSArray *locations;
- (void)saveCacheContent:(id)arg1;
- (double)intervalSinceNowForDate:(id)arg1;
- (id)initWithCacheIdentifier:(id)arg1 analyticsLogger:(id)arg2;
- (id)initWithCacheIdentifier:(id)arg1 maxSize:(unsigned long long)arg2 maxLocationAge:(double)arg3 nowDate:(id)arg4 analyticsLogger:(id)arg5;

@end

