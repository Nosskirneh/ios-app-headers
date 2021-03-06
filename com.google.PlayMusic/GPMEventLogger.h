//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPMPlayLogEventLogger, GPMTagManagerEventLogger;
@protocol SSOAuthorization;

@interface GPMEventLogger : NSObject
{
    GPMPlayLogEventLogger *_playLogEventLogger;
    GPMTagManagerEventLogger *_tagManagerEventLogger;
}

- (void).cxx_destruct;
- (void)tryUploadingLogEventsForced:(_Bool)arg1;
- (void)logDebugEvent:(id)arg1;
- (void)logGcmEvent:(id)arg1;
- (void)logSyncEvent:(id)arg1;
- (void)logInnerjamRequestTriggerEvent:(id)arg1;
- (void)logInnerJamEvent:(id)arg1;
- (void)logPinningEvent:(id)arg1;
- (void)logDatabaseResetEvent:(id)arg1;
- (void)logDownloadEvent:(id)arg1;
- (void)logCastSenderEvent:(id)arg1;
- (void)logAdEvent:(id)arg1;
- (void)logClickEvent:(id)arg1;
- (void)logImpressionListEvent:(id)arg1;
- (void)logAppStart:(id)arg1;
- (void)logNewUserQuizComplete;
- (void)logWelcomeScreenDisplay;
- (void)logWelcomeScreenListenNowPress;
- (void)logSearchEvent:(id)arg1;
- (void)logSkipEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)logRatingEvent:(id)arg1;
- (void)logCompletedPlaybackEvent:(id)arg1;
- (void)logPlaybackErrorEvent:(id)arg1;
- (void)logPlaybackEvent:(id)arg1;
- (void)logCancellationEvent:(id)arg1;
- (void)invalidate;
@property(readonly, nonatomic) id <SSOAuthorization> auth;
- (id)initWithServiceConfiguration:(id)arg1 auth:(id)arg2;

@end

