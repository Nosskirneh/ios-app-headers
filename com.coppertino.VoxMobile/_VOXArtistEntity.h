//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXMediaItem.h"

@class NSSet, NSString, VOXArtistEntityID;

@interface _VOXArtistEntity : VOXMediaItem
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)albumsSet;
@property(readonly, nonatomic) VOXArtistEntityID *objectID;

// Remaining properties
@property(retain, nonatomic) NSSet *albums; // @dynamic albums;
@property(retain, nonatomic) NSString *genre; // @dynamic genre;

@end

