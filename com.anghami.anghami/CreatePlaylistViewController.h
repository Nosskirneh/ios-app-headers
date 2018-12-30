//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnghamiTableViewController.h"

#import "LoaderDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class ANGPlaylist, NSMutableOrderedSet, NSMutableSet, NSObject, NSOrderedSet, NSString, UIButton;

@interface CreatePlaylistViewController : AnghamiTableViewController <UIAlertViewDelegate, UISearchBarDelegate, LoaderDelegate>
{
    NSMutableSet *currentSongs;
    _Bool _isShowingDownloadedSongs;
    _Bool _isForInbox;
    _Bool _isForUserVideo;
    NSOrderedSet *_searchResults;
    NSOrderedSet *_recentPlays;
    NSOrderedSet *_likes;
    NSOrderedSet *_topSongs;
    NSOrderedSet *_featured;
    NSMutableOrderedSet *_selectedSongs;
    UIButton *_doneButton;
    ANGPlaylist *_serverPlaylist;
    NSObject *_currentSongsLock;
}

+ (void)showCreatePlaylistControllerForUserVideo;
+ (void)showCreatePlaylistControllerForInbox;
+ (void)showCreatePlaylistControllerForDownloadedSongs;
+ (void)showCreatePlaylistController:(id)arg1;
+ (void)showCreatePlaylistController;
@property(nonatomic) _Bool isForUserVideo; // @synthesize isForUserVideo=_isForUserVideo;
@property(nonatomic) _Bool isForInbox; // @synthesize isForInbox=_isForInbox;
@property(retain, nonatomic) NSObject *currentSongsLock; // @synthesize currentSongsLock=_currentSongsLock;
@property(nonatomic) _Bool isShowingDownloadedSongs; // @synthesize isShowingDownloadedSongs=_isShowingDownloadedSongs;
@property(retain, nonatomic) ANGPlaylist *serverPlaylist; // @synthesize serverPlaylist=_serverPlaylist;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSMutableOrderedSet *selectedSongs; // @synthesize selectedSongs=_selectedSongs;
@property(retain, nonatomic) NSOrderedSet *featured; // @synthesize featured=_featured;
@property(retain, nonatomic) NSOrderedSet *topSongs; // @synthesize topSongs=_topSongs;
@property(retain, nonatomic) NSOrderedSet *likes; // @synthesize likes=_likes;
@property(retain, nonatomic) NSOrderedSet *recentPlays; // @synthesize recentPlays=_recentPlays;
@property(retain, nonatomic) NSOrderedSet *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (_Bool)isHideAds;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)doneButtonAction;
- (void)cancelButtonAction;
- (void)saveToDownloads;
- (void)saveToPlaylist;
- (void)promptCreatePlaylist;
- (id)songForIndexPath:(id)arg1;
- (void)disableDoneButton;
- (void)enableDoneButton;
- (void)createDoneButton;
- (void)createCancelButton;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (id)filterLoaderSongs:(id)arg1;
- (void)loadingFinished:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)customizeSearchBar;
- (void)loadPlaylist:(id)arg1;
- (void)requestPlaylistsData;
- (void)reloadData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSMutableSet *currentSongs;
- (id)initForUserVideo;
- (id)initForInbox;
- (id)initForDownloadedSongs;
- (id)initWithServerPlaylist:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

