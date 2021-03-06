//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FBKVOController, NSString, RHArtistsCollectionViewModel, RHPlayerController, RHRootViewController, UIButton, UICollectionView, UILabel, UIView;

@interface RHStartListeningViewController : RHViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    RHPlayerController *_playerController;
    RHArtistsCollectionViewModel *_viewModel;
    RHRootViewController *_rootViewController;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UICollectionView *_collectionView;
    UIButton *_closeButton;
    FBKVOController *_modelObserver;
}

@property(retain, nonatomic) FBKVOController *modelObserver; // @synthesize modelObserver=_modelObserver;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) RHRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) RHArtistsCollectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) RHPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (id)metricsSource;
- (id)metricsScreenEvent;
- (id)metricsScreenName;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)done:(id)arg1;
- (void)setupObservers;
- (void)addBlurredBackground;
- (void)setupSubviews;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

