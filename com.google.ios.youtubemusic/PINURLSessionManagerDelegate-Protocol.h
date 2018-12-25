//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSURL, NSURLAuthenticationChallenge, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

@protocol PINURLSessionManagerDelegate <NSObject>
- (void)didReceiveData:(NSData *)arg1 forTask:(NSURLSessionTask *)arg2;

@optional
- (void)didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1 forTask:(NSURLSessionTask *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)didReceiveResponse:(NSURLResponse *)arg1 forTask:(NSURLSessionTask *)arg2;
- (void)didCollectMetrics:(NSURLSessionTaskMetrics *)arg1 forURL:(NSURL *)arg2;
@end
