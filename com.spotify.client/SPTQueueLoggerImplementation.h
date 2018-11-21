//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQueueLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter;

@interface SPTQueueLoggerImplementation : NSObject <SPTQueueLogger>
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logInteractionRequestId:(id)arg1 featureId:(id)arg2 pageURI:(id)arg3 section:(id)arg4 targetURI:(id)arg5 type:(id)arg6 intent:(id)arg7;
- (id)featureId;
- (void)logViewDidScrollWithPlayerState:(id)arg1;
- (void)logShuffleButtonTappedEnableShuffle:(_Bool)arg1 playerState:(id)arg2;
- (void)logSkipToNextTappedWithPlayerState:(id)arg1;
- (void)logSkipToPreviousTappedWithPlayerState:(id)arg1;
- (void)logPlayButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logGoToPlayContextButtonTappedWithPlayerState:(id)arg1 contextURI:(id)arg2;
- (void)logSwipeToCloseWithPlayerState:(id)arg1;
- (void)logCloseButtonTappedWithPlayerState:(id)arg1;
- (void)logGoToNowPlayingViewButtonTappedWithPlayerState:(id)arg1;
- (id)intentForShufflingState:(_Bool)arg1;
- (id)intentForPlayButtonBehavior:(long long)arg1;
- (id)initWithLogCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

