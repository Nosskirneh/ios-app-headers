//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BITHockeyBaseManager.h"

#import "BITAuthenticationViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class BITHockeyAppClient, NSString, NSURL, UIViewController;
@protocol BITAuthenticatorDelegate;

@interface BITAuthenticator : BITHockeyBaseManager <BITAuthenticationViewControllerDelegate, UIAlertViewDelegate>
{
    _Bool _restrictApplicationUsage;
    _Bool _identified;
    _Bool _validated;
    _Bool _isSetup;
    unsigned long long _identificationType;
    unsigned long long _restrictionEnforcementFrequency;
    NSString *_authenticationSecret;
    NSURL *_webpageURL;
    NSString *_urlScheme;
    id _appDidBecomeActiveObserver;
    id _appDidEnterBackgroundObserver;
    UIViewController *_authenticationController;
    id <BITAuthenticatorDelegate> _delegate;
    BITHockeyAppClient *_hockeyAppClient;
    CDUnknownBlockType _identificationCompletion;
}

+ (id)stringForIdentificationType:(unsigned long long)arg1;
+ (void)email:(id *)arg1 andIUID:(id *)arg2 fromOpenURL:(id)arg3;
+ (id)UDIDFromOpenURL:(id)arg1 annotation:(id)arg2;
+ (id)authenticationTokenFromURLResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
+ (_Bool)isValidationResponseValid:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) CDUnknownBlockType identificationCompletion; // @synthesize identificationCompletion=_identificationCompletion;
@property(retain, nonatomic) BITHockeyAppClient *hockeyAppClient; // @synthesize hockeyAppClient=_hockeyAppClient;
@property(nonatomic) __weak id <BITAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(retain, nonatomic) id appDidEnterBackgroundObserver; // @synthesize appDidEnterBackgroundObserver=_appDidEnterBackgroundObserver;
@property(retain, nonatomic) id appDidBecomeActiveObserver; // @synthesize appDidBecomeActiveObserver=_appDidBecomeActiveObserver;
@property(nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
@property(nonatomic, getter=isValidated) _Bool validated; // @synthesize validated=_validated;
@property(nonatomic, getter=isIdentified) _Bool identified; // @synthesize identified=_identified;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(retain, nonatomic) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(copy, nonatomic) NSString *authenticationSecret; // @synthesize authenticationSecret=_authenticationSecret;
@property(nonatomic) unsigned long long restrictionEnforcementFrequency; // @synthesize restrictionEnforcementFrequency=_restrictionEnforcementFrequency;
@property(nonatomic) _Bool restrictApplicationUsage; // @synthesize restrictApplicationUsage=_restrictApplicationUsage;
@property(nonatomic) unsigned long long identificationType; // @synthesize identificationType=_identificationType;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)publicInstallationIdentifier;
@property(readonly, copy, nonatomic) NSString *installationIdentifierParameterString;
@property(copy, nonatomic) NSString *lastAuthenticatedVersion;
@property(readonly, copy, nonatomic) NSString *installationIdentifier;
- (void)storeInstallationIdentifier:(id)arg1 withType:(unsigned long long)arg2;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)processFullSizeImage;
- (void)cleanupInternalStorage;
- (void)alertOnFailureStoringTokenInKeychain;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (id)deviceAuthenticationURL;
- (id)authenticationPath;
- (id)requestForAuthenticationEmail:(id)arg1 password:(id)arg2;
- (void)handleAuthenticationWithResponse:(id)arg1 email:(id)arg2 data:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)authenticationViewControllerDidTapWebButton:(id)arg1;
- (void)authenticationViewController:(id)arg1 handleAuthenticationWithEmail:(id)arg2 request:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)authenticationViewController:(id)arg1 handleAuthenticationWithEmail:(id)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissAuthenticationControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)validationParameters;
- (void)handleValidationResponseWithData:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;
- (void)validate;
- (_Bool)needsValidation;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (void)authenticate;
- (void)authenticateInstallation;
- (void)startManager;
- (void)dealloc;
- (id)initWithAppIdentifier:(id)arg1 appEnvironment:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

