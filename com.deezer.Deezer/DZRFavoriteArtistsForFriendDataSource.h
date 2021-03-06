//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRFavoriteArtistsDataSource.h"

@class DeezerFriend, NSArray, NSDictionary;

@interface DZRFavoriteArtistsForFriendDataSource : DZRFavoriteArtistsDataSource
{
    NSArray *_allLibraryItems;
    DeezerFriend *_friend;
    NSDictionary *_artistsByIDs;
}

@property(retain, nonatomic) NSDictionary *artistsByIDs; // @synthesize artistsByIDs=_artistsByIDs;
@property(retain, nonatomic) DeezerFriend *friend; // @synthesize friend=_friend;
- (void)setAllLibraryItems:(id)arg1;
- (void).cxx_destruct;
- (id)allLibraryItems;
- (id)filteredObjectDeezerID;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sortAndFilterLibraryItems;
- (void)storeArtistsArrayInDictionary;
- (void)refreshData;
- (void)loadData;
- (_Bool)isLoading;
- (void)dealloc;
- (id)initWithFriend:(id)arg1 delegate:(id)arg2;

@end

