//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemsDataSourceAbstract.h"

@class DeezerFriend, DeezerUser, NSArray;

@interface _TtC6Deezer31DZRFavoriteAudiobooksDataSource : DZRLibraryItemsDataSourceAbstract
{
    // Error parsing type: , name: audiobookList
    // Error parsing type: , name: observers
    // Error parsing type: , name: user
    // Error parsing type: , name: friend
    // Error parsing type: , name: userFriendsAudiobooks
}

- (CDUnknownBlockType).cxx_destruct;
- (long long)sortOptionsScreenType;
- (_Bool)ascending;
- (long long)splitMode;
- (id)propertiesToFilter;
- (id)propertiesToSort;
- (void)favoriteAudiobooksReceived;
- (_Bool)isFetching;
- (void)refreshData;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSArray *userFriendsAudiobooks; // @synthesize userFriendsAudiobooks;
@property(nonatomic, retain) DeezerFriend *friend; // @synthesize friend;
@property(nonatomic, retain) DeezerUser *user; // @synthesize user;
@property(nonatomic, copy) NSArray *observers; // @synthesize observers;
@property(nonatomic, copy) NSArray *audiobookList; // @synthesize audiobookList;

@end

