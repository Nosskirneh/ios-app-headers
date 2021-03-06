//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FIRAnalytics : NSObject
{
}

+ (void)maybeEnableTagManager;
+ (void)notifyEventListenersOnSerialQueue:(id)arg1;
+ (void)notifyEventListeners:(id)arg1;
+ (void)removeLogEventListener:(id)arg1;
+ (id)addLogEventListener:(CDUnknownBlockType)arg1;
+ (void)setLogEventInterceptor:(CDUnknownBlockType)arg1;
+ (void)userPropertiesIncludingInternal:(_Bool)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)removeInternalUserAttributeForName:(id)arg1;
+ (void)setInternalUserProperty:(id)arg1 forName:(id)arg2;
+ (void)setUserAttributeNumber:(id)arg1 forName:(id)arg2;
+ (void)removeUserAttributeForName:(id)arg1;
+ (void)setUserID:(id)arg1;
+ (void)setUserPropertyString:(id)arg1 forName:(id)arg2;
+ (void)setOpenURLListener:(CDUnknownBlockType)arg1;
+ (void)handleUserActivity:(id)arg1;
+ (void)handleOpenURL:(id)arg1;
+ (void)createAppDelegateProxy;
+ (id)eventsToLogWithEventID:(long long)arg1 origin:(id)arg2 isPublic:(_Bool)arg3 name:(id)arg4 timestamp:(double)arg5 parameters:(id)arg6;
+ (void)logEventOnSerialQueueWithOrigin:(id)arg1 isPublicEvent:(_Bool)arg2 name:(id)arg3 parameters:(id)arg4 timestamp:(double)arg5 ignoreEnabled:(_Bool)arg6 ignoreInterceptor:(_Bool)arg7 addedScreenParameters:(id)arg8;
+ (void)logEventWithOrigin:(id)arg1 isPublicEvent:(_Bool)arg2 name:(id)arg3 parameters:(id)arg4 timestamp:(double)arg5 ignoreEnabled:(_Bool)arg6 ignoreInterceptor:(_Bool)arg7;
+ (void)logEventWithOrigin:(id)arg1 isPublicEvent:(_Bool)arg2 name:(id)arg3 parameters:(id)arg4;
+ (void)logInternalEventWithOrigin:(id)arg1 name:(id)arg2 parameters:(id)arg3;
+ (void)logEventWithOrigin:(id)arg1 name:(id)arg2 parameters:(id)arg3;
+ (void)logEventWithName:(id)arg1 parameters:(id)arg2;
+ (void)logEventsOnWorkerQueue:(id)arg1 notifyEventListeners:(_Bool)arg2;
+ (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)handleSetSessionTimeoutInterval:(id)arg1;
+ (void)handleSetMinimumSessionInterval:(id)arg1;
+ (void)handleSetEnabled:(id)arg1;
+ (void)observeNotificationsForAnalyticsConfiguration:(id)arg1;
+ (double)loadTimestamp;
+ (id)appInstanceID;
+ (void)setScreenName:(id)arg1 screenClass:(id)arg2;
+ (void)setAnalyticsEnabled:(_Bool)arg1;
+ (_Bool)isCurrentQueueSerialQueue;
+ (void)unsuspendOperationQueue;
+ (void)queueOperationWithBlock:(CDUnknownBlockType)arg1;
+ (void)dispatchAsyncOnSerialQueue:(CDUnknownBlockType)arg1;
+ (void)startWithConfiguration:(id)arg1 options:(id)arg2;
+ (id)sharedInstance;
+ (void)initialize;
+ (void)load;
- (void)logInternalEventWithOrigin:(id)arg1 name:(id)arg2 parameters:(id)arg3;
- (void)maxUserPropertiesForOrigin:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setInternalUserProperty:(id)arg1 forName:(id)arg2 withOrigin:(id)arg3;

@end

