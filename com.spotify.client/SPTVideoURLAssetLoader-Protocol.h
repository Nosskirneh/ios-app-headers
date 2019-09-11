//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, SPTNetworkConnectivityController, SPTRequestAccounting;

@protocol SPTVideoURLAssetLoader <NSObject>
- (_Bool)hasLocalAssetForURL:(NSURL *)arg1;
- (void)cancelLoadAssetWithURL:(NSURL *)arg1;
- (void)loadAssetWithURL:(NSURL *)arg1 onlyOnWifi:(_Bool)arg2 completion:(void (^)(AVAsset *, NSError *))arg3;
- (id)initWithNetworkConnectivityController:(SPTNetworkConnectivityController *)arg1 requestAccountant:(SPTRequestAccounting *)arg2 serviceIdentifier:(NSString *)arg3;
- (id)initWithNetworkConnectivityController:(SPTNetworkConnectivityController *)arg1 requestAccountant:(SPTRequestAccounting *)arg2 serviceIdentifier:(NSString *)arg3 HTTPMaximumConnectionsPerHost:(long long)arg4 timeoutIntervalForRequest:(double)arg5 timeoutIntervalForResource:(double)arg6;
@end

