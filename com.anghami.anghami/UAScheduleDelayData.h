//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSSet, NSString, UAActionScheduleData;

@interface UAScheduleDelayData : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSNumber *appState; // @dynamic appState;
@property(retain, nonatomic) NSSet *cancellationTriggers; // @dynamic cancellationTriggers;
@property(retain, nonatomic) NSString *regionID; // @dynamic regionID;
@property(retain, nonatomic) UAActionScheduleData *schedule; // @dynamic schedule;
@property(retain, nonatomic) NSString *screen; // @dynamic screen;
@property(retain, nonatomic) NSNumber *seconds; // @dynamic seconds;
@end
