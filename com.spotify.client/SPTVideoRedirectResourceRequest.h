//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoResourceRequest-Protocol.h"

@class AVAssetResourceLoadingRequest, NSString, NSURL;

@interface SPTVideoRedirectResourceRequest : NSObject <SPTVideoResourceRequest>
{
    NSURL *_url;
    AVAssetResourceLoadingRequest *_request;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)runCompletion;
- (void)redirectRequest;
- (_Bool)start;
- (id)initWithURL:(id)arg1 resourceLoadingRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

