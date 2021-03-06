//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRSocialNetworkLogger-Protocol.h"
#import "GIDSignInDelegate-Protocol.h"
#import "GIDSignInUIDelegate-Protocol.h"

@class NSDictionary, NSError, NSString, UIViewController;

@interface DZRGooglePlusLogger : NSObject <GIDSignInDelegate, GIDSignInUIDelegate, DZRSocialNetworkLogger>
{
    _Bool _isRelogContext;
    unsigned long long _state;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _linkCompletionBlock;
    UIViewController *_viewController;
    NSDictionary *_authParams;
    NSError *_relogError;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSError *relogError; // @synthesize relogError=_relogError;
@property(nonatomic) _Bool isRelogContext; // @synthesize isRelogContext=_isRelogContext;
@property(retain, nonatomic) NSDictionary *authParams; // @synthesize authParams=_authParams;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType linkCompletionBlock; // @synthesize linkCompletionBlock=_linkCompletionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isLinkedToSocialNetwork;
@property(readonly, nonatomic) _Bool isConnectedToSocialNetwork;
@property(readonly, nonatomic) _Bool isConnectingToSocialNetwork;
- (void)removeLinkToSocialNetworkWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)linkToSocialNetworkFromViewController:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)relogLinkToSocialNetworkFromViewController:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)gpLoginSucceededWithParams:(id)arg1;
- (void)dzrnetLoginWithPersonId:(id)arg1 accessToken:(id)arg2;
- (void)signIn:(id)arg1 dismissViewController:(id)arg2;
- (void)signIn:(id)arg1 presentViewController:(id)arg2;
- (void)signInWillDispatch:(id)arg1 error:(id)arg2;
- (void)signIn:(id)arg1 didDisconnectWithUser:(id)arg2 withError:(id)arg3;
- (void)signIn:(id)arg1 didSignInForUser:(id)arg2 withError:(id)arg3;
- (void)linkFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

