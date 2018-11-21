//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingLegacyFeedbackHandler-Protocol.h"

@class NSString, SPTNowPlayingLegacyFeedbackContextMenuPresenter, UIViewController;
@protocol SPTContextMenuPresenterFactory, SPTFeedbackViewModel, SPTNowPlayingRemoteControlPolicy;

@interface SPTNowPlayingLegacyFormatListFeedbackHandlerImplementation : NSObject <SPTNowPlayingLegacyFeedbackHandler>
{
    UIViewController *_containingViewController;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTFeedbackViewModel> _feedbackViewModel;
    SPTNowPlayingLegacyFeedbackContextMenuPresenter *_presenter;
}

@property(retain, nonatomic) SPTNowPlayingLegacyFeedbackContextMenuPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) id <SPTFeedbackViewModel> feedbackViewModel; // @synthesize feedbackViewModel=_feedbackViewModel;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(nonatomic) __weak UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
- (void).cxx_destruct;
- (id)banActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)currentTrackHasPositiveFeedback;
- (_Bool)currentTrackHasNegativeFeedback;
- (void)handlePositiveFeedbackAction:(id)arg1;
- (void)handleNegativeFeedbackActionForArtist:(id)arg1 trackName:(id)arg2 albumImageURL:(id)arg3 actionControl:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithRemoteControlPolicy:(id)arg1 contextMenuPresenterFactory:(id)arg2 feedbackViewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

