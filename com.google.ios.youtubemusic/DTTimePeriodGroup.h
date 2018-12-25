//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

@interface DTTimePeriodGroup : NSObject
{
    NSMutableArray *periods;
    NSDate *StartDate;
    NSDate *EndDate;
}

- (void).cxx_destruct;
- (void)updateVariables;
- (void)shiftLaterWithSize:(unsigned long long)arg1 amount:(long long)arg2;
- (void)shiftLaterWithSize:(unsigned long long)arg1;
- (void)shiftEarlierWithSize:(unsigned long long)arg1 amount:(long long)arg2;
- (void)shiftEarlierWithSize:(unsigned long long)arg1;
- (_Bool)hasSameCharacteristicsAs:(id)arg1;
- (long long)count;
@property(readonly, nonatomic) NSDate *EndDate;
@property(readonly, nonatomic) NSDate *StartDate;
- (double)durationInSeconds;
- (double)durationInMinutes;
- (double)durationInHours;
- (double)durationInDays;
- (double)durationInWeeks;
- (double)durationInYears;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)init;

@end

