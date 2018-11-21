//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSHTTPCookie, NSMutableData, NSString, SPTAuthAccountsRequest;

@interface SPTAuthAccountsPreFlightRequest : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    SPTAuthAccountsRequest *_request;
    CDUnknownBlockType _callback;
    NSHTTPCookie *_cookie;
    NSMutableData *_responseData;
}

@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSHTTPCookie *cookie; // @synthesize cookie=_cookie;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) SPTAuthAccountsRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)getErrorUrl:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)parseRedirectRequestAndCallback:(id)arg1;
- (void)performRequest;
- (id)initWithRequest:(id)arg1 withCookie:(id)arg2 withCallback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

