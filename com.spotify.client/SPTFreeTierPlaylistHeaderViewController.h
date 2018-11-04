//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTEntityHeaderContentController.h"
#import "SPTFreeTierPlaylistHeader.h"

@class NSString, SPTFreeTierPlaylistHeaderView, UIScrollView, UIView;

@interface SPTFreeTierPlaylistHeaderViewController : UIViewController <SPTEntityHeaderContentController, SPTFreeTierPlaylistHeader>
{
    UIView *_filterSearchBar;
    SPTFreeTierPlaylistHeaderView *_headerView;
    UIScrollView *_parentScrollView;
    id <SPTFreeTierPlaylistHeaderConfigurator> _configurator;
}

@property(readonly, nonatomic) id <SPTFreeTierPlaylistHeaderConfigurator> configurator; // @synthesize configurator=_configurator;
@property(nonatomic) __weak UIScrollView *parentScrollView; // @synthesize parentScrollView=_parentScrollView;
@property(retain, nonatomic) SPTFreeTierPlaylistHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIView *filterSearchBar; // @synthesize filterSearchBar=_filterSearchBar;
- (void).cxx_destruct;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)entityHeaderViewController:(id)arg1 didAttachToScrollView:(id)arg2 inViewController:(id)arg3;
- (id)supplementaryViewForEntityHeaderViewController:(id)arg1;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (struct CGPoint)snapOffset;
- (void)tableViewContentOffsetChanged:(struct CGPoint)arg1;
- (void)update;
- (id)navigationTitleViewWrappedInContainer;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithConfigurator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
