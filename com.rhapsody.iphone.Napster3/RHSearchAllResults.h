//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RHSearchAllResults : NSObject
{
    _Bool _showMoreTracks;
    _Bool _showMoreArtists;
    _Bool _showMoreAlbums;
    _Bool _showMorePlaylists;
    NSArray *_topResults;
    NSArray *_trackResults;
    NSArray *_artistResults;
    NSArray *_albumResults;
    NSArray *_playlistResults;
}

@property(nonatomic) _Bool showMorePlaylists; // @synthesize showMorePlaylists=_showMorePlaylists;
@property(retain, nonatomic) NSArray *playlistResults; // @synthesize playlistResults=_playlistResults;
@property(nonatomic) _Bool showMoreAlbums; // @synthesize showMoreAlbums=_showMoreAlbums;
@property(retain, nonatomic) NSArray *albumResults; // @synthesize albumResults=_albumResults;
@property(nonatomic) _Bool showMoreArtists; // @synthesize showMoreArtists=_showMoreArtists;
@property(retain, nonatomic) NSArray *artistResults; // @synthesize artistResults=_artistResults;
@property(nonatomic) _Bool showMoreTracks; // @synthesize showMoreTracks=_showMoreTracks;
@property(retain, nonatomic) NSArray *trackResults; // @synthesize trackResults=_trackResults;
@property(retain, nonatomic) NSArray *topResults; // @synthesize topResults=_topResults;
- (void).cxx_destruct;
- (id)zds_objectWithObjectIDsAsEntityInContext:(id)arg1;
- (id)zds_objectWithEntitiesAsObjectID;
- (id)initWithTopResults:(id)arg1 trackResults:(id)arg2 showMoreTracks:(_Bool)arg3 artistResults:(id)arg4 showMoreArtists:(_Bool)arg5 albumResults:(id)arg6 showMoreAlbums:(_Bool)arg7 playlistResults:(id)arg8 showMorePlaylists:(_Bool)arg9;

@end

