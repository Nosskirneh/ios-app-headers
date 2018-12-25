//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTMTunederItemQueueDelegate-Protocol.h"
#import "YTMTunederPageStateControllerDelegate-Protocol.h"
#import "YTMTunederViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTResponseViewController-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSString, UIImage, YTICommand, YTIMusicTunederBreakPageStateRenderer, YTImageService, YTMInnerTubePixieDustDecorator, YTMTunederContinuationsController, YTMTunederInteractionController, YTMTunederItemController, YTMTunederItemQueue, YTMTunederPageStateController, YTMTunederView;
@protocol YTResponder;

@interface YTMTunederViewController : UIViewController <YTGraftingViewController, YTMTunederItemQueueDelegate, YTMTunederViewDelegate, YTMTunederPageStateControllerDelegate, YTSystemNotificationsObserver, YTResponseViewController, YTResponder>
{
    YTMTunederItemQueue *_tunederItemQueue;
    YTMTunederView *_tunederView;
    YTMTunederInteractionController *_interactionController;
    YTMTunederPageStateController *_pageStateController;
    YTImageService *_imageService;
    YTMTunederItemController *_currentItemController;
    YTMTunederItemController *_nextItemController;
    double _progressPercentage;
    YTMTunederContinuationsController *_continuationsController;
    _Bool _blockPlayback;
    double _numItemsRated;
    long long _numCardsBeforeShowingBreak;
    YTIMusicTunederBreakPageStateRenderer *_breakPageStateRenderer;
    YTMInnerTubePixieDustDecorator *_pixieDustDecorator;
    UIImage *_breakPageImage;
    YTICommand *_navEndpoint;
    _Bool _currentItemDidFetchAlbumImage;
    _Bool _currentItemDidStartPlayingAudio;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)prepareNextTunederItem;
- (void)maybeHideTunederViewActivityIndicator;
- (void)displayTunederItem:(id)arg1;
- (void)requestContinuation:(_Bool)arg1;
- (void)processSequenceBatchRenderer:(id)arg1;
- (_Bool)displayNextTunederItemOrBreakPage;
- (void)dismissTunederView;
- (void)incrementProgress;
- (void)processUserActionEndpoint:(id)arg1;
- (_Bool)processUserRatingWithEndpoint:(id)arg1;
- (void)startTunederFlow;
- (void)loadEducationPageThumbnails;
- (void)pageStateControllerBreakPageContinueTapped:(id)arg1;
- (void)pageStateControllerBreakPageExitTapped:(id)arg1;
- (void)pageStateControllerEducationPageDismissTapped:(id)arg1;
- (void)pageStateControllerEducationPageProceedTapped:(id)arg1;
- (void)tunederItemQueueBelowContinuationRequestThreshold:(id)arg1;
- (void)tunederItemQueue:(id)arg1 mediaTimeDidChange:(double)arg2 forCurrentItem:(id)arg3;
- (void)tunederItemQueue:(id)arg1 didStartPlayingCurrentTunederItemController:(id)arg2;
- (void)tunederItemQueue:(id)arg1 didFinishPlayingCurrentTunederItemController:(id)arg2;
- (void)tunederItemControllerPlaybackContainsError:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)tunederViewDidTapSubtitle:(id)arg1;
- (void)tunederViewDidResumeItem:(id)arg1;
- (void)tunederViewDidPauseItem:(id)arg1;
- (_Bool)tunederViewDidSkipItem:(id)arg1;
- (_Bool)tunederViewDidDislikeItem:(id)arg1;
- (_Bool)tunederViewDidLikeItem:(id)arg1;
- (void)tunederViewDidTapRetry:(id)arg1;
- (void)tunederViewDidTapDone:(id)arg1;
- (id)navEndpoint;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)loadWithModel:(id)arg1;
- (void)willMakeRequest:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end

