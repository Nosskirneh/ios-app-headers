//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_SPTHubViewController.h"

#import "FollowModelObserver.h"
#import "SPTOfflineModeStateObserver.h"

@class FollowModel, NSString, SPTArtistLogger, UIBarButtonItem;

@interface SPTArtistHubViewController : EXP_SPTHubViewController <SPTOfflineModeStateObserver, FollowModelObserver>
{
    _Bool _heartsInEntityHeadersEnabled;
    FollowModel *_followModel;
    UIBarButtonItem *_contextMenuBarButtonItem;
    UIBarButtonItem *_actionBarButtonItem;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPContextMenuActionsFactory> _contextMenuActionsFactory;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTOfflineModeState> _offlineModeState;
    SPTArtistLogger *_artistLogger;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    UIBarButtonItem *_likeBarButtonItem;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <EXP_HUBCommandHandler> _commandHandler;
}

@property(retain, nonatomic) id <EXP_HUBCommandHandler> commandHandler; // @synthesize commandHandler=_commandHandler;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) UIBarButtonItem *likeBarButtonItem; // @synthesize likeBarButtonItem=_likeBarButtonItem;
@property(nonatomic) _Bool heartsInEntityHeadersEnabled; // @synthesize heartsInEntityHeadersEnabled=_heartsInEntityHeadersEnabled;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) SPTArtistLogger *artistLogger; // @synthesize artistLogger=_artistLogger;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(retain, nonatomic) id <SPContextMenuActionsFactory> contextMenuActionsFactory; // @synthesize contextMenuActionsFactory=_contextMenuActionsFactory;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(retain, nonatomic) UIBarButtonItem *actionBarButtonItem; // @synthesize actionBarButtonItem=_actionBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *contextMenuBarButtonItem; // @synthesize contextMenuBarButtonItem=_contextMenuBarButtonItem;
@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
- (void).cxx_destruct;
- (void)followButtonTapped;
- (void)followModel:(id)arg1 updateDidFailWithError:(id)arg2;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)updateLikeButtonState;
- (void)spt_scrollToTop;
- (id)URI;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)tasksForEntityURI:(id)arg1;
- (void)showContextMenu:(id)arg1;
- (void)configureContextMenuBarButtonItems;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 pageURI:(id)arg2 componentRegistry:(id)arg3 componentLayoutManager:(id)arg4 imageLoaderFactory:(id)arg5 commandHandler:(id)arg6 viewModelProvider:(id)arg7 impressionLogger:(id)arg8 loadingLogger:(id)arg9 artistLogger:(id)arg10 contextMenuPresenterFactory:(id)arg11 contextMenuActionsFactory:(id)arg12 contextMenuOptionsFactory:(id)arg13 offlineModeState:(id)arg14 heartsInEntityHeadersEnabled:(_Bool)arg15 collectionTestManager:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

