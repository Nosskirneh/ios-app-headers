//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTMOfflinePlaylistStatusControllerObserver-Protocol.h"
#import "YTMPlaylistPanelHeaderViewControllerProtocol-Protocol.h"

@class GIMMe, NSString, YTIPlaylistPanelRenderer, YTImageService, YTMAutomixTunerViewController, YTMOfflinePlaylistStatusController, YTMPlaylistPanelHeaderView;
@protocol YTPlaylistControlsResponderProvider, YTResponder;

@interface YTMPlaylistPanelHeaderViewController : UIViewController <YTMOfflinePlaylistStatusControllerObserver, YTMPlaylistPanelHeaderViewControllerProtocol>
{
    id <YTResponder> _parentResponder;
    id <YTPlaylistControlsResponderProvider> _playlistControlsProvider;
    YTMPlaylistPanelHeaderView *_headerView;
    YTMAutomixTunerViewController *_tunerViewController;
    YTImageService *_imageService;
    YTMOfflinePlaylistStatusController *_offlinePlaylistStatusController;
    YTIPlaylistPanelRenderer *_playlistPanelRenderer;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) YTIPlaylistPanelRenderer *playlistPanelRenderer; // @synthesize playlistPanelRenderer=_playlistPanelRenderer;
- (void).cxx_destruct;
- (void)didTapEditButton:(id)arg1;
- (void)didTapTunerButton:(id)arg1;
- (void)didTapLikeButton:(id)arg1;
- (void)didTapShareButton:(id)arg1;
- (void)didTapLoopButton:(id)arg1;
- (void)didTapShuffleButton:(id)arg1;
- (void)didTapOfflineButton:(id)arg1;
- (void)offlinePlaylistStatusController:(id)arg1 didDeleteOfflinePlaylistWithPlaylistID:(id)arg2;
- (void)offlinePlaylistStatusController:(id)arg1 didUpdateOfflinePlaylistMetadata:(id)arg2;
- (void)updateHeaderControls;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

