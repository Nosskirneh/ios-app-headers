//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDArtist, CDPlaylist, NSNumber;

@interface CDArtistIncludedInPlaylist : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) CDArtist *artist; // @dynamic artist;
@property(retain, nonatomic) CDPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) NSNumber *receivedOrder; // @dynamic receivedOrder;
@end
