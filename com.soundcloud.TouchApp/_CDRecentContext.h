//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDPlaylist, CDStation, CDUser, CDYou, NSDate, NSNumber;

@interface _CDRecentContext : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSDate *playedAt; // @dynamic playedAt;
@property(retain, nonatomic) CDPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) CDStation *station; // @dynamic station;
@property(retain, nonatomic) NSNumber *synced; // @dynamic synced;
@property(retain, nonatomic) CDUser *user; // @dynamic user;
@property(retain, nonatomic) CDYou *you; // @dynamic you;
@end

