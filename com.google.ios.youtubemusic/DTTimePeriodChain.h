//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTimePeriodGroup.h"

@class DTTimePeriod;

@interface DTTimePeriodChain : DTTimePeriodGroup
{
    DTTimePeriod *First;
    DTTimePeriod *Last;
}

+ (id)chain;
- (void).cxx_destruct;
- (void)setVariablesNil;
- (void)updateVariables;
@property(readonly, nonatomic) DTTimePeriod *Last;
@property(readonly, nonatomic) DTTimePeriod *First;
- (_Bool)isEqualToChain:(id)arg1;
- (void)removeEarliestTimePeriod;
- (void)removeLatestTimePeriod;
- (void)removeTimePeriodAtIndex:(long long)arg1;
- (void)insertTimePeriod:(id)arg1 atInedx:(long long)arg2;
- (void)addTimePeriod:(id)arg1;

@end

