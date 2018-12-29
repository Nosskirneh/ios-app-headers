//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMDatabase;

@interface APMAudience : NSObject
{
    APMDatabase *_database;
}

+ (_Bool)isValidAudienceProto:(id)arg1 usedAudienceIDs:(id)arg2 error:(id *)arg3;
+ (id)updatedFilterResultWithFilterID:(int)arg1 audienceID:(int)arg2 currentFilterResult:(id)arg3 newEvaluationResult:(id)arg4 dynamicFilterTimestamps:(id)arg5 sequenceFilterTimestamps:(id)arg6;
+ (_Bool)isFilterResult:(id)arg1 trueForFilterID:(int)arg2;
- (void).cxx_destruct;
- (_Bool)resultsForBundling:(id *)arg1;
- (_Bool)maybeDeleteStaleFilterResults:(id)arg1;
- (_Bool)updateAudiences:(id)arg1;
- (_Bool)evaluateFiltersForUserProperty:(id)arg1;
- (_Bool)evaluateFiltersForEventName:(id)arg1 eventParameters:(id)arg2 eventAggregates:(id)arg3 eventTimestamp:(double)arg4 cachedSequenceEvaluationTimestamps:(id)arg5;
- (_Bool)evaluateFiltersForEvent:(id)arg1 eventAggregates:(id)arg2 cachedSequenceEvaluationTimestamps:(id)arg3;
- (id)initWithDatabase:(id)arg1;

@end

