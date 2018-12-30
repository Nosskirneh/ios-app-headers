//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSectionedContentPlaylistViewController.h"

#import "ANGOptionsSelectorDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface ANGSectionedContentLikesViewController : ANGSectionedContentPlaylistViewController <ANGOptionsSelectorDelegate>
{
    _Bool _sortedAlphabetically;
    NSString *_lastSearchText;
    NSArray *_songs;
    NSArray *_artists;
    NSArray *_tempArtists;
    _Bool _showDownloadedOnly;
    _Bool _isShowingTitleSelector;
    NSArray *_filteredArtists;
    NSDictionary *_numSongsAndAlbumsForArtist;
    unsigned long long _selectedTab;
}

@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(retain, nonatomic) NSDictionary *numSongsAndAlbumsForArtist; // @synthesize numSongsAndAlbumsForArtist=_numSongsAndAlbumsForArtist;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(retain, nonatomic) NSArray *filteredArtists; // @synthesize filteredArtists=_filteredArtists;
- (void).cxx_destruct;
- (long long)headerPlaySource;
- (long long)headerShuffleSource;
- (id)addSongsEmptyView;
- (id)previewObjectForIndexPath:(id)arg1 collectionView:(id)arg2 section:(id)arg3 confirmActionRef:(CDUnknownBlockType *)arg4;
- (id)headerSubtitle;
- (_Bool)isShowingSongs;
- (_Bool)sortedAlphabetically;
- (id)arrayOfTitleSelectorRows;
- (id)playlistAnalyticEvent;
- (void)clearPlaylist;
- (id)clearMessage;
- (id)searchPlaceholder;
- (id)songsEmptyViewImageName;
- (id)songsEmptyViewSubtitle;
- (id)songsEmptyViewTitle;
- (void)didTapHeaderMainButton;
- (id)headerMainButtonTitle;
- (_Bool)availableInOfflineMode;
- (_Bool)navigationMinimizes;
- (void)reloadHeader;
- (void)filterPressed;
- (long long)enginePlaySource;
- (_Bool)hasLikes;
- (id)defaultHeaderButtons;
- (void)optionSelected:(id)arg1 valueChanged:(unsigned long long)arg2 andRowString:(id)arg3;
- (void)optionSelected:(id)arg1 valueChanged:(unsigned long long)arg2;
- (id)optionsForSection:(unsigned long long)arg1;
- (id)optionsSelectorImageNameForSection:(unsigned long long)arg1;
- (id)optionsSelectorTitleForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfRowsForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfSections;
- (void)optButtonPressed;
- (id)songs;
- (void)performSearchWithText:(id)arg1;
- (void)updateContentSection;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

