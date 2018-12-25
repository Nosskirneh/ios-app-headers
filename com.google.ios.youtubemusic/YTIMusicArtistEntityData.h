//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIMusicEntityCollection, YTIThumbnailDetails;

@interface YTIMusicArtistEntityData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMusicEntityCollection *albums; // @dynamic albums;
@property(nonatomic) _Bool hasAlbums; // @dynamic hasAlbums;
@property(nonatomic) _Bool hasHqThumbnailDetails; // @dynamic hasHqThumbnailDetails;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasRelatedArtists; // @dynamic hasRelatedArtists;
@property(nonatomic) _Bool hasThumbnailDetails; // @dynamic hasThumbnailDetails;
@property(retain, nonatomic) YTIThumbnailDetails *hqThumbnailDetails; // @dynamic hqThumbnailDetails;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) YTIMusicEntityCollection *relatedArtists; // @dynamic relatedArtists;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnailDetails; // @dynamic thumbnailDetails;

@end

