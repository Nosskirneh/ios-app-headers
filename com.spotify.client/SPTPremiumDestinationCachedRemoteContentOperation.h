//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSError, NSString, SPTDataLoader, SPTNetworkConnectivityController, SPTPersistentCache;
@protocol EXP_HUBContentOperationDelegate, EXP_HUBViewModelBuilder, EXP_SPTHubRemoteContentOperationURLResolver;

@interface SPTPremiumDestinationCachedRemoteContentOperation : NSObject <SPTDataLoaderDelegate, SPTNetworkConnectivityControllerObserver, EXP_HUBContentOperation>
{
    _Bool _observing;
    id <EXP_HUBContentOperationDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    SPTNetworkConnectivityController *_networkConnectivityController;
    SPTPersistentCache *_persistentCache;
    id <EXP_SPTHubRemoteContentOperationURLResolver> _contentURLResolver;
    NSString *_sourceIdentifier;
    id <EXP_HUBViewModelBuilder> _viewModelBuilder;
    NSError *_previousError;
    NSString *_contentCacheKey;
}

@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(copy, nonatomic) NSString *contentCacheKey; // @synthesize contentCacheKey=_contentCacheKey;
@property(retain, nonatomic) NSError *previousError; // @synthesize previousError=_previousError;
@property(retain, nonatomic) id <EXP_HUBViewModelBuilder> viewModelBuilder; // @synthesize viewModelBuilder=_viewModelBuilder;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) id <EXP_SPTHubRemoteContentOperationURLResolver> contentURLResolver; // @synthesize contentURLResolver=_contentURLResolver;
@property(readonly, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishAfterPerformingOperation:(_Bool)arg1;
- (void)processResponseBody:(id)arg1 willSucceed:(CDUnknownBlockType)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithDataLoaderFactory:(id)arg1 networkConnectivityController:(id)arg2 persistentCache:(id)arg3 contentURLResolver:(id)arg4 sourceIdentifier:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

