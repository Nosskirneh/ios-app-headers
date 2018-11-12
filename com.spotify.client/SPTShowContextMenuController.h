//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTShowContextMenuMetadataViewDelegate-Protocol.h"

@class NSString;
@protocol SPContextMenuActionsFactory, SPTCollectionPlatform, SPTCollectionPlatformTestManager, SPTContextMenuPresenter, SPTContextMenuPresenterFactory, SPTLinkDispatcher, SPTModalPresentationController, SPTPodcastSpeedControlManager, SPTPodcastTestManager, SPTScannablesUserInterfaceFactory, SPTSleepTimerContextMenuActionsProvider;

@interface SPTShowContextMenuController : NSObject <SPTShowContextMenuMetadataViewDelegate>
{
    _Bool _sleepTimerEnabled;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTContextMenuPresenterFactory> _presenterFactory;
    id <SPContextMenuActionsFactory> _actionFactory;
    id <SPTPodcastSpeedControlManager> _speedControlManager;
    id <SPTSleepTimerContextMenuActionsProvider> _sleepTimerContextMenuActionsProvider;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTScannablesUserInterfaceFactory> _scannablesUIFactory;
}

@property(nonatomic) __weak id <SPTScannablesUserInterfaceFactory> scannablesUIFactory; // @synthesize scannablesUIFactory=_scannablesUIFactory;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(nonatomic) _Bool sleepTimerEnabled; // @synthesize sleepTimerEnabled=_sleepTimerEnabled;
@property(retain, nonatomic) id <SPTSleepTimerContextMenuActionsProvider> sleepTimerContextMenuActionsProvider; // @synthesize sleepTimerContextMenuActionsProvider=_sleepTimerContextMenuActionsProvider;
@property(retain, nonatomic) id <SPTPodcastSpeedControlManager> speedControlManager; // @synthesize speedControlManager=_speedControlManager;
@property(retain, nonatomic) id <SPContextMenuActionsFactory> actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> presenterFactory; // @synthesize presenterFactory=_presenterFactory;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) __weak id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
- (void).cxx_destruct;
- (_Bool)isIPad;
- (id)subtitleContextMenuActionForURI:(id)arg1 sourceURL:(id)arg2 options:(id)arg3;
- (void)showContextMenuMetadataViewShowMore:(id)arg1;
- (id)logContext;
- (void)presentContextMenuForEpisode:(id)arg1 URI:(id)arg2 metadata:(id)arg3 sourceURL:(id)arg4 contextMenuDelegate:(id)arg5 inViewController:(id)arg6 senderView:(id)arg7 options:(id)arg8;
- (id)provideGoToArtistActionTaskForTrackURL:(id)arg1 logContext:(id)arg2;
- (id)provideGoToAlbumActionTaskForTrackURL:(id)arg1 logContext:(id)arg2;
- (id)provideAddToPlaylistActionForTrackURL:(id)arg1 sourceURL:(id)arg2 logContext:(id)arg3 contextSourceURL:(id)arg4;
- (void)presentContexMenuForShow:(id)arg1 contextMenuDelegate:(id)arg2 inViewController:(id)arg3 senderView:(id)arg4 options:(id)arg5;
- (void)presentContexMenuWithHeaderView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5;
- (void)presentContexMenuWithMetaDataView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5;
- (id)initWithPodcastTestManager:(id)arg1 collectionPlatfrom:(id)arg2 collectionTestManager:(id)arg3 speedControlManager:(id)arg4 sleepTimerContextMenuActionsProvider:(id)arg5 sleepTimerEnabled:(_Bool)arg6 modalPresentationController:(id)arg7 presenterFactory:(id)arg8 actionFactory:(id)arg9 linkDispatcher:(id)arg10 scannablesUIFactory:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

