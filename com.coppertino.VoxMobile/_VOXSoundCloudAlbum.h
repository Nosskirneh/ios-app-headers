//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXAlbumEntity.h"

@class NSNumber, VOXSoundCloudAlbumID;

@interface _VOXSoundCloudAlbum : VOXAlbumEntity
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveIsLikedValue:(_Bool)arg1;
- (_Bool)primitiveIsLikedValue;
@property _Bool isLikedValue;
@property(readonly, nonatomic) VOXSoundCloudAlbumID *objectID;

// Remaining properties
@property(retain, nonatomic) NSNumber *isLiked; // @dynamic isLiked;

@end
