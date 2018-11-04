//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseInfoAreaViewController.h"

#import "SPTNowPlayingModelObserver.h"

@class NSString, SPTNowPlayingAdInfoAreaView;

@interface SPTNowPlayingAdInfoAreaViewController : SPTNowPlayingBaseInfoAreaViewController <SPTNowPlayingModelObserver>
{
    id <SPTAdsManager> _adsManager;
}

@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)configureForOrientation:(long long)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)updateButton;
- (void)didTapActionButton;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 linkDispatcher:(id)arg3 adsManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingAdInfoAreaView *view; // @dynamic view;

@end
