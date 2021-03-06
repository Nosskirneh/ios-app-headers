//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DetailVC.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EditControls, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UserPlaylistManager;

@interface PlaylistVC : DetailVC <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UserPlaylistManager *playlistManager;
    _Bool isOffline;
    _Bool isStarredSongs;
    _Bool isTop15;
    NSString *typeStr;
    long long downloadRowSectionIndex;
    long long addSongsRowSectionIndex;
    _Bool firstFetchComplete;
    _Bool stopFetching;
    unsigned long long listSectionIndex;
    unsigned long long numberOfSongs;
    unsigned long long pagesFetched;
    _Bool playTapped;
    _Bool playAllCalledOnce;
    _Bool followTapped;
    _Bool downloadPlaylistTapped;
    _Bool downloadAllCalledOnce;
    _Bool addToQueueTapped;
    _Bool addAllCalledOnce;
    _Bool addToLibrary;
    _Bool historyEntryDone;
    _Bool editPlaylistPending;
    NSMutableArray *playListsToAddTo;
    NSMutableArray *uneditedList;
    NSMutableArray *editedList;
    UIButton *editCancelBtn;
    EditControls *editControls;
    _Bool isDeletingRow;
    NSMutableDictionary *paginationTracking;
    _Bool _isUserPlaylist;
    _Bool _isFetching;
    _Bool _endReached;
    _Bool _isForYou;
    _Bool _isEmptyForYou;
    int _playlistType;
    NSString *_playlistId;
    NSString *_playlistName;
    unsigned long long _page;
    unsigned long long _itemsPerFetch;
    double _paginationOffset;
    NSString *_currentLanguage;
    NSDictionary *_channelData;
}

@property(retain, nonatomic) NSDictionary *channelData; // @synthesize channelData=_channelData;
@property(retain, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(nonatomic) _Bool isEmptyForYou; // @synthesize isEmptyForYou=_isEmptyForYou;
@property(nonatomic) _Bool isForYou; // @synthesize isForYou=_isForYou;
@property(nonatomic) double paginationOffset; // @synthesize paginationOffset=_paginationOffset;
@property(nonatomic) unsigned long long itemsPerFetch; // @synthesize itemsPerFetch=_itemsPerFetch;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) _Bool endReached; // @synthesize endReached=_endReached;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) _Bool isUserPlaylist; // @synthesize isUserPlaylist=_isUserPlaylist;
@property(retain, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(retain, nonatomic) NSString *playlistId; // @synthesize playlistId=_playlistId;
@property(nonatomic) int playlistType; // @synthesize playlistType=_playlistType;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)doneEditing;
- (void)handleEditError:(id)arg1;
- (void)handleEditSuccess;
- (void)cancelEditing;
- (void)cancelEditingTapped;
- (void)saveEditsViaDelete:(_Bool)arg1;
- (void)updateTableForEditing:(_Bool)arg1;
- (void)beginEditing;
- (void)removeSong:(id)arg1 fromTable:(id)arg2;
- (void)resetView;
- (void)switchLanguage:(id)arg1;
- (void)showLanguageFilter;
- (void)songsUpdated;
- (void)stopAddToQueue;
- (void)playlistSaveResponse:(id)arg1 asNewList:(_Bool)arg2 forStarredPlaylist:(_Bool)arg3;
- (void)addToPlaylist:(id)arg1 isNew:(_Bool)arg2;
- (void)addSongsToLibrary;
- (void)addSongsToPlaylist;
- (void)setPlaylistHistoryObject;
- (id)prepareSongs:(id)arg1 forPlay:(_Bool)arg2;
- (void)downloadSongs:(id)arg1;
- (void)handleDownloadAll;
- (void)downloadAll;
- (void)handleDownloadTapped;
- (void)downloadTapped;
- (void)addSongsToQueue:(id)arg1;
- (void)addAllWithTracking:(id)arg1;
- (void)addTappedWithTracking:(id)arg1;
- (void)likeTapped;
- (void)playAllWithTracking:(id)arg1;
- (void)songPlayTappedWithTracking:(id)arg1;
- (void)playTappedWithTracking:(id)arg1;
- (void)headerPlayTapped;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)libraryUpdate:(id)arg1;
- (void)followUpdate:(id)arg1;
- (void)updateUIMode;
- (void)resetActionFlags;
- (void)setCurrentPage;
- (void)addPendingActionsToPlaylistManager;
- (void)handlePendingActions:(id)arg1;
- (void)addPlaylistBuilderRow;
- (void)showEmptyState;
- (void)hideEmptyState;
- (void)initHeaderActions;
- (void)initData;
- (void)initModules;
- (void)parseOfflinePlaylistData;
- (id)createModule;
- (void)initOfflinePlaylist:(id)arg1;
- (void)parseResults:(id)arg1;
- (void)fetchData;
- (void)checkCurrentLanguage;
- (void)initPagination;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

