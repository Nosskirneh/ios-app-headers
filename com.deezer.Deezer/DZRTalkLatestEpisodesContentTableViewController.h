//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRPlaylistContentTableViewController.h"

#import "DZRLibraryItemTableViewCellDelegate-Protocol.h"

@class DZRContentLauncher, DZRFavoriteTalkDataSource, NSString, PlayerControllerListeningContext;

@interface DZRTalkLatestEpisodesContentTableViewController : DZRPlaylistContentTableViewController <DZRLibraryItemTableViewCellDelegate>
{
    DZRFavoriteTalkDataSource *_favoriteTalkDataSource;
    PlayerControllerListeningContext *_listeningContext;
    DZRContentLauncher *_contentLauncher;
}

@property(retain, nonatomic) DZRContentLauncher *contentLauncher; // @synthesize contentLauncher=_contentLauncher;
@property(retain, nonatomic) PlayerControllerListeningContext *listeningContext; // @synthesize listeningContext=_listeningContext;
@property(retain, nonatomic) DZRFavoriteTalkDataSource *favoriteTalkDataSource; // @synthesize favoriteTalkDataSource=_favoriteTalkDataSource;
- (void).cxx_destruct;
- (_Bool)isCollectionSynchronized;
- (void)unsynchronizeCollection;
- (void)synchronizeCollection;
- (id)collectionForSynchronization;
- (_Bool)shouldObserveSynchronizationNotifications;
- (_Bool)isCollectionSynchronizable;
- (_Bool)shouldObserveNetworkChanges;
- (id)libraryItemCellListeningContext:(id)arg1;
- (long long)contextMenuTypeForControllerForItem:(id)arg1;
- (void)libraryItemCellOptionButtonTouched:(id)arg1;
- (id)noDataDictionary;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isLoading;
- (void)refreshData;
- (_Bool)currentCollectionIsQueued;
- (void)playContent:(id)arg1;
- (_Bool)shouldDisplayNavBarContextMenuButton;
- (_Bool)shouldDisplayNavBarActionButton;
- (void)viewDidLoad;
- (id)initWithTalkFavoritesDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

