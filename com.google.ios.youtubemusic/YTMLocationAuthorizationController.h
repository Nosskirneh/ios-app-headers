//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "UDCConsentFlowDelegate-Protocol.h"

@class CLLocationManager, NSString, SSOService, UDCConsentFlow, UIViewController, YTMLocationPromptLoggingController, YTMULRController, YTUserDefaults;
@protocol YTIdentityProvider, YTResponder;

@interface YTMLocationAuthorizationController : NSObject <CLLocationManagerDelegate, UDCConsentFlowDelegate>
{
    CLLocationManager *_locationManager;
    UDCConsentFlow *_UDCConsentFlow;
    YTMULRController *_ULRController;
    SSOService *_SSOService;
    id <YTIdentityProvider> _identityProvider;
    UIViewController<YTResponder> *_presentingViewController;
    YTUserDefaults *_userDefaults;
    YTMLocationPromptLoggingController *_loggingController;
    _Bool _didDisplaySystemLocationPrompt;
    CDUnknownBlockType _systemAccessRequestCompletedBlock;
}

+ (int)protoAuthorizationFromIosStatus:(int)arg1;
+ (int)protoStatusFromIosStatus:(int)arg1;
+ (int)authorizationStatus;
+ (int)locationInfoStatus;
- (void).cxx_destruct;
- (void)consentFlow:(id)arg1 dialogDidReturn:(id)arg2;
- (void)consentFlow:(id)arg1 checkDidReturn:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
@property(nonatomic) int locationMasterSwitchState;
- (void)requestULRAuthorizationWithProductContext:(id)arg1 fromViewController:(id)arg2;
- (void)requestSystemAuthorization:(int)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSSOService:(id)arg1 identityProvider:(id)arg2 ULRController:(id)arg3 userDefaults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

