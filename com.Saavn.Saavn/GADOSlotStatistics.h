//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOStatisticsCore, GADOTimingManager, NSDictionary, NSString;

@interface GADOSlotStatistics : NSObject
{
    GADOStatisticsCore *_statisticsCore;
    GADOTimingManager *_timingManager;
    NSString *_identifier;
}

- (void).cxx_destruct;
- (id)fillStatusStringFromArray:(id)arg1;
- (id)adapterFillStatusParameterOrderedByAllocationIDs:(id)arg1;
- (id)adapterFillStatusParameter;
- (id)adapterDurationsParameter;
- (id)adapterExitCodesParameter;
- (void)resetFillStatus;
- (void)resetTimingAdapters;
- (void)endTimingAdapterWithFillStatus:(long long)arg1 allocationID:(id)arg2;
- (void)endTimingAdapterWithExitCode:(long long)arg1;
- (void)startTimingAdapter;
- (void)endTimingNamed:(id)arg1;
- (void)startTimingNamed:(id)arg1 withExplicitEnd:(_Bool)arg2;
- (id)timingNamed:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *statistics;
- (void)setIdentifier:(id)arg1;
- (id)init;

@end

