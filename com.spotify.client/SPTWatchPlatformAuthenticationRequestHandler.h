//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivityRequestHandler-Protocol.h"

@class NSString, SPTHermesController, SPTWatchConnectivityDataLoader;

@interface SPTWatchPlatformAuthenticationRequestHandler : NSObject <SPTWatchConnectivityRequestHandler>
{
    SPTWatchConnectivityDataLoader *_dataLoader;
    SPTHermesController *_hermesController;
}

@property(readonly, nonatomic) SPTHermesController *hermesController; // @synthesize hermesController=_hermesController;
@property(readonly, nonatomic) SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)authenticationErrorWithUnderlyingError:(id)arg1 description:(id)arg2;
- (id)hermesTokenEndpointURLWithScope:(id)arg1 identifier:(id)arg2;
- (id)handleHermesResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (id)initWithDataLoader:(id)arg1 hermesController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

