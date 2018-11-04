//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderAuthoriser.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTProductStateObserver.h"

@class NSMutableArray, NSMutableDictionary, NSString, SPTDataLoaderExponentialTimer, SPTHermesController, SPTHermesRequest, SPTNetworkConnectivityController, SPTStartupTracer;

@interface SPTDataLoaderKeymasterAuthoriser : NSObject <SPTProductStateObserver, SPTOfflineModeStateObserver, SPTDataLoaderAuthoriser>
{
    _Bool _retrying;
    _Bool _beenOnline;
    NSString *_identifier;
    id <SPTDataLoaderAuthoriserDelegate> _delegate;
    SPTHermesController *_hermesController;
    SPTNetworkConnectivityController *_networkConnectivityController;
    SPTStartupTracer *_startupTracer;
    id <SPTProductState> _productState;
    id <SPTOfflineModeState> _offlineModeState;
    SPTHermesRequest *_tokenRequest;
    NSString *_accessToken;
    double _expiresIn;
    NSString *_tokenType;
    SPTDataLoaderExponentialTimer *_expTime;
    double _tokenObtained;
    NSMutableArray *_pendingRequests;
    NSMutableDictionary *_authorisationHosts;
}

@property(nonatomic, getter=hasBeenOnline) _Bool beenOnline; // @synthesize beenOnline=_beenOnline;
@property(retain, nonatomic) NSMutableDictionary *authorisationHosts; // @synthesize authorisationHosts=_authorisationHosts;
@property(getter=isRetrying) _Bool retrying; // @synthesize retrying=_retrying;
@property(retain, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property double tokenObtained; // @synthesize tokenObtained=_tokenObtained;
@property(retain, nonatomic) SPTDataLoaderExponentialTimer *expTime; // @synthesize expTime=_expTime;
@property(copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(nonatomic) double expiresIn; // @synthesize expiresIn=_expiresIn;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain) SPTHermesRequest *tokenRequest; // @synthesize tokenRequest=_tokenRequest;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) SPTHermesController *hermesController; // @synthesize hermesController=_hermesController;
@property(nonatomic) __weak id <SPTDataLoaderAuthoriserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)unregisterAuthorisationHostsName:(id)arg1;
- (void)registerAuthorisationHosts:(id)arg1 withName:(id)arg2;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)refresh;
- (void)requestFailedAuthorisation:(id)arg1;
- (void)authoriseRequest:(id)arg1;
- (_Bool)requestRequiresAuthorisation:(id)arg1;
- (_Bool)hostInAuthorisationHosts:(id)arg1;
- (void)checkOfflineModeState;
- (void)invalidateToken;
- (void)invalidateTokenNoLock;
- (void)handleFailure:(id)arg1 forRequests:(id)arg2;
- (void)loadTokens;
- (void)injectAuthorisationHeadersIntoRequest:(id)arg1;
@property(readonly, nonatomic, getter=isTokenValid) _Bool tokenValid;
- (id)defaultHostsToAuthenticate;
- (id)initWithHermesController:(id)arg1 networkConnectivityController:(id)arg2 startupTracer:(id)arg3 productState:(id)arg4 offlineModeState:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

