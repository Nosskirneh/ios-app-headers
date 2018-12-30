//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AuthenticationLoader : Loader
{
    _Bool _shouldSendMusicLanguage;
    _Bool _download3G;
    _Bool _offlineAllowed;
    _Bool _isLogoff;
    _Bool _isChangeFbPublish;
    _Bool _showPurchaseButton;
    _Bool _adShowWhyAdsButton;
    _Bool _isNoAd;
    _Bool _forceupdate;
    _Bool _isAutoSubmitLogs;
    _Bool _isExpired;
    _Bool _reauthenticate;
    _Bool _isNewUser;
    _Bool _hideActivationCodeField;
    _Bool _preventAdToShow;
    _Bool _lastLoginOnDifferentDevice;
    _Bool _allowAutoDownloads;
    _Bool _allowVideoAdOn3G;
    _Bool _canDisplaySongTitleInArabic;
    _Bool _autoSetRBT;
    _Bool _isOfflineRecOfflineOnly;
    NSString *_facebookId;
    NSString *_facebookToken;
    NSString *_twitterID;
    NSString *_twitterToken;
    NSString *_twitterSecret;
    NSNumber *_twitterFollowersCount;
    NSString *_twitterHandle;
    NSString *_twitterEmail;
    NSString *_authMethod;
    NSString *_username;
    NSString *_password;
    NSString *_userCode;
    NSString *_userID;
    NSString *_countryCode;
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    NSString *_versionString;
    double _pingInterval;
    unsigned long long _offlineSongs;
    double _offlineTimeoutInterval;
    NSString *_lastRelease;
    NSString *_upgradeUrl;
    NSString *_userDisplayName;
    NSString *_userGender;
    NSString *_userAge;
    NSString *_userProfilePicURL;
    NSString *_facebookPermissions;
    NSString *_facebookEmail;
    NSString *_facebookFname;
    NSString *_facebookLname;
    NSString *_facebookShareDisplay;
    NSString *_facebookShareId;
    NSString *_facebookPublish;
    NSString *_lastfmPublish;
    NSString *_lastfmUsername;
    NSString *_urbanAirshipTags;
    NSDictionary *_analyticsTags;
    long long _surpriseMeQueueType;
    NSString *_message;
    NSString *_deeplinkAction;
    NSString *_purchaseOptionsUrl;
    NSString *_plan;
    NSString *_adImage;
    NSString *_adUrl;
    NSString *_interstTag;
    NSString *_mpuAdTag;
    NSString *_offlineMessagesHash;
    NSString *_tooltiphash;
    NSString *_dldAdTag;
    NSString *_partnerLogoUrl;
    NSDictionary *_extraParamsDict;
    NSString *_offlineReportUrl;
    NSString *_failedPlayReportUrl;
    unsigned long long _adSecsCounter;
    unsigned long long _freeDownloadAccess;
    NSString *_urbanAirshipAlias;
    NSString *_anId;
    NSString *_adTag;
    NSString *_loginNewMethod;
    NSString *_loginNewPass;
    NSString *_loginNewUsername;
    NSString *_adPressTag;
    unsigned long long _adFrequency;
    unsigned long long _adPressFrequency;
    NSString *_leaderboardAdTag;
    NSArray *_reportOnlyOnce;
    NSString *_artWorkLocation;
    NSDictionary *_adTagParams;
    NSString *_interstitialAdSizes;
    NSString *_mpuAdSizes;
    NSString *_msidn;
    long long _musicLanguage;
    NSString *_RBTBrand;
    NSString *_RBTCountryCode;
    NSString *_RBTPhone;
    NSString *_RBTImage;
    NSString *_RBTPrice;
    NSString *_RBTExtra;
    NSString *_offlineRecommendationsHash;
    double _timestampToUse;
}

@property double timestampToUse; // @synthesize timestampToUse=_timestampToUse;
@property _Bool isOfflineRecOfflineOnly; // @synthesize isOfflineRecOfflineOnly=_isOfflineRecOfflineOnly;
@property(copy) NSString *offlineRecommendationsHash; // @synthesize offlineRecommendationsHash=_offlineRecommendationsHash;
@property(copy) NSString *RBTExtra; // @synthesize RBTExtra=_RBTExtra;
@property _Bool autoSetRBT; // @synthesize autoSetRBT=_autoSetRBT;
@property(copy) NSString *RBTPrice; // @synthesize RBTPrice=_RBTPrice;
@property(copy) NSString *RBTImage; // @synthesize RBTImage=_RBTImage;
@property(copy) NSString *RBTPhone; // @synthesize RBTPhone=_RBTPhone;
@property(copy) NSString *RBTCountryCode; // @synthesize RBTCountryCode=_RBTCountryCode;
@property(copy) NSString *RBTBrand; // @synthesize RBTBrand=_RBTBrand;
@property _Bool canDisplaySongTitleInArabic; // @synthesize canDisplaySongTitleInArabic=_canDisplaySongTitleInArabic;
@property long long musicLanguage; // @synthesize musicLanguage=_musicLanguage;
@property(retain, nonatomic) NSString *msidn; // @synthesize msidn=_msidn;
@property(retain, nonatomic) NSString *mpuAdSizes; // @synthesize mpuAdSizes=_mpuAdSizes;
@property(retain, nonatomic) NSString *interstitialAdSizes; // @synthesize interstitialAdSizes=_interstitialAdSizes;
@property(nonatomic) _Bool allowVideoAdOn3G; // @synthesize allowVideoAdOn3G=_allowVideoAdOn3G;
@property(copy) NSDictionary *adTagParams; // @synthesize adTagParams=_adTagParams;
@property _Bool allowAutoDownloads; // @synthesize allowAutoDownloads=_allowAutoDownloads;
@property _Bool lastLoginOnDifferentDevice; // @synthesize lastLoginOnDifferentDevice=_lastLoginOnDifferentDevice;
@property(copy) NSString *artWorkLocation; // @synthesize artWorkLocation=_artWorkLocation;
@property(copy) NSArray *reportOnlyOnce; // @synthesize reportOnlyOnce=_reportOnlyOnce;
@property(readonly) _Bool preventAdToShow; // @synthesize preventAdToShow=_preventAdToShow;
@property _Bool hideActivationCodeField; // @synthesize hideActivationCodeField=_hideActivationCodeField;
@property _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(copy) NSString *leaderboardAdTag; // @synthesize leaderboardAdTag=_leaderboardAdTag;
@property unsigned long long adPressFrequency; // @synthesize adPressFrequency=_adPressFrequency;
@property unsigned long long adFrequency; // @synthesize adFrequency=_adFrequency;
@property(copy) NSString *adPressTag; // @synthesize adPressTag=_adPressTag;
@property(copy) NSString *loginNewUsername; // @synthesize loginNewUsername=_loginNewUsername;
@property(copy) NSString *loginNewPass; // @synthesize loginNewPass=_loginNewPass;
@property(copy) NSString *loginNewMethod; // @synthesize loginNewMethod=_loginNewMethod;
@property(copy) NSString *adTag; // @synthesize adTag=_adTag;
@property(nonatomic) _Bool reauthenticate; // @synthesize reauthenticate=_reauthenticate;
@property(copy) NSString *anId; // @synthesize anId=_anId;
@property _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(copy) NSString *urbanAirshipAlias; // @synthesize urbanAirshipAlias=_urbanAirshipAlias;
@property unsigned long long freeDownloadAccess; // @synthesize freeDownloadAccess=_freeDownloadAccess;
@property unsigned long long adSecsCounter; // @synthesize adSecsCounter=_adSecsCounter;
@property _Bool isAutoSubmitLogs; // @synthesize isAutoSubmitLogs=_isAutoSubmitLogs;
@property _Bool forceupdate; // @synthesize forceupdate=_forceupdate;
@property _Bool isNoAd; // @synthesize isNoAd=_isNoAd;
@property(copy) NSString *failedPlayReportUrl; // @synthesize failedPlayReportUrl=_failedPlayReportUrl;
@property(copy) NSString *offlineReportUrl; // @synthesize offlineReportUrl=_offlineReportUrl;
@property(retain, nonatomic) NSDictionary *extraParamsDict; // @synthesize extraParamsDict=_extraParamsDict;
@property(copy) NSString *partnerLogoUrl; // @synthesize partnerLogoUrl=_partnerLogoUrl;
@property _Bool adShowWhyAdsButton; // @synthesize adShowWhyAdsButton=_adShowWhyAdsButton;
@property(copy) NSString *dldAdTag; // @synthesize dldAdTag=_dldAdTag;
@property(copy) NSString *tooltiphash; // @synthesize tooltiphash=_tooltiphash;
@property(copy) NSString *offlineMessagesHash; // @synthesize offlineMessagesHash=_offlineMessagesHash;
@property(copy) NSString *mpuAdTag; // @synthesize mpuAdTag=_mpuAdTag;
@property(copy) NSString *interstTag; // @synthesize interstTag=_interstTag;
@property(copy) NSString *adUrl; // @synthesize adUrl=_adUrl;
@property(copy) NSString *adImage; // @synthesize adImage=_adImage;
@property(copy) NSString *plan; // @synthesize plan=_plan;
@property(copy) NSString *purchaseOptionsUrl; // @synthesize purchaseOptionsUrl=_purchaseOptionsUrl;
@property _Bool showPurchaseButton; // @synthesize showPurchaseButton=_showPurchaseButton;
@property(copy) NSString *deeplinkAction; // @synthesize deeplinkAction=_deeplinkAction;
@property(copy) NSString *message; // @synthesize message=_message;
@property long long surpriseMeQueueType; // @synthesize surpriseMeQueueType=_surpriseMeQueueType;
@property(retain) NSDictionary *analyticsTags; // @synthesize analyticsTags=_analyticsTags;
@property(retain) NSString *urbanAirshipTags; // @synthesize urbanAirshipTags=_urbanAirshipTags;
@property(copy) NSString *lastfmUsername; // @synthesize lastfmUsername=_lastfmUsername;
@property(copy) NSString *lastfmPublish; // @synthesize lastfmPublish=_lastfmPublish;
@property _Bool isChangeFbPublish; // @synthesize isChangeFbPublish=_isChangeFbPublish;
@property(copy) NSString *facebookPublish; // @synthesize facebookPublish=_facebookPublish;
@property(copy) NSString *facebookShareId; // @synthesize facebookShareId=_facebookShareId;
@property(copy) NSString *facebookShareDisplay; // @synthesize facebookShareDisplay=_facebookShareDisplay;
@property(copy) NSString *facebookLname; // @synthesize facebookLname=_facebookLname;
@property(copy) NSString *facebookFname; // @synthesize facebookFname=_facebookFname;
@property(copy) NSString *facebookEmail; // @synthesize facebookEmail=_facebookEmail;
@property(copy) NSString *facebookPermissions; // @synthesize facebookPermissions=_facebookPermissions;
@property(copy) NSString *userProfilePicURL; // @synthesize userProfilePicURL=_userProfilePicURL;
@property(copy) NSString *userAge; // @synthesize userAge=_userAge;
@property(copy) NSString *userGender; // @synthesize userGender=_userGender;
@property(copy) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property _Bool isLogoff; // @synthesize isLogoff=_isLogoff;
@property(copy) NSString *upgradeUrl; // @synthesize upgradeUrl=_upgradeUrl;
@property(copy) NSString *lastRelease; // @synthesize lastRelease=_lastRelease;
@property double offlineTimeoutInterval; // @synthesize offlineTimeoutInterval=_offlineTimeoutInterval;
@property unsigned long long offlineSongs; // @synthesize offlineSongs=_offlineSongs;
@property _Bool offlineAllowed; // @synthesize offlineAllowed=_offlineAllowed;
@property _Bool download3G; // @synthesize download3G=_download3G;
@property double pingInterval; // @synthesize pingInterval=_pingInterval;
@property _Bool shouldSendMusicLanguage; // @synthesize shouldSendMusicLanguage=_shouldSendMusicLanguage;
@property(copy) NSString *versionString; // @synthesize versionString=_versionString;
@property unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(copy) NSString *userCode; // @synthesize userCode=_userCode;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *authMethod; // @synthesize authMethod=_authMethod;
@property(copy) NSString *twitterEmail; // @synthesize twitterEmail=_twitterEmail;
@property(copy) NSString *twitterHandle; // @synthesize twitterHandle=_twitterHandle;
@property(copy) NSNumber *twitterFollowersCount; // @synthesize twitterFollowersCount=_twitterFollowersCount;
@property(copy) NSString *twitterSecret; // @synthesize twitterSecret=_twitterSecret;
@property(copy) NSString *twitterToken; // @synthesize twitterToken=_twitterToken;
@property(copy) NSString *twitterID; // @synthesize twitterID=_twitterID;
@property(copy) NSString *facebookToken; // @synthesize facebookToken=_facebookToken;
@property(copy) NSString *facebookId; // @synthesize facebookId=_facebookId;
- (void).cxx_destruct;
- (_Bool)checkForVPNConnectivity;
- (double)connectionTimeout;
- (_Bool)shouldLogPostData;
- (unsigned long long)encType;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (id)getListOfAppsInstalled;
- (id)initWithDelegate:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2 userCode:(id)arg3 userID:(id)arg4;
- (id)initWithDelegate:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2 username:(id)arg3 password:(id)arg4;
- (id)initWithDelegate:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2 twitterID:(id)arg3 twitterEmail:(id)arg4 twitterHandle:(id)arg5 twitterToken:(id)arg6 twitterSecret:(id)arg7 twitterFollowersCount:(id)arg8;
- (id)initWithDelegate:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2 facebookId:(id)arg3 facebookToken:(id)arg4;
- (int)type;

@end
