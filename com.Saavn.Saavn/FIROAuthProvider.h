//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRFederatedAuthProvider-Protocol.h"

@class FIRAuth, NSArray, NSDictionary, NSString;

@interface FIROAuthProvider : NSObject <FIRFederatedAuthProvider>
{
    FIRAuth *_auth;
    NSString *_callbackScheme;
    NSArray *_scopes;
    NSDictionary *_customParameters;
    NSString *_providerID;
}

+ (id)providerWithProviderID:(id)arg1 auth:(id)arg2;
+ (id)providerWithProviderID:(id)arg1;
+ (id)credentialWithProviderID:(id)arg1 accessToken:(id)arg2;
+ (id)credentialWithProviderID:(id)arg1 IDToken:(id)arg2 accessToken:(id)arg3;
+ (id)credentialWithProviderID:(id)arg1 IDToken:(id)arg2 accessToken:(id)arg3 pendingToken:(id)arg4;
@property(readonly, copy, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(copy, nonatomic) NSDictionary *customParameters; // @synthesize customParameters=_customParameters;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
- (void).cxx_destruct;
- (id)httpArgumentsStringForArgsDictionary:(id)arg1;
- (id)hexStringFromData:(id)arg1;
- (id)hashforString:(id)arg1;
- (id)customParametersStringWithError:(id *)arg1;
- (void)getHeadFulLiteURLWithEventID:(id)arg1 sessionID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)OAuthResponseForURL:(id)arg1 error:(id *)arg2;
- (id)initWithProviderID:(id)arg1 auth:(id)arg2;
- (void)getCredentialWithUIDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

