//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMLogEvent.h"

@class NSDate, QueueableContainerInfo, RadioStation, Track;

@interface GPMRatingLogEvent : GPMLogEvent
{
    Track *_track;
    QueueableContainerInfo *_info;
    RadioStation *_station;
    NSDate *_date;
}

- (void).cxx_destruct;
- (id)userActivityEventRating;
- (id)musicClientEvent;
- (id)init;
- (id)initWithTrack:(id)arg1 queueableContainerInfo:(id)arg2 station:(id)arg3 date:(id)arg4;

@end

