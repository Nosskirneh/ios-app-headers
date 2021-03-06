//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, RHButton, RHKidsHomeViewModel, UICollectionView, UIView, _TtC7Napster12Dependencies;
@protocol _TtP7Napster17ImageProviderOBJC_;

@interface RHKidsTableHeaderViewController : RHViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    RHKidsHomeViewModel *_homeViewModel;
    RHButton *_favoritesButton;
    RHButton *_featuredButton;
    _TtC7Napster12Dependencies *_dependencies;
    UICollectionView *_categoriesView;
    UIView *_recentContentView;
    UIView *_contentButtonsView;
    UIView *_contentFilterView;
    UIView *_maskView;
    id <_TtP7Napster17ImageProviderOBJC_> _imageProvider;
}

@property(retain, nonatomic) id <_TtP7Napster17ImageProviderOBJC_> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak UIView *contentFilterView; // @synthesize contentFilterView=_contentFilterView;
@property(nonatomic) __weak UIView *contentButtonsView; // @synthesize contentButtonsView=_contentButtonsView;
@property(nonatomic) __weak UIView *recentContentView; // @synthesize recentContentView=_recentContentView;
@property(nonatomic) __weak UICollectionView *categoriesView; // @synthesize categoriesView=_categoriesView;
@property(readonly, nonatomic) _TtC7Napster12Dependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(nonatomic) __weak RHButton *featuredButton; // @synthesize featuredButton=_featuredButton;
@property(nonatomic) __weak RHButton *favoritesButton; // @synthesize favoritesButton=_favoritesButton;
@property(readonly, nonatomic) __weak RHKidsHomeViewModel *homeViewModel; // @synthesize homeViewModel=_homeViewModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setFeaturedContent:(id)arg1;
- (void)setFavoriteContent:(id)arg1;
- (double)headerHeight;
- (_Bool)shouldShowContentFilterView;
- (void)updateContentFilterView;
- (void)updateButtons;
- (void)setupButtons;
- (void)setupObservers;
- (void)viewDidLoad;
- (id)initWithHomeViewModel:(id)arg1 dependencies:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

