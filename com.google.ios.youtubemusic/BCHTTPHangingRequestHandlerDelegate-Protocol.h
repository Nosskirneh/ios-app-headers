//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BCHTTPHandler, NSData, NSError;

@protocol BCHTTPHangingRequestHandlerDelegate
- (void)onHTTPHangingRequest:(BCHTTPHandler *)arg1 error:(NSError *)arg2;
- (void)onHTTPHangingRequestComplete:(BCHTTPHandler *)arg1 statusCode:(long long)arg2;
- (void)onHTTPHangingRequest:(BCHTTPHandler *)arg1 receivedContent:(NSData *)arg2;
@end

