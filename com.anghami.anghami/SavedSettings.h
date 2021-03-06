//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANGUserDefaultsMemCache, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSTimer;

@interface SavedSettings : NSObject
{
    NSString *coverArtUrlString;
    _Bool isScreenSleepEnabled;
    float gainMultiplier;
    unsigned long long audioEngineBufferNumberOfSeconds;
    _Bool isLastfmScrobblingEnabled;
    _Bool isFacebookSharingEnabled;
    NSArray *facebookFriends;
    _Bool isHideAds;
    double crossfadeInterval;
    _Bool isPlaying;
    long long bitRate;
    unsigned long long byteOffset;
    double secondsOffset;
    _Bool isRecover;
    NSString *_sessionId;
    unsigned long long _anghamiConnectionState;
    NSNumber *_numberOfOfflineSongs;
    ANGUserDefaultsMemCache *userDefaults;
    _Bool _isOfflineMode;
    _Bool _isSettingsShowing;
    _Bool _isShowPurchaseButton;
    _Bool _isSignupClickedInBlackAlert;
    _Bool _isAmplitudeOpenApp;
    _Bool _showLocationRequestOnLogin;
    _Bool _showedLoginLikeAlert;
    _Bool _isShowingOnboarding;
    _Bool _showedLoginFollowAlert;
    _Bool _isOnCarplay;
    _Bool _didCloseCrashAlertThisSession;
    _Bool _playQueuePlayEventPending;
    int _oldPlanType;
    NSString *redirectUrlString;
    unsigned long long _lastDownloadSpeedKbps;
    NSMutableSet *_seenPlayerVideosIDs;
    NSString *_systemVersion;
    NSString *_movingActivity;
    NSDate *_didWatchVideoAdForSkipsStamp;
    NSTimer *_sleepTimer;
    NSString *_adPressTag;
    unsigned long long _songsPlayedSinceAd;
    unsigned long long _songsSkippedSinceAd;
    NSDate *_lastAudioAdDate;
    NSDate *_lastDisplayAdDate;
    long long _realmStartupCrashes;
    NSString *_getDownloadSongID;
    long long _musicLibraryCount;
    NSString *_musicLibraryAllowedSource;
    NSArray *_unreadTickets;
}

+ (void)destroySharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *unreadTickets; // @synthesize unreadTickets=_unreadTickets;
@property _Bool playQueuePlayEventPending; // @synthesize playQueuePlayEventPending=_playQueuePlayEventPending;
@property(retain, nonatomic) NSString *musicLibraryAllowedSource; // @synthesize musicLibraryAllowedSource=_musicLibraryAllowedSource;
@property(nonatomic) long long musicLibraryCount; // @synthesize musicLibraryCount=_musicLibraryCount;
@property(retain, nonatomic) NSString *getDownloadSongID; // @synthesize getDownloadSongID=_getDownloadSongID;
@property(nonatomic) long long realmStartupCrashes; // @synthesize realmStartupCrashes=_realmStartupCrashes;
@property _Bool didCloseCrashAlertThisSession; // @synthesize didCloseCrashAlertThisSession=_didCloseCrashAlertThisSession;
@property _Bool isOnCarplay; // @synthesize isOnCarplay=_isOnCarplay;
@property(retain, nonatomic) NSDate *lastDisplayAdDate; // @synthesize lastDisplayAdDate=_lastDisplayAdDate;
@property(retain, nonatomic) NSDate *lastAudioAdDate; // @synthesize lastAudioAdDate=_lastAudioAdDate;
@property(nonatomic) _Bool showedLoginFollowAlert; // @synthesize showedLoginFollowAlert=_showedLoginFollowAlert;
@property(nonatomic) _Bool isShowingOnboarding; // @synthesize isShowingOnboarding=_isShowingOnboarding;
@property(nonatomic) _Bool showedLoginLikeAlert; // @synthesize showedLoginLikeAlert=_showedLoginLikeAlert;
@property _Bool showLocationRequestOnLogin; // @synthesize showLocationRequestOnLogin=_showLocationRequestOnLogin;
@property(nonatomic) _Bool isAmplitudeOpenApp; // @synthesize isAmplitudeOpenApp=_isAmplitudeOpenApp;
@property(nonatomic) unsigned long long songsSkippedSinceAd; // @synthesize songsSkippedSinceAd=_songsSkippedSinceAd;
@property unsigned long long songsPlayedSinceAd; // @synthesize songsPlayedSinceAd=_songsPlayedSinceAd;
@property(copy) NSString *adPressTag; // @synthesize adPressTag=_adPressTag;
@property(retain) NSTimer *sleepTimer; // @synthesize sleepTimer=_sleepTimer;
@property(retain, nonatomic) NSDate *didWatchVideoAdForSkipsStamp; // @synthesize didWatchVideoAdForSkipsStamp=_didWatchVideoAdForSkipsStamp;
@property _Bool isSignupClickedInBlackAlert; // @synthesize isSignupClickedInBlackAlert=_isSignupClickedInBlackAlert;
@property int oldPlanType; // @synthesize oldPlanType=_oldPlanType;
@property(copy) NSString *movingActivity; // @synthesize movingActivity=_movingActivity;
@property _Bool isShowPurchaseButton; // @synthesize isShowPurchaseButton=_isShowPurchaseButton;
@property(copy) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property _Bool isSettingsShowing; // @synthesize isSettingsShowing=_isSettingsShowing;
@property(retain, nonatomic) NSMutableSet *seenPlayerVideosIDs; // @synthesize seenPlayerVideosIDs=_seenPlayerVideosIDs;
@property unsigned long long lastDownloadSpeedKbps; // @synthesize lastDownloadSpeedKbps=_lastDownloadSpeedKbps;
@property(copy) NSString *redirectUrlString; // @synthesize redirectUrlString;
- (void).cxx_destruct;
@property _Bool didUserTryCreateMixtapeFriends;
@property(retain, nonatomic) NSArray *suggestedShortcuts;
@property(retain, nonatomic) NSDate *lastBackoffTime;
@property(nonatomic) long long chapterReactionBackoffTimer;
@property(retain, nonatomic) NSArray *seenFollowRequestIds;
@property unsigned long long lastSelectedRadarTab;
@property(nonatomic) _Bool hideRadar;
- (void)markTicketRead:(id)arg1;
- (void)addUnreadTicket:(id)arg1;
@property(retain, nonatomic) NSDictionary *ticketsCommentsCount;
@property(retain, nonatomic) NSString *fallbackFAQ;
@property(copy) NSString *mobileNetworkCode;
@property(copy) NSString *mobileCountryCode;
@property(nonatomic) _Bool hideArtistsMusiclang;
@property(nonatomic) _Bool isActiveOnMultipleDevices;
@property(retain, nonatomic) NSString *playOnceDialog;
@property(retain, nonatomic) NSNumber *playOncePerInSeconds;
@property(retain, nonatomic) NSNumber *percentPlayOnce;
@property(retain, nonatomic) NSNumber *secondsTillRecentlyPlayed;
@property(retain, nonatomic) NSString *responseKey;
@property(retain, nonatomic) NSString *requestKey;
@property(nonatomic) unsigned long long playerRestrictions;
@property(retain, nonatomic) NSArray *plusFeatureImagesArray;
@property _Bool enableNightMode;
@property long long nativeAdStart;
@property long long videoAdStart;
@property long long audioAdStart;
@property(nonatomic) _Bool didOpenWatchApp;
@property(retain, nonatomic) NSArray *watchDownloadedPlaylists;
- (void)setPlayQueueShuffleReportedHash:(id)arg1;
- (id)playQueueShuffleReportedHash;
@property(nonatomic) unsigned long long playQueueFeatureState;
@property(nonatomic) _Bool disableBackgroundPlayerVideo;
@property(nonatomic) _Bool disableImagesDropInPlayer;
@property _Bool newSearch;
@property(retain, nonatomic) NSString *audioAdCloseButtonText;
@property(retain, nonatomic) NSString *repeatDeeplink;
@property(retain, nonatomic) NSString *previousButtonDeeplink;
@property(retain, nonatomic) NSString *removeAdDeeplink;
@property(retain, nonatomic) NSString *lyricsDeeplink;
@property(retain, nonatomic) NSString *scrubDeeplink;
@property(retain, nonatomic) NSString *userPhoneNumber;
@property(retain, nonatomic) NSString *userProfileImageSpecURL;
@property _Bool pendingMusicLibraryUpload;
@property(retain, nonatomic) NSDate *myMusicLastTappedDate;
@property(nonatomic) _Bool didCloseOnRetryFromDevices;
@property(retain, nonatomic) NSDate *dateUpdatedToNewMyMusic;
@property(retain, nonatomic) NSDate *dateNoSongsFoundNewMyMusic;
@property(copy) NSNumber *lookaheadRestartSeconds;
@property(nonatomic) _Bool noAudioInBackground;
@property(nonatomic) _Bool noVideoInbackground;
@property(copy) NSNumber *lookaheadPreloadSeconds;
@property(copy) NSNumber *lookaheadSecondsWifi;
@property(copy) NSNumber *lookaheadSeconds3G;
@property long long shownSkipDialogs;
- (long long)realmLogsStartupCrashes;
- (void)setRealmLogsStartupCrashes:(long long)arg1;
@property(nonatomic) long long realmPlaylistStartupCrashes;
@property(retain, nonatomic) NSArray *customEqValues;
@property(retain, nonatomic) NSArray *eqValues;
@property(retain, nonatomic) NSString *eqPreset;
@property(retain) NSString *tooltipsHash;
@property(retain, nonatomic) NSString *offlineMessagesHash;
@property(nonatomic) double minSkipTime;
@property(nonatomic) _Bool skipModeRelated;
@property(nonatomic) _Bool skipsAllowQueueChange;
@property(nonatomic) double searchEdgeCacheTTL;
@property(nonatomic) double searchEdgeDelay;
@property(nonatomic) long long inviteeDuration;
@property(nonatomic) long long inviteNumFriends;
@property(nonatomic) long long inviteNumDays;
@property(retain, nonatomic) NSString *adServerType;
@property(nonatomic) double audioAdTTL;
@property(nonatomic) _Bool isMusicLibraryPending;
@property(nonatomic) _Bool prohibitSyncForMusicLibrary;
@property(nonatomic) _Bool didAskForMusicLibraryPermission;
@property(retain, nonatomic) NSString *urbanAirshipAlias;
@property(retain, nonatomic) NSString *urbanAirshipTags;
@property(nonatomic) double minTimeBetweenAds;
@property(nonatomic) double minTimeBetweenDisplayAds;
@property(nonatomic) double minTimeBetweenAudioAds;
@property(nonatomic) _Bool hideUserVideoComments;
@property(copy) NSString *userVideoConclusionImageLocation;
@property(copy) NSString *userVideoShareLogoLocation;
@property(copy) NSString *leaderboardAdTag;
@property unsigned long long adPressFrequency;
@property unsigned long long adFrequency;
@property(nonatomic) double pingInterval;
@property(nonatomic) _Bool didImportOldSpotlightData;
@property(nonatomic) _Bool didImportOldPlaylists;
@property(nonatomic) _Bool lyricsEnabled;
@property(retain, nonatomic) NSString *mpuSizes;
@property(retain, nonatomic) NSString *interstitialSizes;
@property _Bool didShowUserVideoRecordTooltip;
@property(retain, nonatomic) NSArray *watchedUserVideosIds;
@property(copy) NSString *userVideoTutorialId;
@property _Bool enableUserVideoLikes;
@property _Bool userVideoAllowed;
- (id)logsPathLocation;
@property _Bool allowAutoDownloads;
@property _Bool downloadSyncingEnabled;
@property(retain, nonatomic) NSArray *pendingUserVideosUpload;
@property(copy) NSArray *cachedLibrarySections;
@property(copy, nonatomic) NSString *urlString;
- (void)setup;
@property(retain, nonatomic) NSString *planMessage;
@property(retain, nonatomic) NSDictionary *blueBarGroup;
@property(retain, nonatomic) NSDictionary *questionVerifyPhoneNumber;
@property(retain, nonatomic) NSDictionary *questionSettings;
@property _Bool disableCommunication;
@property(nonatomic) _Bool wasAppInBackground;
@property(nonatomic) _Bool wasAppPlayingOnLastLaunch;
@property(nonatomic) long long systemUptime;
@property(readonly, nonatomic) long long uptime;
@property(nonatomic) _Bool wasAppTerminatedByUser;
@property(nonatomic) _Bool wasExitCalledOnLastLaunch;
@property(nonatomic) _Bool allowVideoAdsOn3G;
- (void)clearUserData;
@property(readonly) int currentMaxBitrate;
@property(readonly, nonatomic) NSDate *latestVideoSizeUsedDate;
@property(nonatomic) struct CGSize latestVideoSizeUsed;
@property(readonly, nonatomic) NSDate *latestSpeedMeasurementDate;
@property(nonatomic) double latestSpeedMeasurement;
@property(nonatomic) double userVideoLength;
- (_Bool)isOnWifi;
@property _Bool autoCoverArtGenerationEnabled;
@property(copy) NSString *customHeaderImageURL;
- (_Bool)playlistSortedAlphabetically;
@property _Bool playlistsShowDownloadedOnly;
@property(readonly) _Bool playlistsSortedAlphabetically;
@property long long playlistsSelectedTab;
@property _Bool likesShowDownloadedOnly;
@property _Bool likesSortedAlphabetically;
@property _Bool likedAlbumShowDownloadedOnly;
@property long long likedAlbumSelectedTab;
@property long long likesSelectedTab;
@property _Bool downloadShowDownloadedPlaylists;
@property _Bool downloadSortedAlphabetically;
@property long long downloadSelectedTab;
@property _Bool isRadioRestrictionsOnSkip;
@property(retain) NSNumber *secondsToSkipAds;
@property(retain) NSNumber *minSkipAdsLength;
@property(nonatomic) double skipTimeThreshold;
@property(nonatomic) _Bool disableSkipForTimeDiff;
@property(retain) NSDate *skipStamp;
@property unsigned long long radioSkipsCount;
@property unsigned long long skipsCount;
@property(retain) NSNumber *radioAllowedSkips;
@property(retain) NSNumber *allowedSkips;
@property long long playMode;
@property _Bool explicitOptionChoiceRefused;
@property _Bool disableAutoPlayWhenConnected;
@property _Bool infinitePlayModeToggle;
@property _Bool shouldHideExplicitContent;
@property _Bool didSendPreloginOnce;
@property(copy) NSString *RBTExtra;
@property _Bool autoSetRBT;
@property(copy) NSString *RBTPrice;
@property(readonly) NSString *RBTImagePath;
@property(copy) NSString *RBTImage;
- (void)refreshRBTImage;
- (void)writeRBTImageWithData:(id)arg1 path:(id)arg2;
@property(copy) NSString *RBTPhone;
@property(copy) NSString *RBTCountryCode;
@property(copy) NSString *RBTBrand;
@property(nonatomic) _Bool showedMiniplayerVideoTip;
@property(retain, nonatomic) NSDictionary *serverTooltips;
@property(readonly) unsigned long long tooltipShownCount;
- (void)setTooltipShownCount:(unsigned long long)arg1;
@property(copy) NSDate *tooltipTimeStamp;
- (_Bool)canShowTooltip;
@property(copy) NSSet *dismissedTooltips;
- (void)recordDismissTooltip:(long long)arg1;
- (void)recordDismissTooltipObject:(id)arg1;
@property _Bool userHasPlayedMusicThisSession;
@property(nonatomic) int planTypeWatch;
@property _Bool hideYoutubePlaylistsImport;
@property _Bool hideSpotifyPlaylistsImport;
@property _Bool hideActivationCodeField;
@property _Bool isLoggedIn;
@property(nonatomic) _Bool disablePIPOnTV;
@property _Bool cacheQueuePaused;
@property(retain, nonatomic) NSString *countryCode;
@property int anghamiConnectionState;
@property _Bool didRegisterForPushNotifications;
@property(copy) NSString *pushdeviceId;
@property unsigned long long albumsSortOrder;
@property unsigned long long playlistsSortOrder;
@property long long followArtistMessageCounter;
@property long long followPlaylistMessageCounter;
@property _Bool didReportPushNotificationsStatus;
@property _Bool didAskUserForMotionActivity;
@property(nonatomic) _Bool didShowCustomPushNotificationsAlert;
@property _Bool didAskUserForPushNotifications;
@property _Bool isExpired;
@property _Bool showEmailInSocialize;
@property _Bool isDeleteDownloadAlertDisplayed;
@property _Bool timeUpDidLikeFacebook;
@property(copy) NSString *lastHomepageSavedSource;
@property(copy) NSString *timeUpDidFollowTwitterUsername;
@property _Bool timeUpDidFollowTwitter;
@property unsigned long long shortSessionCount;
@property(retain) NSDate *lastLaunchDate;
@property(retain) NSDate *lastSetScheduledGift;
@property(retain) NSDate *facebookPublishLastAskDate;
@property long long numberOfAutoPlays;
@property long long lastAskedForReview;
@property(retain, nonatomic) NSArray *rawHomepageData;
@property unsigned long long lastAccessedMyMusicSection;
@property(retain, nonatomic) NSMutableDictionary *homePageSectionsLastUpdates;
@property long long lastHomepageUpdate;
@property unsigned long long freeDownloadAccess;
@property(copy) NSSet *homeSupportedLanguagesSet;
@property _Bool reloadHomeOnLaunchForSongTitleLangChange;
@property _Bool canDisplaySongTitleInArabic;
@property(retain, nonatomic) NSDictionary *webSocketInfo;
@property(retain, nonatomic) NSDictionary *sleepTimerDict;
@property(retain, nonatomic) NSDictionary *installationInfo;
@property(retain, nonatomic) NSDictionary *preloginProperties;
@property unsigned long long homeLastSelectedIndex;
@property unsigned long long adSecsCounter;
@property double crossfadeInterval;
@property _Bool isUnfinishedPurchase;
@property _Bool showScreenTouches;
@property _Bool isFirstSignIn;
@property _Bool isFollowOnTwitterShown;
@property _Bool isMenuPeeked;
@property(copy) NSArray *nativeHomeClosedMessageIds;
@property _Bool isHideAds;
@property(copy) NSString *failedPlayReportUrl;
@property(copy) NSString *offlineReportUrl;
@property(copy) NSString *partnerLogoUrl;
@property(copy) NSString *subscribeSource;
- (void)setTemporaryInAppReceipt:(id)arg1;
@property(readonly) NSString *temporaryInAppReceipt;
@property(readonly) NSString *planTypeString;
@property _Bool collaborativeEnabled;
@property(copy) NSString *purchaseOptionsUrl;
@property(copy) NSString *plan;
@property(copy) NSString *extraSharingString;
@property(copy) NSString *playlistsLanguage;
@property(retain) NSArray *recentSearches;
@property _Bool disableBranchLink;
@property(retain, nonatomic) NSString *likeImageUrl;
@property(retain, nonatomic) NSString *likeButtonText;
@property(retain, nonatomic) NSString *likeTitle;
@property _Bool playlistOnLike;
@property _Bool privateSessionAllowed;
@property(retain, nonatomic) NSDate *expirationDate;
@property(retain, nonatomic) NSArray *privateSessionIntervals;
@property(retain) NSArray *facebookFriends;
@property(copy) NSString *inboxSectionsPin;
@property(retain) NSArray *inboxSections;
@property _Bool isOfflineMode; // @synthesize isOfflineMode=_isOfflineMode;
@property unsigned long long crashCounter;
@property long long surpriseMeQueueType;
@property _Bool isUserRegistered;
@property _Bool isSearchTabBubbleShown;
@property _Bool isPlayerGenieBubbleShown;
@property(retain) NSDate *friendsLoaderFacebookMessageShowDate;
@property(retain) NSString *appVersion;
@property _Bool isNewInstall;
@property unsigned long long oneTimeRunMarker;
@property(retain) NSString *lastPostMusicHash;
@property(copy) NSString *userDisplayName;
@property(copy) NSString *upgradeUrl;
@property(copy) NSString *minReleaseVersionAllowed;
@property(copy) NSString *lastUsername;
@property(copy) NSDate *enterOfflineTime;
@property double allowedOfflineTimeInterval;
@property(readonly) unsigned long long planDaysRemaining;
@property long long numberOfOfflineMessages;
@property long long numberOfOfflineSongs;
@property _Bool isOfflineAllowed;
@property unsigned long long userAge;
@property(retain) NSString *userGender;
- (void)setActivePlaylistOwner:(id)arg1;
- (id)activePlaylistOwner;
@property(retain, nonatomic) NSArray *viewedBannersIds;
@property(retain, nonatomic) NSArray *availableAudioQualities;
@property(retain, nonatomic) NSArray *stickerPacks;
@property(retain, nonatomic) NSArray *friendsSections;
- (void)setActivePlaylistCoverArt:(id)arg1;
- (id)activePlaylistCoverArt;
- (void)setActivePlaylistType:(unsigned long long)arg1;
- (unsigned long long)activePlaylistType;
- (void)setActiveNumberOfFollowers:(long long)arg1;
- (long long)activeNumberOfFollowers;
- (void)setActivePlaylistName:(id)arg1;
- (id)activePlaylistName;
- (void)setActivePlaylistCount:(id)arg1;
- (id)activePlaylistCount;
- (void)setActiveTagId:(id)arg1;
- (id)activeTagId;
- (void)setActivePlaylistId:(id)arg1;
- (id)activePlaylistId;
@property double lastSleepTime;
@property _Bool isEqualizerOn;
@property(copy) NSString *playlistRealmName;
@property(copy) NSString *defaultRealmName;
@property(copy) NSString *lastfmUserName;
@property _Bool isLastfmScrobblingEnabled;
@property(readonly) _Bool isSharingEnabled;
@property(retain, nonatomic) NSArray *recentAnghamiSharingFriendIds;
@property _Bool isFacebookSharingEnabled;
@property _Bool isShakeShuffleEnabled;
@property(copy) NSString *facebookShareName;
@property(copy) NSString *facebookShareToken;
@property(copy) NSString *facebookShareId;
@property _Bool bluetoothServicesStatus;
@property long long lastPushStatus;
@property _Bool canSendGifts;
@property _Bool pushServicesStatus;
@property(retain) NSString *twitterEmail;
@property(copy) NSString *mainAppUDID;
@property(retain) NSString *twitterUsername;
@property _Bool isAllowedToSyncOver3G;
@property long long signInMode;
@property(readonly) NSString *generatedUserEmail;
@property _Bool isGooglePlusSignIn;
@property _Bool isSyncOver3G;
@property unsigned long long audioEngineBufferNumberOfSeconds;
@property(readonly) unsigned long long playerManagerStartNumberOfSeconds;
@property _Bool isShouldShowEQViewInstructions;
@property float gainMultiplier;
@property long long bitRate;
@property unsigned long long byteOffset;
@property double seekTime;
@property _Bool isRecover;
@property _Bool isScreenSleepEnabled;
@property float scrobblePercent;
@property _Bool isTwitterEnabled;
@property unsigned long long minCacheSize;
@property(readonly, nonatomic) _Bool redownloadWhenChangingQuality;
@property unsigned long long maxCacheSize;
@property _Bool isSongCachingEnabled;
@property long long maxBitrate3G;
@property long long maxBitrateWifi;
@property long long downloadAlertsShown;
@property unsigned long long lastSelectedTab;
- (void)setLikesAlertTimeStamp:(id)arg1;
@property(readonly) NSDate *likesAlertTimeStamp;
@property long long audioAdsCloseCount;
@property unsigned long long downloadQuality;
@property unsigned long long audioQuality;
@property long long upsellOnCloseAdLimit;
- (void)setLikesAlertsShown:(long long)arg1;
@property(readonly) long long likesAlertsShown;
- (_Bool)canShowLikesAlert;
- (long long)updateLikesAlert;
@property _Bool showedLikeTip;
@property _Bool showedChromecastTip;
@property _Bool showedAirplayTip;
@property _Bool enableQueueRestrictions;
@property(nonatomic) _Bool showedAddEmailForFacebook;
@property _Bool showedMenuTip;
@property _Bool isForceOfflineMode;
@property _Bool alreadyUsedArtistRadio;
@property(readonly) NSString *customCoverArtsPath;
@property(readonly) NSString *widgetLogsPath;
- (void)updateWidgetlogsPath;
@property(readonly) NSString *sharedContainerPath;
@property(readonly) NSString *tempCachePath;
@property(readonly) NSString *songCachePath;
@property(readonly) NSString *currentCacheRoot;
@property(readonly) NSString *webCachePath;
@property(readonly) NSString *cachesPath;
@property(readonly) NSString *databasePath;
@property(readonly) NSString *backgroundDownloadedSongsPath;
@property(readonly) NSString *documentsPath;
@property _Bool isChangeFbPublish;
@property(copy) NSString *encryptionKey;
@property(copy) NSString *password;
@property(retain) NSString *twitterID;
@property(retain) NSString *twitterSecret;
@property(retain) NSString *twitterToken;
@property(copy) NSString *preorderMessage;
@property(copy) NSString *facebookEmail;
@property long long reloginFacebookSkipCount;
@property(copy) NSString *appIconType;
@property long long reverifyCountDown;
@property(nonatomic) _Bool hidePhone;
@property(nonatomic) _Bool plusTab;
@property(nonatomic) _Bool hasFacebook;
@property(retain, nonatomic) NSDictionary *shouldReshowOnboardingDictionary;
@property(nonatomic) _Bool shouldReshowOnboarding;
@property(copy) NSString *facebookId;
@property(copy) NSString *facebookToken;
@property(copy) NSString *userCode;
@property(copy) NSString *username;
@property(copy) NSString *telcoId;
@property(copy) NSString *planId;
@property _Bool didSendPhoneNumber;
@property(nonatomic) _Bool didPreLoginNotAN;
@property(copy) NSString *anId;
@property(copy) NSDictionary *adTagParams;
@property(retain, nonatomic) NSString *videoAdTag;
@property(copy) NSString *audioAdTag;
@property _Bool didConnectToGoogle;
@property(copy) NSDate *playerTooltipStamp;
- (_Bool)didShowDownloadOn3gAlert;
@property(retain, nonatomic) NSDate *lastSubscribeScreenViewDate;
@property(retain, nonatomic) NSDate *lastCrashDate;
@property(retain, nonatomic) NSDate *downloadOn3gAlertDate;
@property(retain, nonatomic) NSDate *lastSuccessfulSignup;
@property(retain, nonatomic) NSDate *lastNegativeActionDate;
@property _Bool didShowLikesAlert;
@property _Bool isDownloadAccessDisabled;
@property _Bool isAutoLoginForbidden;
@property _Bool didShowUserVideoTimeAlert;
@property(copy) NSNumber *destructiveDownloadsSyncAllowed;
@property(retain, nonatomic) NSString *playlistsAdTag;
@property(copy) NSString *dldAdTag;
@property(copy) NSString *mpuAdTag;
@property _Bool isContentSectionTitlesAllCaps;
@property(copy) NSString *interstTag;
@property(copy) NSString *plusNoticeSource;
@property(copy) NSString *plusNoticeButton;
@property(copy) NSString *plusNotice;
@property(copy) NSString *personalDjLeaderBoardAdTag;
@property(copy) NSString *launchLanguageCode;
@property(copy) NSString *coverArtUrlString;
@property(nonatomic) unsigned long long songsPlayedInOfflineRec;
@property(nonatomic) _Bool isOfflineRecLinkHighlighted;
@property(nonatomic) _Bool isOfflineRecOfflineOnly;
@property(nonatomic) _Bool isOfflineRecViewHidden;
@property(readonly, nonatomic) _Bool isOfflineRecEnabled;
- (void)displayTooltipForOfflineRec;
- (void)toggleOfflineRecEnabled:(_Bool)arg1 disableReporting:(_Bool)arg2;
@property(nonatomic) _Bool isAnonymousLogin;
@property _Bool isLyricsFreeEnabled;
@property(retain, nonatomic) NSString *shareAppReferralLink;
- (id)offlineUrlString;
- (void)initializeLockObjects;
- (void)memCacheDefaults;
- (void)createInitialSettings;
- (void)saveState;
- (void)updateUptime;
- (void)loadState;
@property(retain, nonatomic) NSDate *sessionStartDate;
@property(copy) NSString *sessionId;
@property(readonly, nonatomic) ANGUserDefaultsMemCache *userDefaults;

@end

