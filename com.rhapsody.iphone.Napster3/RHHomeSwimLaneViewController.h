//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHSwimLaneViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "PSTCollectionViewDataSource-Protocol.h"
#import "PSTCollectionViewDelegate-Protocol.h"
#import "PSTCollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSFetchedResultsController, NSString;

@interface RHHomeSwimLaneViewController : RHSwimLaneViewController <PSTCollectionViewDataSource, PSTCollectionViewDelegate, PSTCollectionViewDelegateFlowLayout, NSFetchedResultsControllerDelegate>
{
    int _homeSwimLaneType;
    NSFetchedResultsController *_fetchedResultsController;
    NSString *_headerTitle;
    SEL _headerTapSelector;
    NSArray *_fetchedObjects;
    struct CGSize _itemSize;
}

@property(retain, nonatomic) NSArray *fetchedObjects; // @synthesize fetchedObjects=_fetchedObjects;
@property int homeSwimLaneType; // @synthesize homeSwimLaneType=_homeSwimLaneType;
@property(nonatomic) SEL headerTapSelector; // @synthesize headerTapSelector=_headerTapSelector;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
- (void).cxx_destruct;
- (id)reachabilityService;
- (id)dependencies;
- (void)didSignIn:(id)arg1;
- (void)didSignOut:(id)arg1;
- (void)refreshHiddenProperty;
- (void)setUpFetchedObjects;
- (id)sortEditorialsByCategory:(id)arg1;
- (void)handleNetworkStatusChangedNotification:(id)arg1;
- (void)reloadViewData;
- (void)refresh;
- (void)showRhapsodyPlaylists;
- (void)rhapsodyPlaylistsTapped:(id)arg1;
- (void)showEditorials;
- (void)editorialsTapped:(id)arg1;
- (void)showTopArtists;
- (void)topArtistsTapped:(id)arg1;
- (void)showTopAlbums;
- (void)showRecentlyReleasedAlbums;
- (void)newReleasesTapped:(id)arg1;
- (void)showPlaylist:(id)arg1;
- (void)showEditorialDetailForEditorial:(id)arg1;
- (void)showEditorial:(id)arg1;
- (void)playTappedArtistRadioWithId:(id)arg1;
- (void)showArtist:(id)arg1;
- (void)showAlbum:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)viewUnloading;
- (void)viewDidLoad;
- (id)initForEditorialsWithDataController:(id)arg1;
- (id)initForTopArtistsWithDataController:(id)arg1;
- (id)initForRhapsodyPlaylistsWithDataController:(id)arg1;
- (id)initForRecentlyReleasedAlbumsWithDataController:(id)arg1;
- (id)initWithDataController:(id)arg1 itemSize:(struct CGSize)arg2 fetchedResultsController:(id)arg3 headerTitle:(id)arg4 headerTapSelector:(SEL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

