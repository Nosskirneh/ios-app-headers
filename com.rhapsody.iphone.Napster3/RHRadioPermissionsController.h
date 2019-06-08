//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHPermissionsController.h"

#import "RHFavoritesProtocol-Protocol.h"

@class NSString;

@interface RHRadioPermissionsController : RHPermissionsController <RHFavoritesProtocol>
{
}

- (_Bool)addDownloadActionsToMenuForTrack:(id)arg1 forTableViewControllerMode:(int)arg2;
- (long long)upsellContextForPlaybackPreview;
- (id)playerController;
- (id)accountController;
- (id)upsellController;
- (id)userModel;
- (id)dataController;
- (id)appDelegate;
@property(readonly, nonatomic) unsigned long long numberOfPlayableFavoriteTracks;
- (_Bool)shouldShowPlaylists;
- (long long)trackRadioStartedCounter;
- (void)registerTrackRadioStarting;
- (long long)tryingToPlayEditorial:(id)arg1;
- (_Bool)shouldPreviewTrackGuid:(id)arg1;
- (long long)numberOfPlaysRemaining;
- (_Bool)allowLibraryActionWithContext:(id)arg1;
- (_Bool)showAlbumArtPlayButton;
- (_Bool)addRadioActionsToMenus;
- (_Bool)addQueueActionsToMenus;
- (_Bool)addLibraryActionsToMenus;
- (id)menuItemsIPad;
- (id)menuItemsIPhone;
- (_Bool)isPlaybarHidden;
- (id)removeProgrammedStationFromMyLibraryText;
- (id)removeStationFromMyLibraryText;
- (id)addProgrammedStationToMyLibraryText;
- (id)addStationToMyLibraryText;
- (_Bool)shouldShowRadioHubHeader;
- (_Bool)supportsFavoritingTrack:(id)arg1;
- (_Bool)canFollowPlaylists;
- (_Bool)downloadEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

