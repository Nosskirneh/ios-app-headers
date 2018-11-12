//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingAuxiliaryActionsHandlerObserver-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingContainerIdleMonitorObserver-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"
#import "SPTNowPlayingPlaybackActionsHandlerObserver-Protocol.h"

@class NSString, SPTNowPlayingHeadUnitViewV2, SPTNowPlayingModel, SPTNowPlayingPlaybackActionsHandler, SPTTheme;
@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainingViewController, SPTNowPlayingTestManager;

@interface SPTNowPlayingDefaultHeadUnitViewController : UIViewController <SPTNowPlayingModelObserver, SPTNowPlayingPlaybackActionsHandlerObserver, SPTNowPlayingAuxiliaryActionsHandlerObserver, SPTNowPlayingContainerIdleMonitorObserver, SPTNowPlayingContainedViewController>
{
    SPTNowPlayingModel *_model;
    SPTNowPlayingPlaybackActionsHandler *_playbackActionsHandler;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    id <SPTNowPlayingTestManager> _testManager;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingPlaybackActionsHandler *playbackActionsHandler; // @synthesize playbackActionsHandler=_playbackActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;
- (void)auxiliaryActionsHandlerDidToggleCollectionState:(id)arg1;
- (void)playbackActionsHandlerDidToggleShuffle:(id)arg1;
- (void)playbackActionsHandlerDidPlayPause:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)updateUI;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)updateHeartButton;
- (void)updateSkipButtons;
- (void)updateShuffleButton;
- (void)updatePlayPauseButton;
- (void)toggleCollectionState:(id)arg1;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithModel:(id)arg1 playbackActionsHandler:(id)arg2 auxiliaryActionsHandler:(id)arg3 testManager:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingHeadUnitViewV2 *view; // @dynamic view;

@end

