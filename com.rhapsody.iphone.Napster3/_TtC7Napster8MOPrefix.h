//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC7Napster8MOPrefix : NSObject
{
}

+ (id)fixIds:(id)arg1;
+ (id)fixOptionalIds:(id)arg1;
+ (id)fixId:(id)arg1;
+ (id)fixOptionalId:(id)arg1;
+ (id)fixPayloadIdWithPayload:(id)arg1 guidKey:(id)arg2;
+ (id)fixOptionalPayloadIdWithPayload:(id)arg1 guidKey:(id)arg2;
+ (id)fixPayloadIdsWithPayload:(id)arg1 guidKey:(id)arg2;
+ (id)fixPayloadIdsWithInput:(id)arg1 guidKey:(id)arg2;
+ (id)fixOptionalPayloadIdsWithPayload:(id)arg1 guidKey:(id)arg2;
+ (_Bool)isTagId:(id)arg1;
+ (_Bool)isGenreId:(id)arg1;
+ (_Bool)isStationId:(id)arg1;
+ (_Bool)isEditorialId:(id)arg1;
+ (_Bool)isPlaylistId:(id)arg1;
+ (_Bool)isPublishedPlaylistId:(id)arg1;
+ (_Bool)isArtistId:(id)arg1;
+ (_Bool)isAlbumId:(id)arg1;
+ (_Bool)isTrackId:(id)arg1;
+ (id)tag;
+ (id)variousArtist;
+ (id)track;
+ (id)memberPlaylist;
+ (id)publishedPlaylist;
+ (id)programmedStation;
+ (id)editorial;
+ (id)album;
+ (id)artist;
+ (id)genre;
- (void).cxx_destruct;
- (id)init;

@end
