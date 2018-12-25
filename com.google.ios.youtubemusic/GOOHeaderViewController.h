//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOOFlexibleHeaderParentViewController-Protocol.h"
#import "GOOFlexibleHeaderViewLayoutDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "YTTopScrolling-Protocol.h"

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, GOONavigationBar, MDCHeaderStackView, NSArray, NSString, UIBarButtonItem, UIColor, UIView;
@protocol GOOFlexibleHeader><GOOFlexibleHeaderConfiguration, GOOHeaderViewControllerDelegate;

@interface GOOHeaderViewController : UIViewController <YTTopScrolling, GOOFlexibleHeaderParentViewController, GOOFlexibleHeaderViewLayoutDelegate, UIScrollViewDelegate>
{
    UIBarButtonItem *_originalBackButtonItem;
    _Bool _contentViewControllerReceivesFlexibleHeaderEvents;
    _Bool _showsBackButton;
    _Bool _headerViewInFrontOfContent;
    _Bool _showsOnlyContentViews;
    GOOFlexibleHeaderViewController *headerViewController;
    UIViewController *_contentViewController;
    id <GOOHeaderViewControllerDelegate> _delegate;
    GOOHeaderNavigationView *_headerNavigationView;
    UIColor *_tintColor;
    long long _statusBarStyle;
    NSArray *_contentViews;
    NSArray *_touchForwardingViews;
    UIView *_floatingActionButton;
    double _floatingActionButtonMargin;
}

@property(nonatomic) double floatingActionButtonMargin; // @synthesize floatingActionButtonMargin=_floatingActionButtonMargin;
@property(retain, nonatomic) UIView *floatingActionButton; // @synthesize floatingActionButton=_floatingActionButton;
@property(copy, nonatomic) NSArray *touchForwardingViews; // @synthesize touchForwardingViews=_touchForwardingViews;
@property(nonatomic) _Bool showsOnlyContentViews; // @synthesize showsOnlyContentViews=_showsOnlyContentViews;
@property(copy, nonatomic) NSArray *contentViews; // @synthesize contentViews=_contentViews;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool headerViewInFrontOfContent; // @synthesize headerViewInFrontOfContent=_headerViewInFrontOfContent;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView=_headerNavigationView;
@property(nonatomic) __weak id <GOOHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsBackButton; // @synthesize showsBackButton=_showsBackButton;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomBar;
@property(readonly, nonatomic) GOONavigationBar *navigationBar;
@property(readonly, nonatomic) MDCHeaderStackView *barStackView;
@property(readonly, nonatomic) UIView<GOOFlexibleHeader><GOOFlexibleHeaderConfiguration> *headerView;
- (void)updateBackButton;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (id)titleColor;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)flexibleHeaderViewController:(id)arg1 flexibleHeaderViewFrameDidChange:(id)arg2;
- (void)stopForwardingContentKVONotifications;
- (void)startForwardingContentKVONotifications;
- (id)forwardingKeyPaths;
- (void)didTapBackButton:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateAccessibility;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutFloatingActionButton;
- (id)accessibilityElements;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithContentViewController:(id)arg1;
- (void)dealloc;
- (void)scrollToTopAndPullToRefresh;
- (void)scrollToTop;
- (void)ytm_addHeaderViewIntoNewParentScrollView:(id)arg1 newParentViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

