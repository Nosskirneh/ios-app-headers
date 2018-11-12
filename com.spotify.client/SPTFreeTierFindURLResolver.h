//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTHubRemoteContentURLResolver-Protocol.h"

@class NSString, SPTFreeTierFindEndpointFactory, SPTFreeTierFindTestManager;

@interface SPTFreeTierFindURLResolver : NSObject <SPTHubRemoteContentURLResolver>
{
    SPTFreeTierFindEndpointFactory *_endpointFactory;
    SPTFreeTierFindTestManager *_testManager;
}

@property(readonly, nonatomic) SPTFreeTierFindTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTFreeTierFindEndpointFactory *endpointFactory; // @synthesize endpointFactory=_endpointFactory;
- (void).cxx_destruct;
- (id)remoteHubContentURLForEndpointPath:(id)arg1 forExternalData:(_Bool)arg2;
- (id)remoteHubContentURLForViewURI:(id)arg1;
- (id)initWithEndpointFactory:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

