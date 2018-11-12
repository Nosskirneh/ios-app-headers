//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, SPTLocalFilesImportModelItem;
@protocol SPTLocalFilesImportModelDelegate, SPTLocalFilesPlaylistsDataSource, SPTLocalFilesTracksDataSource;

@interface SPTLocalFilesImportModel : NSObject
{
    _Bool _isLoaded;
    _Bool _filteredSongs;
    _Bool _filteredPlaylists;
    NSArray *_playlists;
    NSArray *_albums;
    NSArray *_artists;
    NSArray *_songs;
    id <SPTLocalFilesImportModelDelegate> _delegate;
    NSDate *_modelLoadedTimestamp;
    SPTLocalFilesImportModelItem *_root;
    id <SPTLocalFilesTracksDataSource> _tracksDataSource;
    id <SPTLocalFilesPlaylistsDataSource> _playlistsDataSource;
}

@property(retain, nonatomic) id <SPTLocalFilesPlaylistsDataSource> playlistsDataSource; // @synthesize playlistsDataSource=_playlistsDataSource;
@property(retain, nonatomic) id <SPTLocalFilesTracksDataSource> tracksDataSource; // @synthesize tracksDataSource=_tracksDataSource;
@property(retain, nonatomic) SPTLocalFilesImportModelItem *root; // @synthesize root=_root;
@property(retain, nonatomic) NSDate *modelLoadedTimestamp; // @synthesize modelLoadedTimestamp=_modelLoadedTimestamp;
@property(nonatomic) __weak id <SPTLocalFilesImportModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool filteredPlaylists; // @synthesize filteredPlaylists=_filteredPlaylists;
@property(readonly, nonatomic) _Bool filteredSongs; // @synthesize filteredSongs=_filteredSongs;
@property(retain, nonatomic) NSArray *songs; // @synthesize songs=_songs;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *selectedPlaylists;
@property(readonly, nonatomic) NSArray *selectedSongs;
@property(readonly, nonatomic) _Bool canImport;
@property(readonly, nonatomic) _Bool allSelected;
- (void)toggleSelectAll;
- (void)toggleSelectionForItem:(id)arg1;
- (void)buildAlbumsArtistsAndSongsFromTracks:(id)arg1;
- (void)buildPlaylists:(id)arg1;
- (id)buildMosaicImageForTracks:(id)arg1;
- (void)load;
- (id)initWithTracksDataSource:(id)arg1 playlistsDataSource:(id)arg2;

@end

