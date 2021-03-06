//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRContentPageTableViewController.h"

#import "DZRContextMenuDelegate-Protocol.h"
#import "DZRLibraryItemTableViewCellDelegate-Protocol.h"
#import "ObservationKeeperDelegate-Protocol.h"

@class DZRContentLauncher, DeezerAlbum, NSString, ObservationKeeper, PlayerControllerListeningContext;

@interface DZRAlbumContentTableViewController : DZRContentPageTableViewController <ObservationKeeperDelegate, DZRLibraryItemTableViewCellDelegate, DZRContextMenuDelegate>
{
    _Bool _shouldPlay;
    _Bool _shouldDownload;
    _Bool _shouldShowLyrics;
    _Bool _shouldSync;
    DeezerAlbum *_album;
    ObservationKeeper *_cardObservationKeeper;
    ObservationKeeper *_favoriteObservationKeeper;
    ObservationKeeper *_loadingStateObservationKeeper;
    PlayerControllerListeningContext *_listeningContext;
    DZRContentLauncher *_contentLauncher;
}

@property(retain, nonatomic) DZRContentLauncher *contentLauncher; // @synthesize contentLauncher=_contentLauncher;
@property(readonly, nonatomic) PlayerControllerListeningContext *listeningContext; // @synthesize listeningContext=_listeningContext;
@property(retain, nonatomic) ObservationKeeper *loadingStateObservationKeeper; // @synthesize loadingStateObservationKeeper=_loadingStateObservationKeeper;
@property(retain, nonatomic) ObservationKeeper *favoriteObservationKeeper; // @synthesize favoriteObservationKeeper=_favoriteObservationKeeper;
@property(retain, nonatomic) ObservationKeeper *cardObservationKeeper; // @synthesize cardObservationKeeper=_cardObservationKeeper;
@property(nonatomic) _Bool shouldSync; // @synthesize shouldSync=_shouldSync;
@property(nonatomic) _Bool shouldShowLyrics; // @synthesize shouldShowLyrics=_shouldShowLyrics;
@property(nonatomic) _Bool shouldDownload; // @synthesize shouldDownload=_shouldDownload;
@property(nonatomic) _Bool shouldPlay; // @synthesize shouldPlay=_shouldPlay;
@property(retain, nonatomic) DeezerAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (long long)googleCastIconPriority;
- (_Bool)shouldDisplayGoogleCastIcon;
- (_Bool)supportsGoogleCast;
- (id)tabName;
- (id)navigationPath;
- (_Bool)contextMenu:(id)arg1 shouldDisplayAction:(long long)arg2 forItem:(id)arg3;
- (id)libraryItemCellListeningContext:(id)arg1;
- (void)libraryItemCellOptionButtonTouched:(id)arg1;
- (void)handleLoadingState;
- (id)noDataDictionary;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)observationKeeper:(id)arg1 didObserveChange:(id)arg2 ofValueWithKeyPath:(id)arg3 forObject:(id)arg4;
- (void)albumRemovedFromFavorite:(id)arg1;
- (void)albumAddedToFavorite:(id)arg1;
- (void)startObservingAlbumChanges;
- (id)playButtonTitle;
- (void)unsynchronizeCollection;
- (void)synchronizeCollection;
- (_Bool)isCollectionSynchronized;
- (_Bool)isCollectionSynchronizable;
- (id)collectionForSynchronization;
- (_Bool)shouldObserveSynchronizationNotifications;
- (void)playContent:(id)arg1;
- (_Bool)currentCollectionIsQueued;
- (void)updateTitle;
- (void)refreshHeaderBarActiveFunctions;
- (void)displayContextMenu:(id)arg1;
- (void)toggleFavoriteStatusOrEditItem:(id)arg1;
- (void)configureActionButton;
- (long long)dataType;
- (void)updateUI;
- (id)model;
- (void)viewDidLoad;
- (id)originForDownloadedBanner;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

