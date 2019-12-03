//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, NSURL, SPTDataLoader;

@interface SPTModerationWebViewAuthoriser : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    NSURL *_authoriserURL;
}

@property(readonly, nonatomic) NSURL *authoriserURL; // @synthesize authoriserURL=_authoriserURL;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)authorise;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)authoriserError;
- (id)requestWithCompletion:(id)arg1;
- (id)completionWithRequest:(id)arg1;
- (id)initWithAuthoriserURL:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
