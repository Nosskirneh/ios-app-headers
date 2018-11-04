//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSString, NSURL, SPTDataLoader, SPTExternalIntegrationSpacesContentURLResolver, SPTPersistentCache;

@interface SPTExternalIntegrationSpacesContentRequest : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    SPTPersistentCache *_cache;
    SPTExternalIntegrationSpacesContentURLResolver *_URLResolver;
    NSURL *_URI;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) SPTExternalIntegrationSpacesContentURLResolver *URLResolver; // @synthesize URLResolver=_URLResolver;
@property(readonly, nonatomic) SPTPersistentCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)cacheKey;
- (void)handleErrorResponse:(id)arg1;
- (void)handleSuccessfulResponse:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDataLoader:(id)arg1 contentURLResolver:(id)arg2 persistentCache:(id)arg3 URI:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
