//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBSDKSharingDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EmptyErrorState, FauxNav, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, SaavnAdView, SaavnNavBar, SaavnRefresh, SegmentTabs, UIButton, UIScrollView, UITableView;
@protocol OS_dispatch_queue;

@interface SaavnVC_n : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, FBSDKSharingDelegate>
{
    NSObject<OS_dispatch_queue> *adAccessQueue;
    _Bool isModal;
    _Bool isPushing;
    _Bool isReappearing;
    double lastOffset;
    double navPos;
    double navStart;
    double scrollViewStart;
    _Bool resettingNavBar;
    _Bool initialNavSetup;
    _Bool isDarkMode;
    _Bool isLoggedIn;
    _Bool isPro;
    _Bool isFreemium;
    _Bool isShowingContent;
    _Bool isOfflineMode;
    _Bool alwaysOnListeners;
    _Bool _navScrolls;
    _Bool _showNavShadow;
    _Bool _alwaysShowNavShadow;
    _Bool _hidesNavBar;
    _Bool _hasBanner;
    _Bool _resetScrollOffsets;
    _Bool _isPlayer;
    _Bool _isPlaylistBuilder;
    int _viewType;
    SaavnNavBar *_navBar;
    UIButton *_navCancel;
    UIButton *_navOptions;
    FauxNav *_fauxNav;
    SaavnAdView *_fixedBanner;
    NSMutableDictionary *_adObjects;
    UIScrollView *_childScrollView;
    UITableView *_mainTable;
    NSMutableArray *_rowHeights;
    NSMutableArray *_sectionHeaderHeights;
    NSMutableDictionary *_scrollerOffsets;
    SaavnRefresh *_refresh;
    NSString *_sortOrder;
    SegmentTabs *_sortTabs;
    double _tabInsetAdjustment;
    NSString *_viewID;
    NSString *_viewName;
    NSString *_trackingPrefix;
    NSString *_trackingSource;
    NSDictionary *_sharedEntity;
    NSMutableDictionary *_topSrcData;
    NSMutableDictionary *_topSrcDataDeepLink;
    EmptyErrorState *_errorState;
}

@property(retain, nonatomic) EmptyErrorState *errorState; // @synthesize errorState=_errorState;
@property(nonatomic) _Bool isPlaylistBuilder; // @synthesize isPlaylistBuilder=_isPlaylistBuilder;
@property(nonatomic) _Bool isPlayer; // @synthesize isPlayer=_isPlayer;
@property(retain, nonatomic) NSMutableDictionary *topSrcDataDeepLink; // @synthesize topSrcDataDeepLink=_topSrcDataDeepLink;
@property(retain, nonatomic) NSMutableDictionary *topSrcData; // @synthesize topSrcData=_topSrcData;
@property(retain, nonatomic) NSDictionary *sharedEntity; // @synthesize sharedEntity=_sharedEntity;
@property(retain, nonatomic) NSString *trackingSource; // @synthesize trackingSource=_trackingSource;
@property(retain, nonatomic) NSString *trackingPrefix; // @synthesize trackingPrefix=_trackingPrefix;
@property(retain, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
@property(retain, nonatomic) NSString *viewID; // @synthesize viewID=_viewID;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(nonatomic) double tabInsetAdjustment; // @synthesize tabInsetAdjustment=_tabInsetAdjustment;
@property(retain, nonatomic) SegmentTabs *sortTabs; // @synthesize sortTabs=_sortTabs;
@property(retain, nonatomic) NSString *sortOrder; // @synthesize sortOrder=_sortOrder;
@property(retain, nonatomic) SaavnRefresh *refresh; // @synthesize refresh=_refresh;
@property(nonatomic) _Bool resetScrollOffsets; // @synthesize resetScrollOffsets=_resetScrollOffsets;
@property(retain, nonatomic) NSMutableDictionary *scrollerOffsets; // @synthesize scrollerOffsets=_scrollerOffsets;
@property(retain, nonatomic) NSMutableArray *sectionHeaderHeights; // @synthesize sectionHeaderHeights=_sectionHeaderHeights;
@property(retain, nonatomic) NSMutableArray *rowHeights; // @synthesize rowHeights=_rowHeights;
@property(retain, nonatomic) UITableView *mainTable; // @synthesize mainTable=_mainTable;
@property(retain, nonatomic) UIScrollView *childScrollView; // @synthesize childScrollView=_childScrollView;
@property(retain, nonatomic) NSMutableDictionary *adObjects; // @synthesize adObjects=_adObjects;
@property(nonatomic) _Bool hasBanner; // @synthesize hasBanner=_hasBanner;
@property(retain, nonatomic) SaavnAdView *fixedBanner; // @synthesize fixedBanner=_fixedBanner;
@property(retain, nonatomic) FauxNav *fauxNav; // @synthesize fauxNav=_fauxNav;
@property(retain, nonatomic) UIButton *navOptions; // @synthesize navOptions=_navOptions;
@property(retain, nonatomic) UIButton *navCancel; // @synthesize navCancel=_navCancel;
@property(nonatomic) _Bool hidesNavBar; // @synthesize hidesNavBar=_hidesNavBar;
@property(nonatomic) _Bool alwaysShowNavShadow; // @synthesize alwaysShowNavShadow=_alwaysShowNavShadow;
@property(nonatomic) _Bool showNavShadow; // @synthesize showNavShadow=_showNavShadow;
@property(nonatomic) _Bool navScrolls; // @synthesize navScrolls=_navScrolls;
@property(retain, nonatomic) SaavnNavBar *navBar; // @synthesize navBar=_navBar;
- (void).cxx_destruct;
- (int)getParentViewType;
- (id)getParentVC;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)postShareEventFail:(id)arg1 withShareEntity:(id)arg2;
- (void)postShareEventSuccess:(id)arg1 withShareEntity:(id)arg2;
- (void)postShareClick:(id)arg1 trackString:(id)arg2;
- (id)getDeeplinkTopSourceDict;
- (id)getTopSourceDict;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)sharer:(id)arg1 didFailWithError:(id)arg2;
- (void)sharerDidCancel:(id)arg1;
- (void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)refreshComplete;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)enableRefreshAction:(CDUnknownBlockType)arg1;
- (void)addOptionsButton;
- (void)addCancelButton:(id)arg1;
- (void)addCancelButton;
- (void)scrollToTop;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (_Bool)isTableAtTop;
- (void)updateKeyboard;
- (void)nowPlayingUpdate:(id)arg1;
- (void)downloadUpdate:(id)arg1;
- (void)iPadRefreshLayout;
- (void)orientationChange;
- (void)updateFreemiumStatus;
- (void)updateOfflineMode;
- (void)updateProMode;
- (void)updateUserState:(id)arg1;
- (void)toggleTabMode;
- (void)updateUIMode;
- (void)toggleUIMode;
- (void)forceRefresh;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)hardRefreshAllStoredAdViewObjects;
- (void)deleteAllStoredAdViewObjects;
- (void)deleteStoredAdViewObject:(id)arg1;
- (id)getAdViewObject:(id)arg1;
- (void)storeAdViewObject:(id)arg1 withKey:(id)arg2;
- (void)setCurrentViewType;
- (void)initFixedBanner;
- (void)updateInsetsForPlaylistBuilderBar:(id)arg1;
- (void)updateInsets:(id)arg1;
- (void)initMainTable;
- (void)resetScrollingNav;
- (void)handleScroll:(id)arg1;
- (void)initNavScrolling;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

