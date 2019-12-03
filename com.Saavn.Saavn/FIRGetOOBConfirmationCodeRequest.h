//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRIdentityToolkitRequest.h"

#import "FIRAuthRPCRequest-Protocol.h"

@class NSString;

@interface FIRGetOOBConfirmationCodeRequest : FIRIdentityToolkitRequest <FIRAuthRPCRequest>
{
    _Bool _androidInstallApp;
    _Bool _handleCodeInApp;
    long long _requestType;
    NSString *_email;
    NSString *_accessToken;
    NSString *_continueURL;
    NSString *_iOSBundleID;
    NSString *_androidPackageName;
    NSString *_androidMinimumVersion;
    NSString *_dynamicLinkDomain;
}

+ (id)signInWithEmailLinkRequest:(id)arg1 actionCodeSettings:(id)arg2 requestConfiguration:(id)arg3;
+ (id)verifyEmailRequestWithAccessToken:(id)arg1 actionCodeSettings:(id)arg2 requestConfiguration:(id)arg3;
+ (id)passwordResetRequestWithEmail:(id)arg1 actionCodeSettings:(id)arg2 requestConfiguration:(id)arg3;
+ (id)requestTypeStringValueForRequestType:(long long)arg1;
@property(copy, nonatomic) NSString *dynamicLinkDomain; // @synthesize dynamicLinkDomain=_dynamicLinkDomain;
@property(nonatomic) _Bool handleCodeInApp; // @synthesize handleCodeInApp=_handleCodeInApp;
@property(readonly, nonatomic) _Bool androidInstallApp; // @synthesize androidInstallApp=_androidInstallApp;
@property(readonly, copy, nonatomic) NSString *androidMinimumVersion; // @synthesize androidMinimumVersion=_androidMinimumVersion;
@property(readonly, copy, nonatomic) NSString *androidPackageName; // @synthesize androidPackageName=_androidPackageName;
@property(readonly, copy, nonatomic) NSString *iOSBundleID; // @synthesize iOSBundleID=_iOSBundleID;
@property(readonly, copy, nonatomic) NSString *continueURL; // @synthesize continueURL=_continueURL;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)unencodedHTTPRequestBodyWithError:(id *)arg1;
- (id)initWithRequestType:(long long)arg1 email:(id)arg2 accessToken:(id)arg3 actionCodeSettings:(id)arg4 requestConfiguration:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
