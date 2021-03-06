//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PlaylistUpdateManager : NSObject
{
    NSMutableArray *operations;
    NSMutableArray *totalSongs;
    NSMutableDictionary *playlistData;
    _Bool paginationOngoing;
    _Bool endReached;
    _Bool isMixed;
    _Bool isChart;
    unsigned long long itemsPerFetch;
    unsigned long long page;
    NSString *playlistId;
    NSString *playlistName;
    NSObject<OS_dispatch_queue> *playlistQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)saveResponse:(id)arg1 asNewList:(_Bool)arg2 forStarredPlaylist:(_Bool)arg3;
- (void)addToLibrary;
- (void)addSongsToPlaylists:(id)arg1;
- (void)addPlaylistToLibrary;
- (void)downloadSongs:(id)arg1;
- (void)addSongsToQueue:(id)arg1 withOperation:(int)arg2;
- (void)performActionsWithResponse:(id)arg1;
- (void)parsePlaylistData:(id)arg1;
- (void)fetchPlaylist;
- (void)handlePagination;
- (_Bool)actionArray:(id)arg1 containsOperation:(int)arg2;
- (void)resetPaginationParams;
- (void)fixPaginationParams:(id)arg1;
- (void)removeOperation:(int)arg1 fromActionArray:(id)arg2;
- (void)removeTopOfOperationQueue;
- (void)removeActionFromOperationQueue:(int)arg1;
- (void)removePlayAndAddToQueue;
- (void)manageActions;
- (void)addPlaylistActions:(id)arg1;
- (id)init;

@end

