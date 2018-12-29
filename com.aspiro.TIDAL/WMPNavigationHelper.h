//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Navigating-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSString, UINavigationController, UIViewController;

@interface WMPNavigationHelper : NSObject <UINavigationControllerDelegate, Navigating>
{
    _Bool _isBusyNavigating;
    UINavigationController *_navigationController;
    UIViewController *_sharingPopoverController;
    NSDictionary *_eventMetadata;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(retain, nonatomic) UIViewController *sharingPopoverController; // @synthesize sharingPopoverController=_sharingPopoverController;
@property(nonatomic) _Bool isBusyNavigating; // @synthesize isBusyNavigating=_isBusyNavigating;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)setEventMetadataForModule:(id)arg1;
- (void)hideSharingPopupController;
- (void)showShareMenuForObject:(id)arg1 fromRect:(struct CGRect)arg2 fromView:(id)arg3;
- (void)dismissContextSceneMenu;
- (void)showContextSceneWithItemId:(id)arg1 type:(long long)arg2 externalDataSource:(id)arg3;
- (void)showContextSceneWithItemId:(id)arg1 type:(long long)arg2 forPlaylistUuid:(id)arg3 indexPath:(id)arg4 shareRect:(struct CGRect)arg5 shareView:(id)arg6 artistNames:(id)arg7 artistIds:(id)arg8 presentingController:(id)arg9 delegate:(id)arg10;
- (void)showAddCutToPlaylistContextSceneMenuWithItemIdentifier:(id)arg1 fromController:(id)arg2 delegate:(id)arg3;
- (void)showContextSceneWithItemId:(id)arg1 type:(long long)arg2 forPlaylistUuid:(id)arg3 indexPath:(id)arg4 shareRect:(struct CGRect)arg5 shareView:(id)arg6 presentingController:(id)arg7;
- (void)showContextSceneWithItemId:(id)arg1 type:(long long)arg2 delegate:(id)arg3;
- (void)showContextSceneWithItemId:(id)arg1 type:(long long)arg2;
- (void)showContextNavigateToArtistSceneWithItemId:(id)arg1 artistNames:(id)arg2 artistIds:(id)arg3;
- (_Bool)parameterIsMissing:(id)arg1;
- (void)logNavigationDescription:(id)arg1;
- (void)navigateToSettingsAuthorizedClients;
- (_Bool)navigateToSettingsWithAnimation:(_Bool)arg1;
- (void)dismissWebViewIfAny;
- (_Bool)navigateToExternalURL:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToSearchType:(long long)arg1 searchTerm:(id)arg2 animated:(_Bool)arg3;
- (void)navigateToLogin;
- (void)hideSearchSuggestionsAnimated:(_Bool)arg1;
- (_Bool)showSearchSuggestionsAnimated:(_Bool)arg1;
- (_Bool)navigateToDynamicSceneId:(id)arg1 selectedIndex:(long long)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToDescription:(id)arg1 type:(long long)arg2 typeDescriptor:(id)arg3 withTransition:(id)arg4 animated:(_Bool)arg5;
- (_Bool)navigateToDescription:(id)arg1 navigationType:(long long)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToDescriptionWithId:(id)arg1 typeDescriptor:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToCreateCutSceneWithMode:(long long)arg1 itemUuid:(id)arg2 inPlaylistUuid:(id)arg3 withPosition:(long long)arg4 navigation:(id)arg5;
- (_Bool)navigateToSubscriptionChooserAnimated:(_Bool)arg1;
- (_Bool)navigateToArtistTracksWithArtistId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToFavoriteVideosWithUserId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToFavoriteTracksWithUserId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToFavoritePlaylistsWithUserId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToFacebookFeedWithArtist:(id)arg1 profileUrl:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToTwitterFeedWithArtist:(id)arg1 profileUrl:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToOtherAlbumsWithAlbumId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToPlaylistsCreatedByArtistWithId:(id)arg1 withItems:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToInfluencersForArtistWithId:(id)arg1 withItems:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToSimilarAlbumsWithAlbumId:(id)arg1 withItems:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToSimilarArtistsWithAlbumId:(id)arg1 withItems:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToSimilarArtistsWithArtistId:(id)arg1 withItems:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateToFavoriteArtistsWithUserId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToFavoriteAlbumsWithUserId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToFavoritesWithTabIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToFavoritesAnimated:(_Bool)arg1;
- (_Bool)navigateToExploreAnimated:(_Bool)arg1;
- (_Bool)navigateToPurchasedAlbumsAnimated:(_Bool)arg1;
- (_Bool)navigateToOfflineAlbumsAnimated:(_Bool)arg1;
- (_Bool)navigateToOfflinePlaylistsAnimated:(_Bool)arg1;
- (_Bool)navigateToDownloadQueueAnimated:(_Bool)arg1;
- (_Bool)navigateToOfflineContentAnimated:(_Bool)arg1;
- (_Bool)navigateToArtistVideosWithArtistId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToHomeAnimated:(_Bool)arg1;
- (_Bool)navigateToPlaylistWithUuid:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToAlbumCategoryWithCategoryIdentifier:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToVideoCategoryWithCategoryIdentifier:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToPlaylistCategoryWithCategoryIdentifier:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToArtistAlbumsWithId:(id)arg1 withFilter:(long long)arg2 withPageTitle:(id)arg3 animated:(_Bool)arg4;
- (_Bool)navigateToArtistWithId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToMixWithArtistId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToMyMixesAnimated:(_Bool)arg1;
- (_Bool)navigateToMixWithTrackId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToMixWithId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToAlbumWithId:(id)arg1 highlightTrackId:(id)arg2 animated:(_Bool)arg3;
- (void)resetNavigationDelegate;
- (_Bool)navigateBackAnimated:(_Bool)arg1;
- (_Bool)canNavigateBack;
- (_Bool)navigateToCreateCut:(id)arg1 inPlaylistUuid:(id)arg2 withPosition:(long long)arg3 navigation:(id)arg4;
- (_Bool)navigateToTrackId:(id)arg1 inAlbumId:(id)arg2 animated:(_Bool)arg3;
- (void)presentViewController:(id)arg1;
- (_Bool)navigateTo:(long long)arg1 itemId:(id)arg2 withItems:(id)arg3 withFilter:(long long)arg4 withPageTitle:(id)arg5 animated:(_Bool)arg6;
- (_Bool)navigateTo:(long long)arg1 itemId:(id)arg2 withFilter:(long long)arg3 withPageTitle:(id)arg4 animated:(_Bool)arg5;
- (_Bool)navigateTo:(long long)arg1 itemId:(id)arg2 withFilter:(long long)arg3 animated:(_Bool)arg4;
- (_Bool)navigateTo:(long long)arg1 itemId:(id)arg2 withItems:(id)arg3 animated:(_Bool)arg4;
- (_Bool)navigateTo:(long long)arg1 withFilter:(long long)arg2 itemId:(id)arg3;
- (_Bool)navigateTo:(long long)arg1 itemId:(id)arg2 animated:(_Bool)arg3;
- (_Bool)navigateTo:(long long)arg1 itemId:(id)arg2;
- (void)updateNavigationDestinationWithMetadata:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)getMainScene;
- (_Bool)isConfigured;
- (void)sendNavigationNotification;
- (_Bool)navigationControllerHasChildren;
- (void)configureWithController:(id)arg1;
- (id)currentTopController;
- (void)dealloc;
- (_Bool)navigateToTrackId:(id)arg1 animated:(_Bool)arg2;
- (id)createSharingViewControllerFor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

