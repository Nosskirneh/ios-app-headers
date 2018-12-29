//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString;

@interface CDUser : NSManagedObject
{
}

+ (id)insertNewObjectIntoContext:(id)arg1;
+ (id)entityName;
+ (id)userForWimpId:(long long)arg1 inManagedObjectContext:(id)arg2;
+ (id)newOrExistingUser:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)willSave;
- (void)setOrderingPrimitiveValue:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDate *dateOfBirth; // @dynamic dateOfBirth;
@property(retain, nonatomic) NSString *email; // @dynamic email;
@property(retain, nonatomic) NSString *etag; // @dynamic etag;
@property(retain, nonatomic) NSString *facebookName; // @dynamic facebookName;
@property(retain, nonatomic) NSString *facebookNick; // @dynamic facebookNick;
@property(retain, nonatomic) NSString *facebookPicURL; // @dynamic facebookPicURL;
@property(retain, nonatomic) NSString *facebookStatus; // @dynamic facebookStatus;
@property(retain, nonatomic) NSNumber *facebookUUID; // @dynamic facebookUUID;
@property(retain, nonatomic) NSSet *favAlbums; // @dynamic favAlbums;
@property(retain, nonatomic) NSSet *favArtists; // @dynamic favArtists;
@property(retain, nonatomic) NSSet *favPlaylists; // @dynamic favPlaylists;
@property(retain, nonatomic) NSSet *favTracks; // @dynamic favTracks;
@property(retain, nonatomic) NSSet *favVideos; // @dynamic favVideos;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(nonatomic) int gender; // @dynamic gender;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(nonatomic) _Bool newsletter; // @dynamic newsletter;
@property(retain, nonatomic) NSString *pictureUUID; // @dynamic pictureUUID;
@property(retain, nonatomic) NSSet *purchasedAlbums; // @dynamic purchasedAlbums;
@property(retain, nonatomic) NSString *uppercaseFirstLetterOfName; // @dynamic uppercaseFirstLetterOfName;
@property(retain, nonatomic) NSNumber *wimpUUID; // @dynamic wimpUUID;

@end

