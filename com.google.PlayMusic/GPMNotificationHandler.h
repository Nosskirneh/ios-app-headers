//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPMInnerJamFetcher, GPMServiceConfiguration, SyncManager;

@interface GPMNotificationHandler : NSObject
{
    GPMServiceConfiguration *_serviceConfiguration;
    SyncManager *_syncManager;
    GPMInnerJamFetcher *_innerJamFetcher;
}

- (void).cxx_destruct;
- (void)scheduleLocalNotification:(id)arg1 isTimeSensitive:(_Bool)arg2;
- (void)handleFeedUpdateNotification:(id)arg1 fetchCompletionHandler:(CDUnknownBlockType)arg2;
- (void)handleDismissalNotificationForID:(id)arg1 fetchCompletionHandler:(CDUnknownBlockType)arg2;
- (void)handleLightTickleNotification:(id)arg1 fetchCompletionHandler:(CDUnknownBlockType)arg2;
- (void)sendDismissalForNotificationID:(id)arg1;
- (void)didNotHandleNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)localNotificationTapped:(id)arg1;
- (void)didReceiveRemoteNotification:(id)arg1 fetchCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithServiceConfiguration:(id)arg1 syncManager:(id)arg2 innerJamFetcher:(id)arg3;
- (id)init;

@end

