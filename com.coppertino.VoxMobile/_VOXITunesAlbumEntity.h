//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXAlbumEntity.h"

@class NSString, VOXITunesAlbumEntityID;

@interface _VOXITunesAlbumEntity : VOXAlbumEntity
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) VOXITunesAlbumEntityID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *persistentId; // @dynamic persistentId;

@end

