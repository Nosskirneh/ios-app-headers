//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_ListennowPlaylistIdResource, GTLRSJ_ListennowPlaylistResource_OwnerProfilePhoto, GTLRSJ_ListennowPlaylistResource_PlaylistCreatorArtRef, NSString;

@interface GTLRSJ_ListennowPlaylistResource : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(retain, nonatomic) GTLRSJ_ListennowPlaylistIdResource *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *owner; // @dynamic owner;
@property(retain, nonatomic) GTLRSJ_ListennowPlaylistResource_OwnerProfilePhoto *ownerProfilePhoto; // @dynamic ownerProfilePhoto;
@property(retain, nonatomic) GTLRSJ_ListennowPlaylistResource_PlaylistCreatorArtRef *playlistCreatorArtRef; // @dynamic playlistCreatorArtRef;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
