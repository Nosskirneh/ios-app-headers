//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLanguageOnboardingGridViewModelDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, NSURL, SPTLanguageOnboardingContainerView, SPTLanguageOnboardingGridViewModel, SPTLanguageOnboardingTheme, SPTPopupManager;
@protocol GLUEImageLoader, SPTLanguageOnboardingGridViewControllerDelegate, SPTPageContainer;

@interface SPTLanguageOnboardingGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SPTLanguageOnboardingGridViewModelDelegate, SPTPageController>
{
    SPTPopupManager *_popupManager;
    SPTLanguageOnboardingGridViewModel *_viewModel;
    SPTLanguageOnboardingTheme *_theme;
    id <GLUEImageLoader> _imageLoader;
    id <SPTLanguageOnboardingGridViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTLanguageOnboardingGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTLanguageOnboardingTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLanguageOnboardingGridViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
- (void).cxx_destruct;
- (void)handleFinish;
- (void)handleSkip;
- (void)fetchLanguages;
- (void)updateSelectedLanguages;
- (void)presentErrorDialogWithRetryHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2;
- (void)setContainerViewState:(long long)arg1;
- (void)viewModel:(id)arg1 didReachRequiredSelectedNumberOfLanguages:(_Bool)arg2;
- (void)viewModelDidUpdateSelectedLanguages:(id)arg1;
- (void)viewModelDidFetchLanguages:(id)arg1;
- (void)viewModel:(id)arg1 isOffline:(_Bool)arg2;
- (void)viewModel:(id)arg1 didDeselectLanguageAtIndex:(unsigned long long)arg2;
- (void)viewModel:(id)arg1 didSelectLanguageAtIndex:(unsigned long long)arg2;
- (void)viewModel:(id)arg1 didStartLoading:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailToUpdateSelectedLanguages:(id)arg2;
- (void)viewModel:(id)arg1 didFailFetchingLanguages:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)nextButtonTapped:(id)arg1;
- (void)setUpCollectionView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 imageLoader:(id)arg3 popupManager:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLanguageOnboardingContainerView *view; // @dynamic view;

@end

