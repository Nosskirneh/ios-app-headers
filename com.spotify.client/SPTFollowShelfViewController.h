//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTFollowShelfDataSourceDelegate.h"
#import "SPTFollowShelfViewModelDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class NSIndexPath, NSString, SPTFollowShelfDataSource, SPTFollowShelfManagedView, SPTFollowShelfViewDelegate, SPTFollowShelfViewModel;

@interface SPTFollowShelfViewController : UIViewController <UIViewControllerPreviewingDelegate, SPTFollowShelfViewModelDelegate, SPTFollowShelfDataSourceDelegate>
{
    id <SPTFollowShelfFactoryDelegate> _delegate;
    SPTFollowShelfManagedView *_managedShelfView;
    SPTFollowShelfViewModel *_viewModel;
    SPTFollowShelfDataSource *_dataSource;
    SPTFollowShelfViewDelegate *_viewSource;
    id <UIViewControllerPreviewing> _previewingContext;
    id <SPTFollowShelfItem> _previewItem;
    NSIndexPath *_previewIndexPath;
}

@property(retain, nonatomic) NSIndexPath *previewIndexPath; // @synthesize previewIndexPath=_previewIndexPath;
@property(retain, nonatomic) id <SPTFollowShelfItem> previewItem; // @synthesize previewItem=_previewItem;
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain, nonatomic) SPTFollowShelfViewDelegate *viewSource; // @synthesize viewSource=_viewSource;
@property(retain, nonatomic) SPTFollowShelfDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SPTFollowShelfViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTFollowShelfManagedView *managedShelfView; // @synthesize managedShelfView=_managedShelfView;
@property(nonatomic) __weak id <SPTFollowShelfFactoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followDataDidChange;
- (void)toggleFollowForShelfCardCell:(id)arg1;
- (void)removeFollowShelfCardCell:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)isForceTouchAvailable;
- (void)viewDidLoad;
- (void)setupManagedShelfView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

