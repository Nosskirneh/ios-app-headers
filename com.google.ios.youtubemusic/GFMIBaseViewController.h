//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "GOOHeaderNavigationParentViewController-Protocol.h"
#import "GOONavigationCustomization-Protocol.h"

@class GFMIActivityIndicator, GIMMe, GOOFlexibleHeaderViewController, GOOHeaderNavigationView, GOONavigationStyle, NSSet, NSString, UIScrollView, UIView;

@interface GFMIBaseViewController : QTMCollectionViewController <GOONavigationCustomization, GOOHeaderNavigationParentViewController>
{
    _Bool _refreshing;
    _Bool _isLoading;
    _Bool _queuedForViewRefresh;
    GOOFlexibleHeaderViewController *_headerViewController;
    GOOHeaderNavigationView *_headerNavigationView;
    GIMMe *_gimme;
    GFMIActivityIndicator *_activityIndicator;
}

@property(nonatomic) _Bool queuedForViewRefresh; // @synthesize queuedForViewRefresh=_queuedForViewRefresh;
@property(retain, nonatomic) GFMIActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView=_headerNavigationView;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (void).cxx_destruct;
- (void)gfmiBaseViewController_refreshView;
- (_Bool)isModal;
- (void)backButtonTapped;
- (void)showPanel:(id)arg1;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)viewRefreshDidFinish;
- (id)executeViewRefresh;
- (void)viewRefreshWillBegin;
- (void)setNeedsViewRefresh;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)userTappedBackButton;
- (void)makeHeaderTransparent;
- (void)bringHeaderViewToFront;
- (_Bool)headerVisible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end

