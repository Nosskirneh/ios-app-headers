//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FollowModelObserver-Protocol.h"

@class MultipleFollowModel, NSIndexPath, NSMutableArray, NSString, SPTFollowShelfLogger;
@protocol GLUETheme, SPTFollowModelFactory, SPTFollowShelfViewModelDelegate, SPTLinkDispatcher, SPTPageRegistry;

@interface SPTFollowShelfViewModel : NSObject <FollowModelObserver>
{
    id <SPTFollowShelfViewModelDelegate> _delegate;
    id <GLUETheme> _theme;
    SPTFollowShelfLogger *_logger;
    id <SPTPageRegistry> _pageRegistry;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTFollowModelFactory> _followModelFactory;
    NSMutableArray *_items;
    NSIndexPath *_previewingIndexPath;
    MultipleFollowModel *_multipleFollowModel;
}

@property(retain, nonatomic) MultipleFollowModel *multipleFollowModel; // @synthesize multipleFollowModel=_multipleFollowModel;
@property(retain, nonatomic) NSIndexPath *previewingIndexPath; // @synthesize previewingIndexPath=_previewingIndexPath;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) __weak id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(readonly, nonatomic) SPTFollowShelfLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTFollowShelfViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)removeItemFromCollectionView:(id)arg1 atIndexPath:(id)arg2 delegate:(id)arg3;
- (void)popToViewController:(id)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)navigateToPageForItemAtIndexPath:(id)arg1;
- (void)toggleFollowStateForItemAtIndexPath:(id)arg1;
- (_Bool)isFollowingItemAtIndexPath:(id)arg1;
- (id)shelfItemForIndexPath:(id)arg1;
- (long long)numberOfShelfItems;
- (void)loadFollowModel;
- (void)loadContent;
- (id)initWithTheme:(id)arg1 pageRegistry:(id)arg2 linkDispatcher:(id)arg3 followModelFactory:(id)arg4 items:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

