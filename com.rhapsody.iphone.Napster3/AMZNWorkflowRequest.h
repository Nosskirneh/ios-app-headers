//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMZNSSORemoteAction-Protocol.h"
#import "AMZNWebViewable-Protocol.h"

@class AMZNWorkflowToken, NSDictionary, NSNumber, NSString, NSURL;

@interface AMZNWorkflowRequest : NSObject <AMZNWebViewable, AMZNSSORemoteAction>
{
    NSString *_requestID;
    NSURL *_requestedURL;
    AMZNWorkflowToken *_workflowToken;
    NSNumber *_minimumLifetime;
    NSDictionary *_options;
    CDUnknownBlockType _completionHandler;
    NSString *_oneTimeCode;
    unsigned long long _attemptCount;
}

@property(nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(copy, nonatomic) NSString *oneTimeCode; // @synthesize oneTimeCode=_oneTimeCode;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSNumber *minimumLifetime; // @synthesize minimumLifetime=_minimumLifetime;
@property(readonly, nonatomic) AMZNWorkflowToken *workflowToken; // @synthesize workflowToken=_workflowToken;
@property(readonly, nonatomic) NSURL *requestedURL; // @synthesize requestedURL=_requestedURL;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (id)relyingPartyContext;
- (id)URLWithRelyingPartyContext;
- (id)remoteOptions;
- (id)remoteState;
- (id)remoteRedirectURI;
- (id)remoteMethodName;
- (id)ssoVersion;
- (void)didExplicitlyDismissViewable;
- (id)URLForAmazonManagedContext;
- (id)URLForGenericBrowser;
@property(readonly, nonatomic) _Bool canRetry;
- (void)performRequestWithOneTimeCode:(id)arg1;
- (id)initWithRequestedURL:(id)arg1 workflowToken:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

