//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol YTTopicObserver;

@protocol YTTopicController <NSObject>
- (void)unsubscribeFromAllTopicsWithGcm:(_Bool)arg1 observer:(id <YTTopicObserver>)arg2;
- (void)unsubscribeFromTopicWithName:(NSString *)arg1 unsubscribeWithGcm:(_Bool)arg2 observer:(id <YTTopicObserver>)arg3;
- (void)subscribeToTopicWithName:(NSString *)arg1 subscribeWithGcm:(_Bool)arg2 observer:(id <YTTopicObserver>)arg3;
- (void)subscribeToTopicWithName:(NSString *)arg1 subscribeWithGcm:(_Bool)arg2 observer:(id <YTTopicObserver>)arg3 successBlock:(void (^)(_Bool))arg4 errorBlock:(void (^)(NSError *))arg5;
@end

