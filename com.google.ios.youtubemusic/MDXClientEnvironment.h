//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, MDXNotificationsService, MLPlayerPool, NSData, NSString, YTCommandRouter, YTMonotonicDate, YTPlayerRequestFactory, YTPlayerService, YTPromosheetController;
@protocol MDXColdConfig, MDXConfig, MDXEventLogger, MDXHotConfig, MDXLocalStorage, MLCaptionConfig, MLCaptionControllerFactory, MLCaptionDisplaySettingsProvider, SSOAuthorization, YTAudioSession, YTInnerTubeUIServiceWithTimeoutInterval, YTResponder;

@interface MDXClientEnvironment : NSObject
{
    YTCommandRouter *_commandRouter;
    struct NSNumber *_lastShownHintIdentifier;
    id <YTResponder> _lastShownMealbarFirstResponder;
    GIMMe *_gimme;
    id <MDXConfig> _config;
    id <MDXColdConfig> _coldConfig;
    id <MDXHotConfig> _hotConfig;
    id <MDXEventLogger> _eventLogger;
    id <MDXLocalStorage> _localStorage;
    NSString *_baseURLString;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
@property(copy, nonatomic) NSString *baseURLString; // @synthesize baseURLString=_baseURLString;
@property(readonly, nonatomic) id <MDXLocalStorage> localStorage; // @synthesize localStorage=_localStorage;
@property(readonly, nonatomic) id <MDXEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) id <MDXHotConfig> hotConfig; // @synthesize hotConfig=_hotConfig;
@property(readonly, nonatomic) id <MDXColdConfig> coldConfig; // @synthesize coldConfig=_coldConfig;
@property(readonly, nonatomic) id <MDXConfig> config; // @synthesize config=_config;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)appVersion;
- (id)deviceType;
@property(readonly, nonatomic) MDXNotificationsService *MDXNotificationsService;
@property(readonly, nonatomic) YTPromosheetController *promosheetController;
@property(readonly, nonatomic) double defaultPromoDisplayInterval;
@property(readonly, nonatomic) id <YTResponder> responderRoot;
@property(readonly, nonatomic) id <MLCaptionDisplaySettingsProvider> captionDisplaySettingsProvider;
@property(readonly, nonatomic) id <MLCaptionConfig> captionConfig;
@property(readonly, nonatomic) id <MLCaptionControllerFactory> captionControllerFactory;
@property(readonly, nonatomic) _Bool pushNotificationsEnabled;
@property(readonly, nonatomic) NSData *notificationDeviceToken;
@property(readonly, nonatomic) id <YTAudioSession> audioSession;
@property(readonly, nonatomic) MLPlayerPool *playerPool;
@property(readonly, nonatomic) YTPlayerService *playerService;
@property(readonly, nonatomic) YTPlayerRequestFactory *playerRequestFactory;
@property(readonly, nonatomic) id <YTInnerTubeUIServiceWithTimeoutInterval> watchNextService;
@property(readonly, nonatomic) YTMonotonicDate *timeOfLastUserAction;
@property(readonly, nonatomic) NSString *identityPageID;
@property(readonly, nonatomic) id <SSOAuthorization> identityAuthorization;
@property(readonly, nonatomic) long long forcedPromotionElementType;
@property(readonly, nonatomic) long long localTransportType;
- (void)presentModalWithViewController:(id)arg1;
- (id)mealbarButtonWithLabel:(id)arg1 style:(int)arg2 VEType:(int)arg3;
- (void)presentMealBarWithFirstResponder:(id)arg1 mealbarVEType:(int)arg2 title:(id)arg3 description:(id)arg4 icon:(id)arg5 actionTitle:(id)arg6 actionVEType:(int)arg7 dismissTitle:(id)arg8 dismissVEType:(int)arg9 actionEndpoint:(id)arg10;
- (void)dismissPreviouslyShownHint;
- (void)dismissPreviouslyShownMealBar;
- (void)showHintOverView:(id)arg1 text:(id)arg2 dwellTime:(double)arg3 position:(int)arg4 VEType:(int)arg5 sender:(id)arg6;
- (void)sendToastMessage:(id)arg1 action:(CDUnknownBlockType)arg2 actionTitle:(id)arg3 VEType:(int)arg4;
- (void)handleCommand:(id)arg1 entry:(id)arg2 sender:(id)arg3;
- (void)removeVolumeChangeObserver:(id)arg1;
- (void)addVolumeChangeObserver:(id)arg1;
- (void)removeLastActionObserver:(id)arg1;
- (void)addLastActionObserver:(id)arg1;
- (void)addUserChangedObserver:(id)arg1;
- (void)removeSystemNotificationsObserver:(id)arg1;
- (void)addSystemNotificationsObserver:(id)arg1;
- (id)deviceID;
- (id)deviceName;
- (id)appTheme;
- (id)deviceApp;
- (id)initWithConfig:(id)arg1 coldConfig:(id)arg2 hotConfig:(id)arg3 commandRouter:(id)arg4 eventLogger:(id)arg5;

@end

