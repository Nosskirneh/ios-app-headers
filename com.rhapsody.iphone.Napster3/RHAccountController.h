//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RHAccountUpdateService-Protocol.h"
#import "RHAuthenticationStateService-Protocol.h"
#import "RHOAuthTokenPersistanceService-Protocol.h"

@class FBKVOController, NSArray, NSDate, NSDictionary, NSNumber, NSOperationQueue, NSString, NSTimer, NSURLSession, RHAppDelegateRouter, RHAppState, RHBrandingController, RHEqualizerPreset, RHEqualizerSettings, RHInstanceCounter, RHMemberCredentials, RHMetricsModel, RHOAuthToken, RHPlayerController, RHProfileMO, RHTrackMO, RHUpsellController, RHUserModel, RHiPadVerticalTabBarController, UIAlertController, ZDSDeferred, ZDSPromise, _TtC7Napster15EvenPlayerLogic;
@protocol RHAbTestingService, RHEqualizerService, RHPermissionsProtocol, RHTimeService;

@interface RHAccountController : NSObject <RHAccountUpdateService, RHOAuthTokenPersistanceService, RHAuthenticationStateService>
{
    _Bool __suspended;
    _Bool __accountIsPayable;
    _Bool __nonDmcaRadioUser;
    _Bool __supportsMobile;
    _Bool __supportsOfflinePlayback;
    _Bool __isUnnamedAccount;
    _Bool __autoDownloadFavoritesSetting;
    _Bool __trialRollover;
    _Bool __presentedLibrarySortingTooltop;
    NSString *__password;
    long long __loginMethod;
    NSString *__cobrandId;
    NSString *__cocatId;
    NSString *__localeId;
    NSString *__catalogId;
    NSString *__country;
    unsigned long long __freePlaysRemaining;
    double __freeTrialTimeRemaining;
    long long __playsRemaining;
    NSString *__playbackSessionId;
    NSString *__accountType;
    NSString *__accountTypeDisplayName;
    unsigned long long __maxAuthDevices;
    unsigned long long __maxConcurrentStreams;
    NSString *__token;
    NSString *__rhapsodyAccessToken;
    NSDate *__trialTerminationDate;
    NSDate *__lastSuccessfulAuthDate;
    NSDate *__lastSuccessfulSignInDate;
    NSString *__lastUser;
    NSDate *__lastServerDate;
    NSDate *__lastLocalDate;
    RHUserModel *__userModel;
    UIAlertController *__signInAlert;
    UIAlertController *__expiredAlert;
    NSNumber *__filterRightsKey;
    NSString *__accessDenied;
    NSArray *__authDeviceGuid;
    NSArray *__authDeviceName;
    NSString *__deauthDeviceId;
    NSDictionary *__staticCatalogIds;
    NSString *__activationStatus;
    NSString *__partnerName;
    NSArray *__entitlements;
    RHBrandingController *__brandingController;
    id <RHPermissionsProtocol> __permissionsController;
    long long __librayMyPlaylistsSorting;
    NSString *__userGuidForMetering;
    NSTimer *__periodicAuthTimer;
    _TtC7Napster15EvenPlayerLogic *_equalizerPlayerLogic;
    id <RHEqualizerService> _equalizerService;
    NSString *_login;
    NSString *_fallbackCatalogId;
    NSString *_facebookId;
    NSString *_amazonId;
    NSString *_familyPlanAccountType;
    NSString *_userGuid;
    id _forceOfflineStatusMessage;
    unsigned long long _frictionlessEligibility;
    RHOAuthToken *_oauthToken;
    long long _modeType;
    RHProfileMO *_currentProfile;
    NSString *_findFriendsSearchTerm;
    NSString *_googleCastActiveSessionID;
    NSString *_googleCastActiveDeviceID;
    NSString *_napiCatalogId;
    NSOperationQueue *_napiAuthenticatedQueue;
    NSDate *_lastPrivacyChangeCheckDate;
    FBKVOController *_keyValueObserver;
    ZDSPromise *_reauthenticateSignInPromise;
    NSDate *_reauthenticateSignInPromiseDate;
    id <RHTimeService> _timeService;
    NSTimer *_restorationTimer;
    ZDSDeferred *_renameAnonymousAccountDeferred;
    RHInstanceCounter *_debugReferenceCounter;
    NSURLSession *_session;
    id <RHAbTestingService> _abTestingService;
    NSOperationQueue *__accountQueue;
    ZDSDeferred *_playbackSessionRequest;
    RHTrackMO *_lastTrackForValidation;
    NSString *_accountTypeBeforeAutomaticSignIn;
    ZDSDeferred *_profileDeferred;
}

+ (long long)billingPartnerForString:(id)arg1;
+ (_Bool)shouldEraseDatabaseWhenCocatChangesFrom:(id)arg1 toNewCocat:(id)arg2;
@property(retain, nonatomic) ZDSDeferred *profileDeferred; // @synthesize profileDeferred=_profileDeferred;
@property(retain, nonatomic) NSString *accountTypeBeforeAutomaticSignIn; // @synthesize accountTypeBeforeAutomaticSignIn=_accountTypeBeforeAutomaticSignIn;
@property(nonatomic) __weak RHTrackMO *lastTrackForValidation; // @synthesize lastTrackForValidation=_lastTrackForValidation;
@property(retain, nonatomic) ZDSDeferred *playbackSessionRequest; // @synthesize playbackSessionRequest=_playbackSessionRequest;
@property(retain, nonatomic) NSOperationQueue *_accountQueue; // @synthesize _accountQueue=__accountQueue;
@property(retain, nonatomic) id <RHAbTestingService> abTestingService; // @synthesize abTestingService=_abTestingService;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) RHInstanceCounter *debugReferenceCounter; // @synthesize debugReferenceCounter=_debugReferenceCounter;
@property(retain, nonatomic) ZDSDeferred *renameAnonymousAccountDeferred; // @synthesize renameAnonymousAccountDeferred=_renameAnonymousAccountDeferred;
@property(retain, nonatomic) NSTimer *restorationTimer; // @synthesize restorationTimer=_restorationTimer;
@property(retain, nonatomic) id <RHTimeService> timeService; // @synthesize timeService=_timeService;
@property(copy, nonatomic) NSDate *reauthenticateSignInPromiseDate; // @synthesize reauthenticateSignInPromiseDate=_reauthenticateSignInPromiseDate;
@property(retain, nonatomic) ZDSPromise *reauthenticateSignInPromise; // @synthesize reauthenticateSignInPromise=_reauthenticateSignInPromise;
@property(retain, nonatomic) FBKVOController *keyValueObserver; // @synthesize keyValueObserver=_keyValueObserver;
@property(retain, nonatomic) NSDate *lastPrivacyChangeCheckDate; // @synthesize lastPrivacyChangeCheckDate=_lastPrivacyChangeCheckDate;
@property(retain, nonatomic) NSOperationQueue *napiAuthenticatedQueue; // @synthesize napiAuthenticatedQueue=_napiAuthenticatedQueue;
@property(copy, nonatomic) NSString *napiCatalogId; // @synthesize napiCatalogId=_napiCatalogId;
@property(retain, nonatomic) NSString *googleCastActiveDeviceID; // @synthesize googleCastActiveDeviceID=_googleCastActiveDeviceID;
@property(retain, nonatomic) NSString *googleCastActiveSessionID; // @synthesize googleCastActiveSessionID=_googleCastActiveSessionID;
@property(retain, nonatomic) NSString *findFriendsSearchTerm; // @synthesize findFriendsSearchTerm=_findFriendsSearchTerm;
@property(retain, nonatomic) RHProfileMO *currentProfile; // @synthesize currentProfile=_currentProfile;
@property(readonly, nonatomic) long long modeType; // @synthesize modeType=_modeType;
@property(retain, nonatomic) RHOAuthToken *oauthToken; // @synthesize oauthToken=_oauthToken;
@property(nonatomic) unsigned long long frictionlessEligibility; // @synthesize frictionlessEligibility=_frictionlessEligibility;
@property(retain, nonatomic) id forceOfflineStatusMessage; // @synthesize forceOfflineStatusMessage=_forceOfflineStatusMessage;
@property(retain, nonatomic) NSString *userGuid; // @synthesize userGuid=_userGuid;
@property(retain, nonatomic) NSString *familyPlanAccountType; // @synthesize familyPlanAccountType=_familyPlanAccountType;
@property(retain, nonatomic) NSString *amazonId; // @synthesize amazonId=_amazonId;
@property(retain, nonatomic) NSString *facebookId; // @synthesize facebookId=_facebookId;
@property(retain, nonatomic) NSString *fallbackCatalogId; // @synthesize fallbackCatalogId=_fallbackCatalogId;
@property(retain, nonatomic) NSString *login; // @synthesize login=_login;
@property(retain, nonatomic) id <RHEqualizerService> equalizerService; // @synthesize equalizerService=_equalizerService;
@property(retain, nonatomic) _TtC7Napster15EvenPlayerLogic *equalizerPlayerLogic; // @synthesize equalizerPlayerLogic=_equalizerPlayerLogic;
@property(retain, nonatomic) NSTimer *periodicAuthTimer; // @synthesize periodicAuthTimer=__periodicAuthTimer;
@property(readonly, nonatomic) NSString *userGuidForMetering; // @synthesize userGuidForMetering=__userGuidForMetering;
@property(nonatomic) _Bool presentedLibrarySortingTooltop; // @synthesize presentedLibrarySortingTooltop=__presentedLibrarySortingTooltop;
@property(nonatomic) long long librayMyPlaylistsSorting; // @synthesize librayMyPlaylistsSorting=__librayMyPlaylistsSorting;
@property(readonly, nonatomic) id <RHPermissionsProtocol> permissionsController; // @synthesize permissionsController=__permissionsController;
@property(readonly, nonatomic) RHBrandingController *brandingController; // @synthesize brandingController=__brandingController;
@property(readonly, nonatomic) NSArray *entitlements; // @synthesize entitlements=__entitlements;
@property(readonly, nonatomic) NSString *partnerName; // @synthesize partnerName=__partnerName;
@property(readonly, nonatomic) _Bool isUnnamedAccount; // @synthesize isUnnamedAccount=__isUnnamedAccount;
@property(copy, nonatomic) NSString *activationStatus; // @synthesize activationStatus=__activationStatus;
@property(retain, nonatomic) NSDictionary *staticCatalogIds; // @synthesize staticCatalogIds=__staticCatalogIds;
@property(retain, nonatomic) NSString *deauthDeviceId; // @synthesize deauthDeviceId=__deauthDeviceId;
@property(readonly, nonatomic) NSArray *authDeviceName; // @synthesize authDeviceName=__authDeviceName;
@property(readonly, nonatomic) NSArray *authDeviceGuid; // @synthesize authDeviceGuid=__authDeviceGuid;
@property(readonly, nonatomic) NSString *accessDenied; // @synthesize accessDenied=__accessDenied;
@property(readonly, nonatomic) NSNumber *filterRightsKey; // @synthesize filterRightsKey=__filterRightsKey;
@property(readonly, nonatomic) RHUserModel *userModel; // @synthesize userModel=__userModel;
@property(readonly, nonatomic) NSDate *lastLocalDate; // @synthesize lastLocalDate=__lastLocalDate;
@property(readonly, nonatomic) NSDate *lastServerDate; // @synthesize lastServerDate=__lastServerDate;
@property(retain, nonatomic) NSString *lastUser; // @synthesize lastUser=__lastUser;
@property(readonly, nonatomic) NSDate *lastSuccessfulSignInDate; // @synthesize lastSuccessfulSignInDate=__lastSuccessfulSignInDate;
@property(readonly, nonatomic) NSDate *lastSuccessfulAuthDate; // @synthesize lastSuccessfulAuthDate=__lastSuccessfulAuthDate;
@property(readonly, nonatomic) NSDate *trialTerminationDate; // @synthesize trialTerminationDate=__trialTerminationDate;
@property(readonly, nonatomic) NSString *rhapsodyAccessToken; // @synthesize rhapsodyAccessToken=__rhapsodyAccessToken;
@property(readonly, nonatomic) NSString *token; // @synthesize token=__token;
@property(readonly, nonatomic) _Bool supportsMobile; // @synthesize supportsMobile=__supportsMobile;
@property(readonly, nonatomic) _Bool nonDmcaRadioUser; // @synthesize nonDmcaRadioUser=__nonDmcaRadioUser;
@property(readonly, nonatomic) unsigned long long maxConcurrentStreams; // @synthesize maxConcurrentStreams=__maxConcurrentStreams;
@property(readonly, nonatomic) unsigned long long maxAuthDevices; // @synthesize maxAuthDevices=__maxAuthDevices;
@property(readonly, nonatomic) NSString *accountTypeDisplayName; // @synthesize accountTypeDisplayName=__accountTypeDisplayName;
@property(readonly, nonatomic) NSString *accountType; // @synthesize accountType=__accountType;
@property(readonly, nonatomic) _Bool suspended; // @synthesize suspended=__suspended;
@property(readonly, nonatomic) NSString *playbackSessionId; // @synthesize playbackSessionId=__playbackSessionId;
@property(readonly, nonatomic) long long playsRemaining; // @synthesize playsRemaining=__playsRemaining;
@property(readonly, nonatomic) NSString *country; // @synthesize country=__country;
@property(readonly, nonatomic) NSString *localeId; // @synthesize localeId=__localeId;
@property(readonly, nonatomic) NSString *cocatId; // @synthesize cocatId=__cocatId;
@property(retain, nonatomic) NSString *cobrandId; // @synthesize cobrandId=__cobrandId;
@property(readonly, nonatomic) long long loginMethod; // @synthesize loginMethod=__loginMethod;
@property(readonly, nonatomic) NSString *password; // @synthesize password=__password;
- (void).cxx_destruct;
- (void)presentEvenUpsell:(long long)arg1;
@property(readonly, nonatomic) RHEqualizerPreset *selectedEqualizerPreset;
@property(retain, nonatomic) RHEqualizerSettings *equalizerSettings;
- (void)unregisterFromNotifications;
- (void)clearCredentials;
- (id)userDefaults;
- (void)resetToDefaultSettings;
- (id)deferredLoadedProfile;
- (_Bool)isCurrentProfileGuid:(id)arg1;
- (id)reloadCurrentProfile;
@property(nonatomic) _Bool profileIntroShown;
@property(nonatomic) _Bool miniPlayerGoogleCastTooltipShown;
@property(nonatomic) _Bool miniPlayerSwipeTooltipShown;
@property(nonatomic) _Bool playlistBuilderWizardWelcomDialogShown;
@property(nonatomic) _Bool lastDeviceSettingsPushPreference;
@property(nonatomic) _Bool pushBadgeHidden;
@property(retain, nonatomic) NSDate *lastPrivacyAcceptedDate;
- (void)networkStatusChanged:(id)arg1;
@property(readonly, nonatomic) _Bool isPremier;
@property(readonly, nonatomic) _Bool isSubscriber;
@property(readonly, nonatomic) _Bool isR25;
@property(readonly, nonatomic) _Bool isDirectBilling;
@property(readonly, nonatomic) _Bool shouldAutoDownloadFavorites;
@property(readonly, nonatomic) _Bool autoDownloadFavoritesSetting; // @synthesize autoDownloadFavoritesSetting=__autoDownloadFavoritesSetting;
- (void)resetPlaybackSession;
@property(nonatomic) unsigned long long downloadQualityWiFi; // @dynamic downloadQualityWiFi;
@property(nonatomic) unsigned long long downloadQuality; // @dynamic downloadQuality;
@property(nonatomic) unsigned long long resultStreamingQuality;
@property(nonatomic) unsigned long long streamingQualityWiFi; // @dynamic streamingQualityWiFi;
@property(nonatomic) unsigned long long streamingQuality; // @dynamic streamingQuality;
- (id)entitlementByCode:(long long)arg1;
- (void)playbackValidationServerCallComplete:(_Bool)arg1;
- (_Bool)canFavoriteCurrentTrack;
- (_Bool)canAccessPlay:(_Bool)arg1;
@property(readonly, nonatomic) _Bool wasPreviouslyFrictionlessTrialUser;
@property(readonly, nonatomic) _Bool wasPreviouslyTrialUser;
@property(readonly, nonatomic) _Bool isExpiredTrialAccount;
@property(readonly, nonatomic) _Bool isActiveTrialAccount;
@property(readonly, nonatomic) _Bool isTrialAccount;
@property(readonly, nonatomic) _Bool isNonMobileTier;
@property(readonly, nonatomic) _Bool isRadioPlusTier;
@property(readonly, nonatomic) _Bool isHDMusicStreamingUser;
@property(readonly, nonatomic) _Bool isRadioDeUser;
@property(readonly, nonatomic) _Bool isCorinthiansUser;
@property(readonly, nonatomic) _Bool isPlayBased;
@property(readonly, nonatomic) _Bool isUpgradeRequired;
@property(readonly, nonatomic) _Bool hasWebEntitlements;
- (_Bool)hasMobileEntitlements;
- (_Bool)hasRadioEntitlements;
@property(readonly, nonatomic) _Bool hasStreamEntitlements;
@property(readonly, nonatomic) _Bool hasFavoritesDownloadEntitlements;
@property(readonly, nonatomic) _Bool hasDownloadEntitlements;
- (void)userIsTryingToDownloadFavorite;
- (void)userIsTryingToDownload;
- (void)userIsTryingToPlay;
- (long long)userIsTryingToAccess:(id)arg1;
- (void)refreshPermissionsController;
- (void)refreshBrandingController;
- (void)initBrandingController;
- (void)accountPropertiesChangedShouldUpdateBehaviourProperties:(_Bool)arg1;
- (void)accountPropertiesChanged;
@property(readonly, copy, nonatomic) NSString *countryFromLocale;
@property(readonly, copy, nonatomic) NSString *languageFromLocale;
@property(readonly, nonatomic) NSString *radioCountryForCatalogId;
@property(readonly, nonatomic) ZDSDeferred *deferredNapiCatalogId;
- (void)updateLastCocat:(id)arg1;
- (id)lastCocat;
@property(readonly, nonatomic) NSString *fallbackCountry;
@property(readonly, nonatomic) NSString *catalogId; // @synthesize catalogId=__catalogId;
@property(readonly, copy, nonatomic) NSString *locale;
- (id)cocatString;
- (void)resetPeriodicAuthCheck;
- (id)newPreparedTimer;
- (void)stopPeriodicAuthCheck;
- (void)startPeriodicAuthCheck;
- (void)playerStateChangedForAuth:(id)arg1;
- (void)periodicAuthCheck:(id)arg1;
- (void)handleSignInPromise:(id)arg1;
- (void)reauthenticate:(_Bool)arg1;
- (double)timeSinceLastCheck;
- (id)_deferredForGetPlaybackSessionId;
- (void)updateOfflinePlaybackState;
- (id)defaultCenter;
- (void)removeUserModelObserver;
- (void)removePlayerControllerObserver;
- (void)addPlayerControllerObserver;
- (void)handleAccessDeniedForFrictionlessAccount;
- (void)getContentFailed:(id)arg1 track:(id)arg2 station:(id)arg3 numberOfAttempts:(long long)arg4;
- (void)validateSessionForTrack:(id)arg1 station:(id)arg2 numberOfAttempts:(long long)arg3;
- (void)validateSessionForTrack:(id)arg1 station:(id)arg2;
- (id)getSessionIdDeferredThrottled;
- (void)trackChangedNotification:(id)arg1;
- (long long)indexOfDeauthCandidate;
@property(readonly, nonatomic) RHMetricsModel *metricsModel;
- (void)updateFilterRights;
@property(readonly, nonatomic) RHUpsellController *upsellController;
@property(readonly, nonatomic) RHAppDelegateRouter *appDelegate;
@property(readonly, nonatomic) RHiPadVerticalTabBarController *navBarController;
@property(readonly, nonatomic) RHPlayerController *playerController;
@property(readonly, nonatomic) UIAlertController *expiredAlert; // @synthesize expiredAlert=__expiredAlert;
@property(readonly, nonatomic) UIAlertController *signInAlert; // @synthesize signInAlert=__signInAlert;
- (void)resetSignInProperties;
- (void)saveToModel:(id)arg1;
- (void)loadFromModel:(id)arg1;
- (void)updateLastUserTo:(id)arg1;
- (void)updateLastSignInDateTo:(id)arg1;
- (void)updateLastAuthDateTo:(id)arg1;
- (void)postNotification:(id)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic) _Bool isAmazonUser;
@property(readonly, nonatomic) _Bool isFacebookUser;
- (id)setPrivacyPolicyUpdateAccepted;
- (id)getPrivacyPolicyUpdateAcceptanceStatus;
- (void)markPrivacyPolicyUpdateCheckAttempted;
- (_Bool)canAttemptPrivacyPolicyUpdateCheck;
- (void)showAlertForErrorCode:(long long)arg1;
- (void)handleAccessDenied:(long long)arg1;
- (void)handleGetContentResolvedWithResult:(id)arg1;
- (id)deferredForGetContentOperationForTrackId:(id)arg1 station:(id)arg2 playbackSessionId:(id)arg3;
- (id)restRequestOperation:(id)arg1 onQueue:(id)arg2;
- (id)deviceId;
- (void)handleSignOutRejectedWithPromise:(id)arg1 rejected:(id)arg2;
- (void)handleSignOutResolvedWithPromise:(id)arg1 result:(id)arg2;
- (id)deferredForSignOutOperationWithToken:(id)arg1 deviceGuid:(id)arg2;
- (id)promiseForSignOutWithToken:(id)arg1;
- (id)userInfoForSignInErrorFailure:(id)arg1;
- (id)userInfoForSignInFailure;
- (id)userInfoForSignInSuccessWithAccountChanged:(_Bool)arg1 isAutomatic:(_Bool)arg2;
- (id)userInfoForSignInSuccessWithIsAutomatic:(_Bool)arg1;
- (_Bool)handleSignInResponse:(id)arg1 login:(id)arg2 password:(id)arg3;
- (void)parseEntitlements:(id)arg1;
- (id)handleSignInRejectedWithPromiseRejected:(id)arg1;
- (id)handleSignInResolvedWithResponse:(id)arg1 login:(id)arg2 password:(id)arg3 method:(long long)arg4 allowsNonMobile:(_Bool)arg5 options:(long long)arg6 postNotifications:(_Bool)arg7 isAutomatic:(_Bool)arg8;
- (id)handleSignInResolvedWithResponse:(id)arg1 login:(id)arg2 password:(id)arg3 method:(long long)arg4 allowsNonMobile:(_Bool)arg5 options:(long long)arg6 isAutomatic:(_Bool)arg7;
- (id)retrySignInWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 deauthDeviceId:(id)arg4 options:(long long)arg5;
- (id)oldestRegisteredDeviceIdFromArray:(id)arg1;
- (id)deauthCandidate;
@property(readonly, nonatomic) _Bool hasBeenEligibleForFrictionless;
- (id)deferredForAccountDetection;
- (id)deferredForSignInOperationWithToken:(id)arg1;
- (id)deferredForSignInOperationWithLogin:(id)arg1 password:(id)arg2;
- (id)promiseForSignInWithToken:(id)arg1 isAutomatic:(_Bool)arg2;
- (id)promiseForSignInWithToken:(id)arg1;
- (id)promiseForSignInWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 allowsNonMobile:(_Bool)arg4 options:(long long)arg5 postNotifications:(_Bool)arg6 isAutomatic:(_Bool)arg7;
- (id)promiseForSignInWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 allowsNonMobile:(_Bool)arg4 options:(long long)arg5 isAutomatic:(_Bool)arg6;
- (id)promiseForSignInWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 allowsNonMobile:(_Bool)arg4 options:(long long)arg5;
@property(readonly, nonatomic) _Bool shouldShowUpsellBanners;
@property(readonly, nonatomic) _Bool shouldShowUpsellFullScreen;
@property(readonly, nonatomic) NSString *billingPartnerId;
@property(readonly, nonatomic) long long billingPartner;
@property(readonly, nonatomic) unsigned long long freePlaysRemaining; // @synthesize freePlaysRemaining=__freePlaysRemaining;
@property(readonly, nonatomic) _Bool shouldPermitUnlimitedRadioSkipping; // @dynamic shouldPermitUnlimitedRadioSkipping;
@property(readonly, nonatomic) _Bool trialRollover; // @synthesize trialRollover=__trialRollover;
@property(readonly, nonatomic) _Bool hasStreamingRights;
@property(readonly, nonatomic) unsigned long long freeTrialCeilingDaysRemaining;
@property(readonly, nonatomic) double freeTrialTimeRemaining; // @synthesize freeTrialTimeRemaining=__freeTrialTimeRemaining;
@property(readonly, nonatomic) _Bool trialTerminationDateExceed;
@property(readonly, nonatomic) _Bool signedIn; // @dynamic signedIn;
- (_Bool)validCredentials;
- (void)saveAppState:(id)arg1;
- (void)saveAppStateWithRepeatMode:(long long)arg1 shouldRecoverBackToEP:(_Bool)arg2;
- (void)saveAppStateWithMenuItem:(long long)arg1;
- (void)saveAppStateWithPlayContext:(id)arg1;
@property(nonatomic) _Bool isSafeToRestoreAppState;
@property(readonly, nonatomic) RHAppState *appState;
- (void)resetAppForModeChange:(long long)arg1;
@property(readonly, nonatomic) _Bool supportsPlaybackOfDownloads;
@property(readonly, nonatomic) _Bool supportsOfflinePlayback; // @synthesize supportsOfflinePlayback=__supportsOfflinePlayback;
- (void)disableForceOfflineMode;
- (void)resetCredentials;
- (id)memberCredentials;
@property(readonly, nonatomic) RHMemberCredentials *oauthServiceMemberCredentials;
- (void)signOutForced:(_Bool)arg1;
- (void)signOut;
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2 buttons:(id)arg3;
- (id)unlinkAccountWithMethod:(long long)arg1;
- (id)safeLinkAccountWithMethod:(long long)arg1 accessToken:(id)arg2;
- (id)linkAccountWithMethod:(long long)arg1 accessToken:(id)arg2;
- (void)handleSignInRejected:(id)arg1;
- (id)signInCompleteProcessWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 options:(long long)arg4 isAutomatic:(_Bool)arg5;
- (id)signInCompleteProcessWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 options:(long long)arg4;
- (id)signInWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 allowsNonMobile:(_Bool)arg4 options:(long long)arg5 postNotifications:(_Bool)arg6 isAutomatic:(_Bool)arg7;
- (id)signInWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 allowsNonMobile:(_Bool)arg4 options:(long long)arg5 isAutomatic:(_Bool)arg6;
- (id)signInWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 allowsNonMobile:(_Bool)arg4 options:(long long)arg5;
- (id)signInWithLogin:(id)arg1 password:(id)arg2 method:(long long)arg3 options:(long long)arg4;
- (id)signInWithStoredCredentialsAllowsNonMobile:(_Bool)arg1 isAutomatic:(_Bool)arg2;
- (id)signInWithStoredCredentialsAllowsNonMobile:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isChangingCredentials;
- (id)sendEmailTo:(id)arg1 token:(id)arg2;
- (id)deferredUpdateAccountWithEmail:(id)arg1 password:(id)arg2;
- (id)getAnonymousAccount:(id)arg1 referralModel:(id)arg2;
@property(readonly, nonatomic) _Bool forceOfflineModeSelected;
@property(readonly, nonatomic) _Bool downloadOverWiFiSelected;
- (void)ensureRestorationProcessDoesntRepeatCrash;
- (void)dealloc;
@property(readonly, nonatomic) NSOperationQueue *accountQueue;
- (void)setupObservers;
- (id)initWithUserModel:(id)arg1 timeService:(id)arg2 abTestingService:(id)arg3 equalizerService:(id)arg4 session:(id)arg5;
@property(readonly, nonatomic) _Bool isEligibleForCarMode;
@property(readonly, nonatomic) _Bool isEligibleForKidsMode;
@property(readonly, nonatomic) _Bool isEligibleForAnonymousLogin;
@property(readonly, nonatomic) _Bool accountIsPayable; // @synthesize accountIsPayable=__accountIsPayable;
@property(readonly, nonatomic) _Bool isFrictionlessTrialAccount;
- (id)notificationCenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

