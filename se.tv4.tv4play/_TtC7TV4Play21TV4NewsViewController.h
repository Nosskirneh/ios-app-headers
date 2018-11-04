//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TV4GoogleCastControllerDelegate-Protocol.h"

@class NSLayoutConstraint, UICollectionView, UITableView, UIView;

@interface _TtC7TV4Play21TV4NewsViewController : UIViewController <TV4GoogleCastControllerDelegate>
{
    // Error parsing type: , name: newsLiveAssetsLoader.storage
    // Error parsing type: , name: newsClipAssetsLoader.storage
    // Error parsing type: , name: playerViewController
    // Error parsing type: , name: tableViewRefreshControl
    // Error parsing type: , name: collectionViewRefreshControl
    // Error parsing type: , name: coveredState
    // Error parsing type: , name: googleCastView
    // Error parsing type: , name: allPrograms
    // Error parsing type: , name: allNewsAssets
    // Error parsing type: , name: currentAsset
    // Error parsing type: , name: timeStampForAppResign
    // Error parsing type: , name: timeStampSecondsForUpdate
    // Error parsing type: , name: isFetchingData
    // Error parsing type: , name: searchButton
    // Error parsing type: , name: searchBar
    // Error parsing type: , name: isTypingSearch
    // Error parsing type: , name: hiddenTitleView
    // Error parsing type: , name: rightButtons
    // Error parsing type: , name: selectedNewsLiveOrClip
    // Error parsing type: , name: clipRestorePosition
    // Error parsing type: , name: rotationViewState
    // Error parsing type: , name: collectionViewState
    // Error parsing type: , name: statusBarIsHidden
    // Error parsing type: , name: isFullscreen
    // Error parsing type: , name: isCoveredByGoogleCastController
    // Error parsing type: , name: tableView
    // Error parsing type: , name: tableViewTrailingConstraint
    // Error parsing type: , name: newsCollectionView
    // Error parsing type: , name: videoPlaceholderView
    // Error parsing type: , name: bottomConstraint
    // Error parsing type: , name: fullscreenView
    // Error parsing type: , name: shouldSkipPrerollOnCurrentClip
}

+ (id)newInstance;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)attemptReloadNewsWithAssetToPlay:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) _Bool shouldSkipPrerollOnCurrentClip; // @synthesize shouldSkipPrerollOnCurrentClip;
@property(nonatomic) __weak UIView *fullscreenView; // @synthesize fullscreenView;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint;
@property(nonatomic) __weak UIView *videoPlaceholderView; // @synthesize videoPlaceholderView;
@property(nonatomic) __weak UICollectionView *newsCollectionView; // @synthesize newsCollectionView;
@property(nonatomic) __weak NSLayoutConstraint *tableViewTrailingConstraint; // @synthesize tableViewTrailingConstraint;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
- (void)didDisconnectAsset:(id)arg1;
- (void)didStartCastSession;
- (void)didReceiveMediaStateChange;
- (void)closeSearch;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)openSearch;
- (void)handlePullToRefreshForCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)markTimeStampForResignActiveWithNotification:(id)arg1;
- (void)checkIfNewsDataShouldBeReloadedWithNotification:(id)arg1;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
- (void)playAssetIdFromCastMiniController:(id)arg1;
- (void)playPlayableAssetFromCastMiniController:(id)arg1;
- (_Bool)shouldShowGoogleCastMiniController;
- (void)handlePullToRefreshForTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
