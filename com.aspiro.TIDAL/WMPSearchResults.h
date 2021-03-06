//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface WMPSearchResults : NSObject
{
    NSMutableArray *_providersWithContent;
    NSMutableArray *_topHits;
    NSMutableArray *_artists;
    NSMutableArray *_albums;
    NSMutableArray *_tracks;
    NSMutableArray *_videos;
    NSMutableArray *_playlists;
    long long _totalSuggestionCountArtists;
    long long _totalSuggestionCountAlbums;
    long long _totalSuggestionCountTracks;
    long long _totalSuggestionCountVideos;
    long long _totalSuggestionCountPlaylists;
    NSArray *_searches;
    NSString *_searchTerm;
}

@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) NSArray *searches; // @synthesize searches=_searches;
@property(nonatomic) long long totalSuggestionCountPlaylists; // @synthesize totalSuggestionCountPlaylists=_totalSuggestionCountPlaylists;
@property(nonatomic) long long totalSuggestionCountVideos; // @synthesize totalSuggestionCountVideos=_totalSuggestionCountVideos;
@property(nonatomic) long long totalSuggestionCountTracks; // @synthesize totalSuggestionCountTracks=_totalSuggestionCountTracks;
@property(nonatomic) long long totalSuggestionCountAlbums; // @synthesize totalSuggestionCountAlbums=_totalSuggestionCountAlbums;
@property(nonatomic) long long totalSuggestionCountArtists; // @synthesize totalSuggestionCountArtists=_totalSuggestionCountArtists;
@property(retain, nonatomic) NSMutableArray *playlists; // @synthesize playlists=_playlists;
@property(retain, nonatomic) NSMutableArray *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSMutableArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) NSMutableArray *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) NSMutableArray *artists; // @synthesize artists=_artists;
@property(retain, nonatomic) NSMutableArray *topHits; // @synthesize topHits=_topHits;
- (void).cxx_destruct;
- (void)clearSearches;
- (void)appendSearchWithResults:(id)arg1;
- (_Bool)shouldShowSearchHistoryForSection:(long long)arg1;
- (id)stringFromValues:(id)arg1 section:(long long)arg2;
- (id)searchModuleIdForSection:(long long)arg1;
- (id)titleForContentType:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)searchModuleIdDictionary;
- (id)searchTypeDictionary;
- (id)itemForRowAtIndexPath:(id)arg1;
- (long long)totalSuggestionsCountForSection:(long long)arg1;
- (long long)countForSection:(long long)arg1;
- (long long)searchTypeForSingleSectionSearch;
- (_Bool)isSingleSectionSearch;
- (long long)numberOfSectionsWithContent;
- (long long)searchSectionFromIndex:(long long)arg1;
- (id)dataProvidersWithContent;
- (id)dataProviders;
- (_Bool)shouldDisplayShowMoreButtonForSection:(long long)arg1;
- (_Bool)hasSearches;
- (_Bool)hasResults;
- (_Bool)isEmpty;
- (id)init;

@end

