//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDAlbum, CDUser, NSDate, NSNumber;

@interface CDUserAlbum : NSManagedObject
{
}

+ (id)newOrExistingManagedObject:(id)arg1 forUser:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)insertNewObjectIntoContext:(id)arg1;
+ (id)entityName;

// Remaining properties
@property(retain, nonatomic) CDAlbum *album; // @dynamic album;
@property(retain, nonatomic) NSDate *dateAdded; // @dynamic dateAdded;
@property(retain, nonatomic) NSNumber *receivedOrder; // @dynamic receivedOrder;
@property(retain, nonatomic) CDUser *user; // @dynamic user;

@end

