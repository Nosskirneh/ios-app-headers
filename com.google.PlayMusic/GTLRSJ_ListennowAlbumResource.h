//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_Attribution, GTLRSJ_ListennowAlbumIdResource, GTLRSJ_ListennowAlbumResource_ArtistProfileImage, NSString;

@interface GTLRSJ_ListennowAlbumResource : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *artistMetajamId; // @dynamic artistMetajamId;
@property(copy, nonatomic) NSString *artistName; // @dynamic artistName;
@property(retain, nonatomic) GTLRSJ_ListennowAlbumResource_ArtistProfileImage *artistProfileImage; // @dynamic artistProfileImage;
@property(retain, nonatomic) GTLRSJ_Attribution *descriptionAttribution; // @dynamic descriptionAttribution;
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(copy, nonatomic) NSString *explicitType; // @dynamic explicitType;
@property(retain, nonatomic) GTLRSJ_ListennowAlbumIdResource *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

