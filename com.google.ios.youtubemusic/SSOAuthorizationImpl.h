//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSOAuthorization-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSString;
@protocol GTMSessionFetcherServiceProtocol, OS_dispatch_queue, SSOIdentity;

@interface SSOAuthorizationImpl : NSObject <SSOAuthorization>
{
    _Bool _shouldAuthorizeAllRequests;
    _Bool _requestPending;
    _Bool _libraryAuth;
    _Bool _invalidated;
    id <GTMSessionFetcherServiceProtocol> _fetcherService;
    id <SSOIdentity> _identity;
    NSString *_delegateeUserID;
    unsigned long long _delegationType;
    NSObject<OS_dispatch_queue> *_refreshAccessTokenCallbackQueue;
    NSString *_libraryClientID;
    NSArray *_scopes;
    NSMutableArray *_authorizationQueue;
    NSString *_accessToken;
    NSDate *_tokenExpirationDate;
}

+ (id)libraryAuthorizationWithClientID:(id)arg1 identity:(id)arg2 scopes:(id)arg3;
+ (id)SSOLibraryAuthorizationWithIdentity:(id)arg1 scopes:(id)arg2;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic, getter=isLibraryAuth) _Bool libraryAuth; // @synthesize libraryAuth=_libraryAuth;
@property(nonatomic, getter=isRequestPending) _Bool requestPending; // @synthesize requestPending=_requestPending;
@property(retain, nonatomic) NSDate *tokenExpirationDate; // @synthesize tokenExpirationDate=_tokenExpirationDate;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSMutableArray *authorizationQueue; // @synthesize authorizationQueue=_authorizationQueue;
@property(retain, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(copy, nonatomic) NSString *libraryClientID; // @synthesize libraryClientID=_libraryClientID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *refreshAccessTokenCallbackQueue; // @synthesize refreshAccessTokenCallbackQueue=_refreshAccessTokenCallbackQueue;
@property(readonly, nonatomic) unsigned long long delegationType; // @synthesize delegationType=_delegationType;
@property(readonly, copy, nonatomic) NSString *delegateeUserID; // @synthesize delegateeUserID=_delegateeUserID;
@property(readonly, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity;
@property __weak id <GTMSessionFetcherServiceProtocol> fetcherService; // @synthesize fetcherService=_fetcherService;
@property _Bool shouldAuthorizeAllRequests;
- (void).cxx_destruct;
@property(readonly) NSString *userEmail;
- (_Bool)isAuthorizedRequest:(id)arg1;
- (_Bool)isAuthorizingRequest:(id)arg1;
- (void)stopAuthorizationForRequest:(id)arg1;
- (void)stopAuthorization;
- (void)postTokenRefreshNotificationWithError:(id)arg1;
- (void)authorizeRequest:(id)arg1 callback:(id)arg2;
- (void)authorizeRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3;
- (void)refreshAccessTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) _Bool canAuthorize;
- (void)invalidate;
- (void)authorizeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)primeForRefresh;
- (_Bool)hasToken;
- (void)invokeCallback:(id)arg1;
- (id)initWithLibraryClientID:(id)arg1 identity:(id)arg2 scopes:(id)arg3;
- (id)initWithUserID:(id)arg1 ownerIdentity:(id)arg2 delegationType:(unsigned long long)arg3 scopes:(id)arg4;
- (id)initWithSSOIdentity:(id)arg1 scopes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

