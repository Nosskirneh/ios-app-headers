//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXSoundCloudAlbum.h"

@class NSString, VOXSoundCloudCollectionAlbumEntityID;

@interface _VOXSoundCloudCollectionAlbumEntity : VOXSoundCloudAlbum
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) VOXSoundCloudCollectionAlbumEntityID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *collectionId; // @dynamic collectionId;

@end
