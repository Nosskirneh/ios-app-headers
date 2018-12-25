//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class NSURLRequest;
@protocol NSURLProtocolClient;

@interface MLLocalAVAssetURLProtocolHandler : NSURLProtocol
{
    NSURLRequest *_request;
    id <NSURLProtocolClient> _client;
}

+ (_Bool)URLHasValidMasterPlaylistPath:(id)arg1;
+ (_Bool)URLHasValidHostAndScheme:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
- (void).cxx_destruct;
- (void)loadMasterPlaylistForVideoID:(id)arg1;
- (id)videoIDForURL:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

