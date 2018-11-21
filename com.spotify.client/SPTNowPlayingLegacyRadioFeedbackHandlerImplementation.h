//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingLegacyFeedbackHandler-Protocol.h"

@class NSString, SPTProgressView, UIViewController;
@protocol SPTNowPlayingRemoteControlPolicy;

@interface SPTNowPlayingLegacyRadioFeedbackHandlerImplementation : NSObject <SPTNowPlayingLegacyFeedbackHandler>
{
    UIViewController *_containingViewController;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(nonatomic) __weak UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
- (void).cxx_destruct;
- (void)hideImprovingStationProgressViewWithError:(id)arg1;
- (void)showImprovingStationProgressView;
- (void)radioFeedbackButtonTouchedUpInsideWithPositiveFeedback:(_Bool)arg1 andCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)currentTrackHasPositiveFeedback;
- (_Bool)currentTrackHasNegativeFeedback;
- (void)handleNegativeFeedbackActionForArtist:(id)arg1 trackName:(id)arg2 albumImageURL:(id)arg3 actionControl:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handlePositiveFeedbackAction:(id)arg1;
- (id)initWithRemoteControlPolicy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

