//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTFreeTierTasteOnboardingUpdateTasteViewModelDelegate.h"
#import "SPTPageController.h"

@class NSString, NSURL, SPTFreeTierTasteOnboardingUpdateTasteView, SPTFreeTierTasteOnboardingUpdateTasteViewModel;

@interface SPTFreeTierTasteOnboardingUpdateTasteViewController : UIViewController <SPTFreeTierTasteOnboardingUpdateTasteViewModelDelegate, SPTPageController>
{
    id <SPTFreeTierTasteOnboardingUpdateTasteViewControllerDelegate> _delegate;
    SPTFreeTierTasteOnboardingUpdateTasteViewModel *_viewModel;
}

@property(readonly, nonatomic) SPTFreeTierTasteOnboardingUpdateTasteViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingUpdateTasteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)updateTasteViewModelDidComplete:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingUpdateTasteView *view; // @dynamic view;

@end

