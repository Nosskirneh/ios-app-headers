//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDArtist, CDVideo, NSNumber;

@interface CDArtistVideo : NSManagedObject
{
}

+ (id)insertNewObjectIntoContext:(id)arg1;
+ (id)entityName;

// Remaining properties
@property(retain, nonatomic) CDArtist *artist; // @dynamic artist;
@property(retain, nonatomic) NSNumber *artistOrder; // @dynamic artistOrder;
@property(retain, nonatomic) NSNumber *artistType; // @dynamic artistType;
@property(retain, nonatomic) NSNumber *receivedOrder; // @dynamic receivedOrder;
@property(retain, nonatomic) CDVideo *video; // @dynamic video;

@end

