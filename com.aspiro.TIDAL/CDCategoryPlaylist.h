//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDCategory, CDPlaylist, NSNumber;

@interface CDCategoryPlaylist : NSManagedObject
{
}

+ (id)newCategoryPlaylistInCategory:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)insertNewObjectIntoContext:(id)arg1;
+ (id)entityName;

// Remaining properties
@property(retain, nonatomic) CDCategory *category; // @dynamic category;
@property(retain, nonatomic) CDPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) NSNumber *receivedOrder; // @dynamic receivedOrder;

@end
