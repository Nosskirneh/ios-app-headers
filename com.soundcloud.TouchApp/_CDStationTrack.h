//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDRecentStation, CDStation, CDTrack, NSNumber, NSString;

@interface _CDStationTrack : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSNumber *index; // @dynamic index;
@property(copy, nonatomic) NSString *queryUrn; // @dynamic queryUrn;
@property(retain, nonatomic) CDRecentStation *recentStation; // @dynamic recentStation;
@property(retain, nonatomic) CDStation *station; // @dynamic station;
@property(retain, nonatomic) CDTrack *track; // @dynamic track;
@end

