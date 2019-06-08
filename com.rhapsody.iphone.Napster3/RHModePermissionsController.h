//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RHPermissionsProtocol-Protocol.h"

@class NSArray, NSString;
@protocol RHPermissionsProtocol;

@interface RHModePermissionsController : NSObject <RHPermissionsProtocol>
{
    id <RHPermissionsProtocol> _permissionsController;
}

@property(readonly, nonatomic) id <RHPermissionsProtocol> permissionsController; // @synthesize permissionsController=_permissionsController;
- (void).cxx_destruct;
- (long long)userActionFeedbackForActionContext:(id)arg1;
@property(readonly, nonatomic) _Bool canDownloadFavorites;
@property(readonly, nonatomic) _Bool canDownload;
@property(readonly, nonatomic) _Bool shouldShowOmnibarUpsell;
- (_Bool)shouldShowFullScreenPlayerForPreviousState:(long long)arg1 presentState:(long long)arg2 viewMode:(long long)arg3;
- (_Bool)shouldShowMiniPlayerForPreviousState:(long long)arg1 presentState:(long long)arg2;
- (_Bool)shouldAutoDownloadCarModeContent;
- (_Bool)shouldAutoDownloadKidsModeContent;
- (void)showUpsellOnAddToFavoritesActionIfNeeded;
- (void)showUpsellOnCreatePlaylistActionIfNeeded;
- (void)showUpsellOnAddToLibraryActionIfNeededForContext:(id)arg1;
- (void)showUpsellOnAppLaunchIfNeeded;
- (void)trackStoppedPlayback;
- (void)trackStartedPlayback:(id)arg1;
- (_Bool)shouldShowPlaylists;
- (long long)tryingToPlayEditorial:(id)arg1;
- (void)registerTrackRadioStarting;
- (_Bool)supportsResuming;
- (_Bool)supportsScrubbingForTrack:(id)arg1;
- (_Bool)shouldPreviewTrackGuid:(id)arg1;
- (long long)getInitialPlaysRemaining;
- (long long)numberOfPlaysRemaining;
- (_Bool)shouldRevealFlyoutMenu;
- (_Bool)shouldShowMenuItem:(long long)arg1;
- (_Bool)iPhoneMenuItemsContainItem:(long long)arg1;
- (_Bool)shouldShowRadioHubHeader;
- (_Bool)shouldHandleDeepLink:(id)arg1;
@property(readonly, nonatomic) _Bool ignorePushNotifications;
- (_Bool)isPayIncentiveForUpsellContext:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldAddCarModeActionsToMenus;
@property(readonly, nonatomic) _Bool shouldAddKidsModeActionsToMenus;
- (_Bool)addDownloadActionsToMenusForTableViewControllerMode:(int)arg1;
- (_Bool)addDownloadActionsToMenuForTrack:(id)arg1 forTableViewControllerMode:(int)arg2;
@property(readonly, nonatomic) _Bool showAlbumArtPlayButton;
@property(readonly, nonatomic) _Bool addRadioActionsToMenus;
@property(readonly, nonatomic) _Bool addQueueActionsToMenus;
@property(readonly, nonatomic) _Bool addDownloadActionsToMenus;
@property(readonly, nonatomic) _Bool addLibraryActionsToMenus;
@property(readonly, nonatomic) NSArray *menuItemsIPad;
@property(readonly, nonatomic) NSArray *menuItemsIPhone;
- (_Bool)isPlaybarHidden;
- (id)removeProgrammedStationFromMyLibraryText;
- (id)addProgrammedStationToMyLibraryText;
- (_Bool)allowLibraryActionWithContext:(id)arg1;
- (id)trialResetDate;
@property(readonly, nonatomic) _Bool canFollowPlaylists;
- (_Bool)supportsFavoritingTrack:(id)arg1;
- (id)initWithPermissionsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

