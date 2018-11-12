//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, SPTWatchConnectivitySession, SPTWatchConnectivitySessionFile;

@protocol SPTWatchConnectivitySessionObserver <NSObject>

@optional
- (void)session:(SPTWatchConnectivitySession *)arg1 didReceiveFile:(SPTWatchConnectivitySessionFile *)arg2;
- (void)session:(SPTWatchConnectivitySession *)arg1 didReceiveUserInfo:(NSDictionary *)arg2;
- (void)session:(SPTWatchConnectivitySession *)arg1 didReceiveApplicationContext:(NSDictionary *)arg2;
- (void)session:(SPTWatchConnectivitySession *)arg1 didReceiveMessage:(NSDictionary *)arg2 replyHandler:(void (^)(NSDictionary *))arg3;
- (void)session:(SPTWatchConnectivitySession *)arg1 didReceiveMessage:(NSDictionary *)arg2;
- (void)sessionReachabilityDidChange:(SPTWatchConnectivitySession *)arg1;
- (void)sessionWatchStateDidChange:(SPTWatchConnectivitySession *)arg1;
- (void)sessionDidDeactivate:(SPTWatchConnectivitySession *)arg1;
- (void)sessionDidBecomeInactive:(SPTWatchConnectivitySession *)arg1;
- (void)session:(SPTWatchConnectivitySession *)arg1 activationDidCompleteWithState:(long long)arg2 error:(NSError *)arg3;
@end

