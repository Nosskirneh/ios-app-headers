//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRFavoritePlaylistsDataSource.h"

@class DeezerFriend, NSArray, NSDictionary;

@interface DZRFavoritePlaylistsForFriendDataSource : DZRFavoritePlaylistsDataSource
{
    NSArray *_sortOptions;
    DeezerFriend *_friend;
    NSDictionary *_playlistsByIDs;
}

@property(retain, nonatomic) NSDictionary *playlistsByIDs; // @synthesize playlistsByIDs=_playlistsByIDs;
@property(retain, nonatomic) DeezerFriend *friend; // @synthesize friend=_friend;
- (void)setSortOptions:(id)arg1;
- (void).cxx_destruct;
- (id)filteredObjectDeezerID;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)storePlaylistsArrayInDictionary;
- (void)updateWithPlaylists;
- (void)refreshData;
- (void)loadData;
- (_Bool)isLoading;
- (id)sortOptions;
- (void)dealloc;
- (id)initWithFriend:(id)arg1 delegate:(id)arg2;

@end

