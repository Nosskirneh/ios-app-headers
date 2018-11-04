//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTService.h"

@class NSString, SPTAllocationContext, SPTLoginKeychainCredentialsWriter, SPTLoginSignupMarketingOptInFlashController;

@interface SPTLoginSessionServiceImplementation : NSObject <SPTService>
{
    id <SPTCoreService> _coreService;
    id <SPTLoginService> _loginService;
    id <SPTSessionService> _sessionService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTNotificationsService> _notificationsService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    SPTLoginKeychainCredentialsWriter *_credentialsWriter;
    SPTLoginSignupMarketingOptInFlashController *_marketingOptInController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTLoginSignupMarketingOptInFlashController *marketingOptInController; // @synthesize marketingOptInController=_marketingOptInController;
@property(retain, nonatomic) SPTLoginKeychainCredentialsWriter *credentialsWriter; // @synthesize credentialsWriter=_credentialsWriter;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTNotificationsService> notificationsService; // @synthesize notificationsService=_notificationsService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
- (void).cxx_destruct;
- (void)storePreferredLocale;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
