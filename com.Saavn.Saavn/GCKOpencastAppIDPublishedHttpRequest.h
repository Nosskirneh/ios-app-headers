//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKOpencastHttpRequest.h"

#import "GCKSimpleHTTPRequestDelegate-Protocol.h"

@class NSString;

@interface GCKOpencastAppIDPublishedHttpRequest : GCKOpencastHttpRequest <GCKSimpleHTTPRequestDelegate>
{
    NSString *_appID;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failedHandler;
}

- (void).cxx_destruct;
- (void)httpRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)httpRequest:(id)arg1 didCompleteWithStatusCode:(long long)arg2 finalURL:(id)arg3 headers:(id)arg4 data:(id)arg5 mimeType:(id)arg6;
- (void)startRequestWthAppID:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failedHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

