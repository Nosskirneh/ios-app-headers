//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTHubRemoteContentProvider-Protocol.h"

@class NSString, SPTDataLoader, SPTRequestLifetime;
@protocol SPTDataLoaderCancellationToken, SPTHubRemoteContentProviderDelegate, SPTHubRemoteContentURLResolver, SPTResolver;

@interface SPTHubDefaultRemoteContentProvider : NSObject <SPTDataLoaderDelegate, SPTHubRemoteContentProvider>
{
    id <SPTHubRemoteContentProviderDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    id <SPTHubRemoteContentURLResolver> _URLResolver;
    id <SPTResolver> _resolver;
    id <SPTDataLoaderCancellationToken> _currentRequestCancellationToken;
    SPTRequestLifetime *_requestLifetime;
}

@property(retain, nonatomic) SPTRequestLifetime *requestLifetime; // @synthesize requestLifetime=_requestLifetime;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> currentRequestCancellationToken; // @synthesize currentRequestCancellationToken=_currentRequestCancellationToken;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) id <SPTHubRemoteContentURLResolver> URLResolver; // @synthesize URLResolver=_URLResolver;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTHubRemoteContentProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)postJSONObject:(id)arg1 viewURI:(id)arg2 error:(id)arg3;
- (void)loadContentFromCosmosURL:(id)arg1 forViewURI:(id)arg2;
- (void)loadContentFromHTTPURL:(id)arg1 forViewURI:(id)arg2;
- (void)loadContentFromURL:(id)arg1 forViewURI:(id)arg2;
- (void)cancelCurrentRequest:(_Bool)arg1;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)cancelAllHubRemoteContentOperationsForReload:(_Bool)arg1;
- (void)loadHubRemoteContentFromEndpointPath:(id)arg1 forExternalData:(_Bool)arg2;
- (void)loadHubRemoteContentForViewURI:(id)arg1;
- (id)initWithDataLoader:(id)arg1 URLResolver:(id)arg2 resolver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

