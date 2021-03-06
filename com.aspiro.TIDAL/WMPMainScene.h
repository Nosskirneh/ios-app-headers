//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPAbstractScene.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIView, _TtC4WiMP20MenuTabBarController;

@interface WMPMainScene : WMPAbstractScene <UIGestureRecognizerDelegate>
{
    UIView *_contentView;
    UIView *_playerView;
    UIView *_tabBarView;
    NSLayoutConstraint *_playerBottomConstraint;
    NSLayoutConstraint *_tabBarBottomConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    UIView *_messageOverlayView;
    id _reachabilityObserver;
    id _offlineModeObserver;
    NSLayoutConstraint *_playerTopConstraint;
    _TtC4WiMP20MenuTabBarController *_menuTabBarController;
    NSMutableArray *_navControllers;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *navControllers; // @synthesize navControllers=_navControllers;
@property(retain, nonatomic) _TtC4WiMP20MenuTabBarController *menuTabBarController; // @synthesize menuTabBarController=_menuTabBarController;
@property(retain, nonatomic) NSLayoutConstraint *playerTopConstraint; // @synthesize playerTopConstraint=_playerTopConstraint;
@property(retain, nonatomic) id offlineModeObserver; // @synthesize offlineModeObserver=_offlineModeObserver;
@property(retain, nonatomic) id reachabilityObserver; // @synthesize reachabilityObserver=_reachabilityObserver;
@property(retain, nonatomic) UIView *messageOverlayView; // @synthesize messageOverlayView=_messageOverlayView;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *tabBarBottomConstraint; // @synthesize tabBarBottomConstraint=_tabBarBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *playerBottomConstraint; // @synthesize playerBottomConstraint=_playerBottomConstraint;
@property(retain, nonatomic) UIView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)getTabViewByTag:(unsigned long long)arg1;
- (void)openPlayQueue:(id)arg1;
- (void)navigateToOfflineContent;
- (void)navigateToMyCollectionWithTabIndex:(long long)arg1;
- (void)navigateToMyCollection;
- (_Bool)isPlayerMinimized;
- (_Bool)isPlayerOpen;
- (_Bool)isPlayerHidden;
- (void)playQueueDidChangeNotification:(id)arg1;
- (void)setTabbarBottomOffset:(double)arg1;
- (void)setPlayerBottomOffset:(double)arg1;
- (void)setContentViewBottomConstraint;
- (void)hideNoInternetMessage;
- (void)showNoInternetMessage;
- (void)closePlayersIfNeeded;
- (void)moveToOnlineMode;
- (void)moveToOfflineMode;
- (void)prepareMainSceneForExternalLink;
- (void)updateModules;
- (void)replaceControllerWith:(id)arg1;
- (id)getDynamicSceneWithPath:(id)arg1;
- (id)rootControllerForTab:(long long)arg1;
- (void)switchToTab:(long long)arg1 popToRoot:(_Bool)arg2;
- (void)popToRootTab:(long long)arg1 animated:(_Bool)arg2;
- (void)setupHeadersAndControllers;
- (void)sameTabTapped:(long long)arg1;
- (void)newTabTapped:(long long)arg1;
- (long long)currentTabbarItem;
- (void)addObservers;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

