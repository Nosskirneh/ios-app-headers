//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol SPTCosmosDictionaryDataLoaderRequestToken;

@protocol SPTCosmosDictionaryDataLoader <NSObject>
- (id <SPTCosmosDictionaryDataLoaderRequestToken>)makeCancelableRequestWithURL:(NSURL *)arg1 requestAction:(NSString *)arg2 requestData:(NSDictionary *)arg3 replyOnMainThread:(_Bool)arg4 completion:(void (^)(NSDictionary *))arg5 onError:(void (^)(NSError *))arg6;
- (void)makeRequestWithURL:(NSURL *)arg1 requestAction:(NSString *)arg2 requestData:(NSDictionary *)arg3 replyOnMainThread:(_Bool)arg4 completion:(void (^)(NSDictionary *))arg5 onError:(void (^)(NSError *))arg6;
@end

