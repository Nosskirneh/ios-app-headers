//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _TtC4WiMP16SpotlightService : NSObject
{
    // Error parsing type: , name: imageService
    // Error parsing type: , name: searchIndex
}

+ (long long)errorCodeDataError;
+ (long long)errorCodeIndexing;
- (CDUnknownBlockType).cxx_destruct;
- (id)tagPublicActivityForVideo:(id)arg1;
- (id)tagPublicActivityForPlaylist:(id)arg1;
- (id)tagPublicActivityForArtist:(id)arg1;
- (void)addToSearchIndexWithPlaylist:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addToSearchIndexWithVideo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addToSearchIndexWithTrack:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addToSearchIndexWithAlbum:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addToSearchIndexWithArtist:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addVideoIdsToIndex:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addPlaylistUuidsToIndex:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addTrackIdsToIndex:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addAlbumIdsToIndex:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addArtistIdsToIndex:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)extractURLFromUserActivity:(id)arg1;
- (id)init;
- (id)initWithIndex:(id)arg1 imageService:(id)arg2;

@end

