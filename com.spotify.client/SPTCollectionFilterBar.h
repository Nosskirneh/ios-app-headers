//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class NSString, SPTCollectionFilterContextMenuButton, SPTSearchBar, UIBarButtonItem, UIColor, UINavigationBar, UITableView, UIViewController;
@protocol SPTCollectionFilterBarDelegate;

@interface SPTCollectionFilterBar : UIView <UISearchBarDelegate, UIGestureRecognizerDelegate>
{
    _Bool _active;
    _Bool _disableContextMenu;
    _Bool _disablePulldown;
    _Bool _navItemHasBackButton;
    _Bool _hasAppeared;
    _Bool _pulledDown;
    _Bool _pullingDown;
    _Bool _useDarkBackground;
    id <SPTCollectionFilterBarDelegate> _delegate;
    SPTCollectionFilterContextMenuButton *_contextMenuButton;
    UITableView *_tableView;
    SPTSearchBar *_searchBar;
    UIBarButtonItem *_navItemLeft;
    UIBarButtonItem *_navItemRight;
    UIColor *_containerColor;
    UIView *_searchBarWrapper;
    UIView *_filterBarContainer;
    UIView *_filterBarPlaceholder;
    UIViewController *_targetViewController;
    UIView *_navItemTitle;
    UINavigationBar *_darkNavigationBar;
}

@property(nonatomic) _Bool useDarkBackground; // @synthesize useDarkBackground=_useDarkBackground;
@property(retain, nonatomic) UINavigationBar *darkNavigationBar; // @synthesize darkNavigationBar=_darkNavigationBar;
@property(nonatomic) _Bool pullingDown; // @synthesize pullingDown=_pullingDown;
@property(nonatomic) _Bool pulledDown; // @synthesize pulledDown=_pulledDown;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic) _Bool navItemHasBackButton; // @synthesize navItemHasBackButton=_navItemHasBackButton;
@property(retain, nonatomic) UIView *navItemTitle; // @synthesize navItemTitle=_navItemTitle;
@property(nonatomic) __weak UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(retain, nonatomic) UIView *filterBarPlaceholder; // @synthesize filterBarPlaceholder=_filterBarPlaceholder;
@property(retain, nonatomic) UIView *filterBarContainer; // @synthesize filterBarContainer=_filterBarContainer;
@property(retain, nonatomic) UIView *searchBarWrapper; // @synthesize searchBarWrapper=_searchBarWrapper;
@property(retain, nonatomic) UIColor *containerColor; // @synthesize containerColor=_containerColor;
@property(retain, nonatomic) UIBarButtonItem *navItemRight; // @synthesize navItemRight=_navItemRight;
@property(retain, nonatomic) UIBarButtonItem *navItemLeft; // @synthesize navItemLeft=_navItemLeft;
@property(retain, nonatomic) SPTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool disablePulldown; // @synthesize disablePulldown=_disablePulldown;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool disableContextMenu; // @synthesize disableContextMenu=_disableContextMenu;
@property(retain, nonatomic) SPTCollectionFilterContextMenuButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <SPTCollectionFilterBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)scrollViewDidScroll:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)dismissKeyboard:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)endSearching;
- (void)startSearching;
- (void)updateFilterBarFrames;
- (struct CGRect)searchBarFrame;
- (id)setupSearchBarWithFrame:(struct CGRect)arg1 contframe:(struct CGRect)arg2;
- (void)contextMenuButtonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 useDarkBackground:(_Bool)arg2;
- (void)unpromote:(CDUnknownBlockType)arg1;
- (void)promote:(CDUnknownBlockType)arg1;
- (id)promotable;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 targetViewController:(id)arg2;
- (id)initWithTableView:(id)arg1 targetViewController:(id)arg2 darkBackground:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

