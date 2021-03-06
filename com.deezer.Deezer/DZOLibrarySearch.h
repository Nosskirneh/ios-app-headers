//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DeezerSearchDelegate-Protocol.h"

@class DeezerSearch, NSMutableArray, NSString;

@interface DZOLibrarySearch : NSObject <DeezerSearchDelegate>
{
    _Bool shouldReturnOpenObjects;
    unsigned long long maximumCountOfResults;
    DeezerSearch *search;
    CDUnknownBlockType albumsBlock;
    CDUnknownBlockType artistsBlock;
    CDUnknownBlockType playlistsBlock;
    CDUnknownBlockType tracksBlock;
    CDUnknownBlockType friendsBlock;
    CDUnknownBlockType liveRadiosBlock;
    CDUnknownBlockType channelsBlock;
    NSMutableArray *albums;
    NSMutableArray *artists;
    NSMutableArray *playlists;
    NSMutableArray *tracks;
    NSMutableArray *friends;
    NSMutableArray *liveRadios;
    NSMutableArray *channels;
    CDUnknownBlockType _talkShowsBlock;
    CDUnknownBlockType _mixesBlock;
    NSMutableArray *_talkShows;
    NSMutableArray *_mixes;
}

+ (void)registerPendingRequest:(id)arg1;
+ (void)unregisterPendingRequest:(id)arg1;
+ (id)pendingRequests;
@property(retain, nonatomic) NSMutableArray *mixes; // @synthesize mixes=_mixes;
@property(retain, nonatomic) NSMutableArray *talkShows; // @synthesize talkShows=_talkShows;
@property(copy, nonatomic) CDUnknownBlockType mixesBlock; // @synthesize mixesBlock=_mixesBlock;
@property(copy, nonatomic) CDUnknownBlockType talkShowsBlock; // @synthesize talkShowsBlock=_talkShowsBlock;
@property(nonatomic) _Bool shouldReturnOpenObjects; // @synthesize shouldReturnOpenObjects;
@property(retain, nonatomic) NSMutableArray *channels; // @synthesize channels;
@property(retain, nonatomic) NSMutableArray *liveRadios; // @synthesize liveRadios;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends;
@property(retain, nonatomic) NSMutableArray *tracks; // @synthesize tracks;
@property(retain, nonatomic) NSMutableArray *playlists; // @synthesize playlists;
@property(retain, nonatomic) NSMutableArray *artists; // @synthesize artists;
@property(retain, nonatomic) NSMutableArray *albums; // @synthesize albums;
@property(copy, nonatomic) CDUnknownBlockType channelsBlock; // @synthesize channelsBlock;
@property(copy, nonatomic) CDUnknownBlockType liveRadiosBlock; // @synthesize liveRadiosBlock;
@property(copy, nonatomic) CDUnknownBlockType friendsBlock; // @synthesize friendsBlock;
@property(copy, nonatomic) CDUnknownBlockType tracksBlock; // @synthesize tracksBlock;
@property(copy, nonatomic) CDUnknownBlockType playlistsBlock; // @synthesize playlistsBlock;
@property(copy, nonatomic) CDUnknownBlockType artistsBlock; // @synthesize artistsBlock;
@property(copy, nonatomic) CDUnknownBlockType albumsBlock; // @synthesize albumsBlock;
@property(retain, nonatomic) DeezerSearch *search; // @synthesize search;
@property(nonatomic) unsigned long long maximumCountOfResults; // @synthesize maximumCountOfResults;
- (void).cxx_destruct;
- (unsigned long long)numberOfChannels;
- (unsigned long long)numberOfLiveRadios;
- (unsigned long long)numberOfFriends;
- (unsigned long long)numberOfMixes;
- (unsigned long long)numberOfTalkShows;
- (unsigned long long)numberOfTracks;
- (unsigned long long)numberOfPlaylists;
- (unsigned long long)numberOfArtists;
- (unsigned long long)numberOfAlbums;
- (void)cancel;
- (void)search:(id)arg1 failedToFetchMoreMixes:(id)arg2;
- (void)searchDidFetchMoreMixes:(id)arg1;
- (void)search:(id)arg1 failedToFetchMoreTracks:(id)arg2;
- (void)searchDidFetchMoreTracks:(id)arg1;
- (void)search:(id)arg1 failedToFetchMoreChannels:(id)arg2;
- (void)searchDidFetchMoreChannels:(id)arg1;
- (void)search:(id)arg1 failedToFetchMoreLiveRadios:(id)arg2;
- (void)searchDidFetchMoreLiveRadios:(id)arg1;
- (void)search:(id)arg1 failedToFetchMorePlaylists:(id)arg2;
- (void)searchDidFetchMorePlaylists:(id)arg1;
- (void)search:(id)arg1 failedToFetchMoreFriends:(id)arg2;
- (void)searchDidFetchMoreFriends:(id)arg1;
- (void)search:(id)arg1 failedToFetchMoreArtists:(id)arg2;
- (void)searchDidFetchMoreArtists:(id)arg1;
- (void)search:(id)arg1 failedToFetchMoreTalkShows:(id)arg2;
- (void)searchDidFetchMoreTalkShows:(id)arg1;
- (void)search:(id)arg1 failedToFetchMoreAlbums:(id)arg2;
- (void)searchDidFetchMoreAlbums:(id)arg1;
- (_Bool)searchDidFetchObjects:(id)arg1 toMapToOpenClass:(Class)arg2 intoArray:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)tryToUnregister;
- (void)searchWithString:(id)arg1 maximumCountOfResults:(unsigned long long)arg2;
- (unsigned long long)filter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

