//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MDXTriggerableElement : NSObject
{
    NSArray *_triggerConditions;
    long long _maxOccurrences;
    long long _minWaitBeforeShowingAgain;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)hasNotExceededMaxOccurrencesWithElementActionHistory:(id)arg1;
- (_Bool)hasWaitedMinTimeIntervalWithElementActionHistory:(id)arg1;
- (_Bool)triggerConditionsAreSatisfiedWithInteractionHistory:(id)arg1 elementActionHistory:(id)arg2 appStateRecorder:(id)arg3;
- (id)initWithType:(long long)arg1 triggerConditions:(id)arg2 maxOccurrences:(long long)arg3 minWaitBeforeShowingAgain:(double)arg4;

@end

