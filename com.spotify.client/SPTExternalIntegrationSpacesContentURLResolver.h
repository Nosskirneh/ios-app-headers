//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTHubRemoteContentURLResolver-Protocol.h"

@class NSString;
@protocol SPTProductState;

@interface SPTExternalIntegrationSpacesContentURLResolver : NSObject <SPTHubRemoteContentURLResolver>
{
    id <SPTProductState> _productState;
}

@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (id)signalsFromViewURIQueryParameters:(id)arg1;
- (id)remoteHubContentURLForEndpointPath:(id)arg1 queryParameters:(id)arg2 forExternalData:(_Bool)arg3 includeDynamicComponents:(_Bool)arg4;
- (id)remoteHubContentURLWithoutDynamicComponentsForViewURI:(id)arg1;
- (id)remoteHubContentURLForEndpointPath:(id)arg1 queryParameters:(id)arg2 forExternalData:(_Bool)arg3;
- (id)remoteHubContentURLForEndpointPath:(id)arg1 forExternalData:(_Bool)arg2;
- (id)remoteHubContentURLForViewURI:(id)arg1;
- (id)initWithProductState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

