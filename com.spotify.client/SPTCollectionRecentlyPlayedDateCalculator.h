//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface SPTCollectionRecentlyPlayedDateCalculator : NSObject
{
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (long long)daysBetweenDate:(id)arg1 andDate:(id)arg2;
- (long long)numberOfDaysSinceDate:(id)arg1;
- (id)localizedTimeTextForDate:(id)arg1;
- (id)init;

@end

