//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingContainedViewController.h"

@class NSObject, NSString, SPTDrivingNowPlayingHeadUnitView, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTDrivingNowPlayingHeadUnitViewController : UIViewController <SPTNowPlayingContainedViewController>
{
    NSObject *_model;
}

@property(readonly, nonatomic) NSObject *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)shuffleBanButtonPressed:(id)arg1;
- (void)heartButtonPressed:(id)arg1;
- (void)skipForwardButtonPressed:(id)arg1;
- (void)playPauseButtonPressed:(id)arg1;
- (void)skipBackButtonPressed:(id)arg1;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)updateButtons;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithHeadUnitModel:(id)arg1;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTDrivingNowPlayingHeadUnitView *view; // @dynamic view;

@end
