//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTHubExternalDataLoaderDelegate-Protocol.h"

@class NSCache, NSString, NSURL;
@protocol SPTHubExternalDataLoader;

@interface SPTExternalIntegrationHubOneContentRequest : NSObject <SPTHubExternalDataLoaderDelegate>
{
    _Bool _isRoot;
    id <SPTHubExternalDataLoader> _externalDataLoader;
    NSCache *_cache;
    CDUnknownBlockType _completionHandler;
    NSURL *_URI;
}

@property(nonatomic) _Bool isRoot; // @synthesize isRoot=_isRoot;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) id <SPTHubExternalDataLoader> externalDataLoader; // @synthesize externalDataLoader=_externalDataLoader;
- (void).cxx_destruct;
- (void)hubExternalDataLoader:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)hubExternalDataLoader:(id)arg1 didLoadContentSet:(id)arg2;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithHubExternalDataLoader:(id)arg1 cache:(id)arg2 URI:(id)arg3 isRoot:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

