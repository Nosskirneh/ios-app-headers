//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKNHTTPRequestDelegate-Protocol.h"

@class GCKNHTTPRequest, NSString, NSURL;

@interface GCKGuestModeServerRequest : NSObject <GCKNHTTPRequestDelegate>
{
    NSURL *_url;
    GCKNHTTPRequest *_httpRequest;
}

- (void).cxx_destruct;
- (void)httpRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)httpRequest:(id)arg1 didCompleteWithStatusCode:(long long)arg2;
- (id)translateError:(id)arg1;
- (void)startPostRequestWithPostData:(id)arg1;
- (void)processPostError:(id)arg1;
- (void)processPostResponseData:(id)arg1 statusCode:(long long)arg2;
- (void)cancel;
- (void)start;
- (id)initWithURLPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

