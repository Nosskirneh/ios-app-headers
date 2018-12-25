//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GWADateFormat : NSObject
{
    unsigned long long _yearIndex;
    unsigned long long _monthIndex;
    unsigned long long _dayIndex;
    NSArray *_dateComponents;
}

+ (void)initialize;
@property(readonly, nonatomic) NSArray *dateComponents; // @synthesize dateComponents=_dateComponents;
- (void).cxx_destruct;
- (id)yearToDisplay:(long long)arg1;
- (long long)fullYearOfYear:(long long)arg1;
- (_Bool)areComponents:(id)arg1 equalToComponentsFromDate:(id)arg2;
- (_Bool)formatStringHasValidComponentsForType:(int)arg1 withFormatString:(id)arg2;
- (id)stringFromOrchDate:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (id)dateComponentsFromFormattedString:(id)arg1;
- (id)dateFromYear:(unsigned long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3;
- (id)dateFromFormattedString:(id)arg1;
- (id)initWithDateType:(int)arg1 formatString:(id)arg2;

@end

