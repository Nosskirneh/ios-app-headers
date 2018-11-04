//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (Artist)
+ (id)spt_artistViewVolatileURLForArtistURI:(id)arg1 withTransport:(long long)arg2;
+ (id)spt_artistViewOverviewURLForArtistURI:(id)arg1 withTransport:(long long)arg2;
+ (id)viewURLWithSuffix:(id)arg1 forArtistURL:(id)arg2;
+ (id)spt_albumsURLForArtistURL:(id)arg1 forType:(long long)arg2;
+ (id)spt_playlistsURLForArtistURL:(id)arg1;
+ (id)spt_relatedArtistsURLForArtistURL:(id)arg1;
+ (id)spt_artistURLForViewURL:(id)arg1;
- (long long)spt_artistAlbumType;
- (_Bool)spt_isArtistAppearsOnURL;
- (_Bool)spt_isArtistCompilationsURL;
- (_Bool)spt_isArtistSinglesURL;
- (_Bool)spt_isArtistAlbumsURL;
- (_Bool)spt_isArtistPlaylistsURL;
- (_Bool)spt_isArtistRelatedArtistsURL;
- (_Bool)spt_isArtistGalleryURL;
- (_Bool)spt_isArtistViewURL;
- (id)spt_artistID;
@end

