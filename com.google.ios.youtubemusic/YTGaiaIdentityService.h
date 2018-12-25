//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSOInterfaceControllerDelegate-Protocol.h"

@class GIMMe, NSHashTable, NSString, SSOService;
@protocol YTSSOConfig, YTSSOHostViewControllerResponderProvider;

@interface YTGaiaIdentityService : NSObject <SSOInterfaceControllerDelegate>
{
    SSOService *_ssoService;
    id <YTSSOConfig> _ssoConfig;
    id <YTSSOHostViewControllerResponderProvider> _modalPresentationResponderProvider;
    NSHashTable *_gaiaIdentitiesChangedObservers;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyObserversWithRemovedAccountsIDs:(id)arg1;
- (void)notifyObserversWithAddedAccounts:(id)arg1;
- (void)ssoIdentityListChanged:(id)arg1;
- (id)applicationScopes;
- (void)forceSignOutDueToError:(id)arg1 googleID:(id)arg2;
- (void)handleSSOError:(id)arg1 withErrorBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)modalPresentationResponderProvider;
- (void)accessTokenRefreshFailed:(id)arg1;
- (id)ssoAuthorizationForPersonaID:(id)arg1 ownerIdentity:(id)arg2;
- (id)ssoAuthorizationForSSOIdentity:(id)arg1;
- (id)googleAccountForPersonaID:(id)arg1 ownerSSOIdentity:(id)arg2;
- (id)googleAccountForSSOIdentity:(id)arg1;
- (id)freshSSOInterfaceController;
- (id)googleAccountForEarlyDelegationID:(id)arg1;
- (id)googleAccountForLateDelegationID:(id)arg1;
- (id)accountManagerForInterfaceController:(id)arg1;
- (id)presentingViewControllerForInterfaceController:(id)arg1;
- (unsigned long long)supportedOrientationsForInterfaceController:(id)arg1;
- (_Bool)interfaceControllerShouldAllowRotation:(id)arg1;
- (void)interfaceControllerDismissPushedViewControllers:(id)arg1;
- (void)removeGaiaIdentitiesChangedObserver:(id)arg1;
- (void)addGaiaIdentitiesChangedObserver:(id)arg1;
- (id)allUnicornAccounts;
- (id)allGoogleAccounts;
- (void)removeGoogleAccountFromDevice:(id)arg1;
- (id)lastDeviceIdentity;
- (id)googleAccountForIdentityID:(id)arg1;
- (id)googleAccountForPersonaID:(id)arg1 ownerID:(id)arg2;
- (id)googleAccountForID:(id)arg1;
- (id)cachedAvatarImageForAccount:(id)arg1;
- (void)fetchGaiaUserProfileForIdentity:(id)arg1 withProfileBlock:(CDUnknownBlockType)arg2;
- (void)showGaiaSwitchAccountsFromCurrentGoogleAccount:(id)arg1 withSucceededBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3 cancelledBlock:(CDUnknownBlockType)arg4;
- (void)showGaiaSignInWithSucceededBlock:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2 cancelledBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

