//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_ListennowAlbumIdResource, GTLRSJ_ListennowPlaylistIdResource, GTLRSJ_ListennowRadioStationIdResource, NSString;

@interface GTLRSJ_ListennowItemIdentifierResource : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) GTLRSJ_ListennowAlbumIdResource *albumId; // @dynamic albumId;
@property(retain, nonatomic) GTLRSJ_ListennowPlaylistIdResource *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) GTLRSJ_ListennowRadioStationIdResource *radioStationId; // @dynamic radioStationId;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

