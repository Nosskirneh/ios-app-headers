//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKSimpleHTTPRequest, NSData, NSDictionary, NSError, NSMutableURLRequest, NSString, NSURL;

@protocol GCKSimpleHTTPRequestDelegate <NSObject>
- (void)httpRequest:(GCKSimpleHTTPRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)httpRequest:(GCKSimpleHTTPRequest *)arg1 didCompleteWithStatusCode:(long long)arg2 finalURL:(NSURL *)arg3 headers:(NSDictionary *)arg4 data:(NSData *)arg5 mimeType:(NSString *)arg6;

@optional
- (void)configureURLRequest:(NSMutableURLRequest *)arg1 forSimpleHTTPRequest:(GCKSimpleHTTPRequest *)arg2;
@end

