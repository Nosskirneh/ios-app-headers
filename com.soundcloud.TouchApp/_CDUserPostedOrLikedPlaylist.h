//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDPlaylist, CDUser, NSDate, NSNumber;

@interface _CDUserPostedOrLikedPlaylist : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(retain, nonatomic) NSNumber *index; // @dynamic index;
@property(retain, nonatomic) NSNumber *liked; // @dynamic liked;
@property(retain, nonatomic) CDPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) CDUser *user; // @dynamic user;
@end
