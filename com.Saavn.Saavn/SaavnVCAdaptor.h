//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnVC_n.h"

@class AppAlert, CBPopoverDelegate, NSString, SaavnSegmentTabs, UIActivityIndicatorView, UIButton, UIImageView, UIPopoverController, UIScrollView, UISearchBar, UITableView, UIView, UIViewController;

@interface SaavnVCAdaptor : SaavnVC_n
{
    UIImageView *cloud;
    UIImageView *shadow;
    _Bool showingOffline;
    UITableView *searchTable;
    UIButton *viewActionBtn;
    CDUnknownBlockType viewActionTap;
    _Bool hasTabs;
    _Bool hideNavBar;
    _Bool hasHeader;
    _Bool hasSpotlight;
    _Bool spotlightScrolls;
    _Bool _isModal;
    UIViewController *childVC;
    UIScrollView *childScrollView;
    UIActivityIndicatorView *loadSpinner;
    UISearchBar *searchBar;
    UIView *_errorView;
    UIView *_connectView;
    UIView *_offlineView;
    SaavnSegmentTabs *_tabs_OLD;
    NSString *_offlineString;
    AppAlert *_alert;
    CBPopoverDelegate *_popDelegate;
    UIPopoverController *_popover;
    UIView *_viewAction;
}

@property(retain, nonatomic) UIView *viewAction; // @synthesize viewAction=_viewAction;
@property(retain, nonatomic) UIPopoverController *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) CBPopoverDelegate *popDelegate; // @synthesize popDelegate=_popDelegate;
@property(nonatomic) _Bool isModal; // @synthesize isModal=_isModal;
@property(retain, nonatomic) AppAlert *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) NSString *offlineString; // @synthesize offlineString=_offlineString;
@property(retain, nonatomic) SaavnSegmentTabs *tabs_OLD; // @synthesize tabs_OLD=_tabs_OLD;
@property(retain, nonatomic) UIView *offlineView; // @synthesize offlineView=_offlineView;
@property(retain, nonatomic) UIView *connectView; // @synthesize connectView=_connectView;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool spotlightScrolls; // @synthesize spotlightScrolls;
@property(nonatomic) _Bool hasSpotlight; // @synthesize hasSpotlight;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar;
@property(nonatomic) _Bool hasHeader; // @synthesize hasHeader;
@property(nonatomic) _Bool hideNavBar; // @synthesize hideNavBar;
@property(retain, nonatomic) UIActivityIndicatorView *loadSpinner; // @synthesize loadSpinner;
@property(retain, nonatomic) UIScrollView *childScrollView; // @synthesize childScrollView;
@property(retain, nonatomic) UIViewController *childVC; // @synthesize childVC;
@property(nonatomic) _Bool hasTabs; // @synthesize hasTabs;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dismissView;
- (void)hidePopover:(_Bool)arg1;
- (void)hidePopover;
- (id)getViewActionButton;
- (void)handleViewAction;
- (void)initViewAction:(id)arg1 withAction:(CDUnknownBlockType)arg2 asFixed:(_Bool)arg3;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)initSearchFieldFor:(id)arg1;
- (void)restackViews;
- (void)resetCloudAnimation;
- (void)setOnline;
- (void)showOffline:(_Bool)arg1;
- (void)removeFBConnect;
- (void)showClassicLogin;
- (void)FBAutoLogIn;
- (void)showFBLogIn;
- (void)FBConnectSuccess:(id)arg1;
- (void)FBConnect;
- (void)showFBConnect:(id)arg1 message:(id)arg2 andInsets:(struct UIEdgeInsets)arg3;
- (void)removeEmptyState;
- (void)hideEmptyState;
- (void)showEmptyState:(id)arg1 andMessage:(id)arg2;
- (void)removeErrorView;
- (void)hideError;
- (void)showError:(id)arg1 andMessage:(id)arg2;
- (void)showError:(id)arg1;
- (void)tabChanged;
- (void)initTabs:(id)arg1 forInline:(_Bool)arg2;
- (void)addTabs:(id)arg1;
- (void)viewDidLoad;

@end
