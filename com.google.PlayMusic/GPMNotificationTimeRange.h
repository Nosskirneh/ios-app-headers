//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents;

@interface GPMNotificationTimeRange : NSObject
{
    NSDateComponents *_startTime;
    NSDateComponents *_endTime;
}

+ (id)timeRangeComponentsFromSJNotificationTime:(id)arg1;
@property(retain, nonatomic) NSDateComponents *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDateComponents *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (_Bool)isTimeRangeWithinSameDay;
- (id)initWithSJTimeRange:(id)arg1;

@end

