//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppDelegate, NSMutableArray, NSMutableDictionary, NSString, PlayerVC, SubscriptionManager;

@interface UserData : NSObject
{
    NSMutableDictionary *userData;
    NSMutableArray *playerQueue;
    _Bool loggedIn;
    _Bool isPro;
    _Bool fbLogin;
    _Bool isFBConnect;
    _Bool isJioUser;
    int userReady;
    NSString *_loggedInUsername;
    NSString *displayName;
    NSString *song_version;
    NSObject *playerLock;
    NSObject *libraryLock;
    NSObject *fileLock;
    AppDelegate *appDelegate;
    SubscriptionManager *subManager;
    PlayerVC *player;
    _Bool bulkAdd;
    _Bool blockAlert;
    _Bool emptyShuffle;
    int unplayableCount;
    int numSkipsAllowed;
    double skipInterval;
    _Bool give_jio_trial;
    NSMutableArray *bulkPromptSongs;
    NSMutableArray *songsToAddCoalesced;
    NSMutableArray *skippedSongTimestamps;
    _Bool prompted;
    NSMutableDictionary *libraryContext;
    NSString *keyChainUsername;
    NSString *keyChainPassword;
    _Bool isFreemium;
    _Bool _fetchingPlaylistSongsInUI;
    _Bool _fetchingPlaylistSongsInBackground;
    int _loginType;
    NSObject *loginCallbackObject;
    NSString *loginCallbackSelector;
    NSObject *loginErrorObject;
    NSString *loginErrorSelector;
    NSString *_userRegisteredPhone;
    NSString *_headerEnrichedPhone;
}

+ (id)getOnboardPages;
+ (_Bool)connectionOkayForCache;
+ (int)getPendingSongsWhenPaused;
+ (void)setPendingSongsWhenPaused:(int)arg1;
+ (id)getDeviceToken;
+ (void)setDeviceToken:(id)arg1;
+ (id)getUserDevices;
+ (void)setAppVersion;
+ (id)getAppVersion;
+ (_Bool)isStreamToFacebookEnabled;
+ (void)shouldStreamToFacebook:(_Bool)arg1;
+ (_Bool)canCacheOverCellular;
+ (void)shouldCacheOverCellular:(_Bool)arg1;
+ (id)getUserCacheQualityString;
+ (long long)getUserCacheQuality;
+ (long long)mappedAudioQualityFromAACToMP3:(long long)arg1;
+ (long long)mappedAudioQualityFromMP3ToAAC:(long long)arg1;
+ (id)getUserStreamingRateString;
+ (long long)defaultNetworkBitrate;
+ (_Bool)getAutoBitrate;
+ (void)setAutoBitrate:(_Bool)arg1;
+ (long long)getUserSelectedBitrate;
+ (void)setUserSelectedBitrate:(long long)arg1;
+ (_Bool)languagesSet;
+ (_Bool)readyToDownloadSongs:(id)arg1 via:(id)arg2 withContext:(id)arg3;
+ (void)cacheSongs:(id)arg1 via:(id)arg2;
+ (void)cacheSongs:(id)arg1 via:(id)arg2 withContext:(id)arg3;
+ (void)finishInitialLibrarySyncing:(_Bool)arg1;
+ (_Bool)isInitialLibrarySyncCompleted;
+ (void)setPauseStateOfDownloading:(_Bool)arg1;
+ (_Bool)isUserPausedDownloading;
+ (int)numCachedSongsQueued;
+ (int)numCachedSongs;
+ (void)setTutorialViewed:(id)arg1;
+ (_Bool)didViewTutorial:(id)arg1;
+ (void)showProROWPaywallModalIn:(id)arg1;
+ (id)getUserImage:(unsigned long long)arg1;
+ (id)getSingleton;
@property(retain, nonatomic, getter=getHeaderEnrichedPhone) NSString *headerEnrichedPhone; // @synthesize headerEnrichedPhone=_headerEnrichedPhone;
@property(retain, nonatomic, getter=getUserRegisteredPhone) NSString *userRegisteredPhone; // @synthesize userRegisteredPhone=_userRegisteredPhone;
@property(nonatomic) _Bool fetchingPlaylistSongsInBackground; // @synthesize fetchingPlaylistSongsInBackground=_fetchingPlaylistSongsInBackground;
@property(nonatomic) _Bool fetchingPlaylistSongsInUI; // @synthesize fetchingPlaylistSongsInUI=_fetchingPlaylistSongsInUI;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(retain) NSMutableArray *playerQueue; // @synthesize playerQueue;
@property(retain) NSMutableDictionary *userData; // @synthesize userData;
@property(retain, nonatomic) NSString *song_version; // @synthesize song_version;
@property(copy, nonatomic) NSString *loginErrorSelector; // @synthesize loginErrorSelector;
@property(nonatomic) __weak NSObject *loginErrorObject; // @synthesize loginErrorObject;
@property(copy, nonatomic) NSString *loginCallbackSelector; // @synthesize loginCallbackSelector;
@property(nonatomic) __weak NSObject *loginCallbackObject; // @synthesize loginCallbackObject;
@property(nonatomic) _Bool isJioUser; // @synthesize isJioUser;
@property(nonatomic) _Bool isFBConnect; // @synthesize isFBConnect;
@property(nonatomic) _Bool fbLogin; // @synthesize fbLogin;
@property(nonatomic) _Bool isFreemium; // @synthesize isFreemium;
@property(nonatomic) _Bool isPro; // @synthesize isPro;
@property(nonatomic) _Bool loggedIn; // @synthesize loggedIn;
@property(nonatomic) int userReady; // @synthesize userReady;
- (void).cxx_destruct;
- (void)updateKeychainItemWithUsername:(id)arg1 andPassword:(id)arg2;
- (void)writeCredentialsToKeychain:(id)arg1 andPassword:(id)arg2;
- (void)writeCredentialsToKeychain;
- (id)getSavedCredentialsFromKeyChain;
- (_Bool)skipLimitReached;
- (void)deleteDuplicateCookies;
- (void)setGarbageCookie;
- (void)updatePlayerWithPendingSongs;
- (int)playerMode;
- (void)clearAllCookies;
- (_Bool)playerAddingSongsToQueue;
- (void)fetchSongIdsForDownloadState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshMyLibraryQueueFromSongID:(id)arg1 downloadsOnly:(_Bool)arg2;
- (void)loadLibrarySongsWithSongID:(id)arg1 startPlaying:(_Bool)arg2 userTapped:(_Bool)arg3 downloadsOnly:(_Bool)arg4 context:(id)arg5;
- (void)loadLibrarySongsWithSongID:(id)arg1 startPlaying:(_Bool)arg2 userTapped:(_Bool)arg3 downloadsOnly:(_Bool)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeLibraryPlayerState;
- (void)saveLibraryPlayerState:(id)arg1;
- (id)getAvailablePhoneNumbers;
- (id)getUsersConnectionState;
- (id)getUsersProModeWithLoginMode:(id)arg1;
- (void)clearUserSelectedBitrate;
- (void)playSongs:(id)arg1 fromPosition:(long long)arg2 andTracking:(id)arg3 andForceShuffle:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)playSongs:(id)arg1 fromPosition:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAndPlayFailure:(int)arg1;
- (int)findStartPositionForSongId:(id)arg1 fromSongList:(id)arg2;
- (void)fetchAndPlaySuccess:(int)arg1 andStartFromSong:(id)arg2 withResponse:(id)arg3 withExtras:(id)arg4;
- (void)fetchAndPlay:(id)arg1 ofType:(int)arg2 andStartFromSong:(id)arg3 withExtras:(id)arg4;
- (void)fetchMediaInBackgroundForType:(int)arg1 parentInfo:(id)arg2 context:(id)arg3;
- (void)contextualPlay:(id)arg1 fromPosition:(long long)arg2 viaParent:(id)arg3 contextualInfo:(id)arg4;
- (void)contextualPlay:(id)arg1 fromPosition:(long long)arg2 viaParent:(id)arg3;
- (void)removeFromQueue:(unsigned long long)arg1;
- (void)replaceSongObjectinQueue:(id)arg1 index:(int)arg2;
- (void)addSongsToQueue:(id)arg1 shouldReplace:(_Bool)arg2 startAtIndex:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addSongsToQueue:(id)arg1 shouldReplace:(_Bool)arg2;
- (void)addToQueue:(id)arg1;
- (void)playAll:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playAll:(id)arg1;
- (void)playNow:(id)arg1;
- (void)resetPlayerQueue;
- (void)initPlayerQueue;
- (void)addSong:(id)arg1 toPlaylist:(id)arg2 atIndex:(unsigned long long)arg3;
- (int)getNumOfStarredSongs;
- (_Bool)isStarred:(id)arg1;
- (void)deletePlaylist:(id)arg1;
- (int)songsInLibrary;
- (void)setFreemiumStatus:(_Bool)arg1;
- (void)setProStatus:(_Bool)arg1;
- (void)FBResync;
- (void)openSession:(id)arg1 fromViewController:(id)arg2;
- (void)openSession:(id)arg1;
- (void)unSyncFB;
- (_Bool)isFacebookLoggedIn;
- (void)FBLogOut;
- (void)FBTokenChangeAndSendtoBackend;
- (void)FBTokenExtended;
- (void)FBLoginSuccessful:(id)arg1;
- (void)FBLogIn;
- (void)signUp:(id)arg1 andPassword:(id)arg2 andConfirmation:(id)arg3;
- (_Bool)getJioTrialInfo;
- (id)getJioUserData;
- (id)getUsersLoggedInState;
- (void)setGlobalData:(id)arg1;
- (void)setLoggedInState:(id)arg1;
- (void)setPaywallLoggedInState:(id)arg1;
- (void)setLoggedInStateFromLogin:(id)arg1;
- (id)getLoggedInUserName;
- (void)logoutResponse:(id)arg1;
- (void)deleteLoginCoookie;
- (void)logOut;
- (void)loginResponse:(id)arg1 withLoginType:(int)arg2;
- (void)logIn:(id)arg1 andPassword:(id)arg2;
- (id)init;

@end

