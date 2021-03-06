//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDArtistSearchResult, CDSearchResult, NSNumber, NSSet, NSString;

@interface CDArtist : NSManagedObject
{
}

+ (id)artistsForIds:(id)arg1 managedObjectContext:(id)arg2;
+ (id)artistForId:(long long)arg1 inManagedObjectContext:(id)arg2;
+ (id)newOrExistingManagedObject:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)insertNewObjectIntoContext:(id)arg1;
+ (id)entityName;
- (void)willSave;
- (id)shareURL;

// Remaining properties
@property(retain, nonatomic) NSSet *albums; // @dynamic albums;
@property(retain, nonatomic) CDArtist *artist; // @dynamic artist;
@property(retain, nonatomic) NSSet *artistAlbums; // @dynamic artistAlbums;
@property(retain, nonatomic) NSString *artistBIO; // @dynamic artistBIO;
@property(retain, nonatomic) NSString *artistBIOSource; // @dynamic artistBIOSource;
@property(retain, nonatomic) NSString *artistBIOSummary; // @dynamic artistBIOSummary;
@property(retain, nonatomic) NSNumber *artistId; // @dynamic artistId;
@property(retain, nonatomic) NSString *artistImageURL; // @dynamic artistImageURL;
@property(retain, nonatomic) NSString *artistLink; // @dynamic artistLink;
@property(retain, nonatomic) NSString *artistName; // @dynamic artistName;
@property(retain, nonatomic) CDArtistSearchResult *artistSearchResult; // @dynamic artistSearchResult;
@property(retain, nonatomic) NSSet *artistTracks; // @dynamic artistTracks;
@property(retain, nonatomic) NSSet *artistVideos; // @dynamic artistVideos;
@property(retain, nonatomic) NSSet *compilationAlbums; // @dynamic compilationAlbums;
@property(retain, nonatomic) NSString *etag; // @dynamic etag;
@property(retain, nonatomic) NSString *etagBIO; // @dynamic etagBIO;
@property(retain, nonatomic) NSSet *favForUsers; // @dynamic favForUsers;
@property(retain, nonatomic) NSString *imageResourceId; // @dynamic imageResourceId;
@property(retain, nonatomic) NSSet *includedInPlaylists; // @dynamic includedInPlaylists;
@property(retain, nonatomic) NSNumber *isFavorite; // @dynamic isFavorite;
@property(retain, nonatomic) NSNumber *searchReceivedOrder; // @dynamic searchReceivedOrder;
@property(retain, nonatomic) CDSearchResult *searchResult; // @dynamic searchResult;
@property(retain, nonatomic) NSString *searchTerm; // @dynamic searchTerm;
@property(retain, nonatomic) NSSet *similarArtists; // @dynamic similarArtists;
@property(retain, nonatomic) NSSet *tracks; // @dynamic tracks;
@property(retain, nonatomic) NSString *uppercaseFirstLetterOfName; // @dynamic uppercaseFirstLetterOfName;
@property(retain, nonatomic) NSSet *videos; // @dynamic videos;

@end

