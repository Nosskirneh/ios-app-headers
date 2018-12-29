//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APAnalyticsController, AnalyticsDimensions, MarketingController, NSDictionary, NSString, NSURL, PlaybackService, YouFetcherFactory;

@interface AnalyticsAppLifecycleEventTagger : NSObject
{
    APAnalyticsController *_analyticsController;
    MarketingController *_marketingController;
    AnalyticsDimensions *_analyticsDimensions;
    YouFetcherFactory *_requestFactory;
    NSDictionary *_referrerMapping;
    NSURL *_deeplinkURL;
    NSString *_deeplinkSource;
    PlaybackService *_playbackService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) PlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) NSString *deeplinkSource; // @synthesize deeplinkSource=_deeplinkSource;
@property(retain, nonatomic) NSURL *deeplinkURL; // @synthesize deeplinkURL=_deeplinkURL;
@property(readonly, nonatomic) NSDictionary *referrerMapping; // @synthesize referrerMapping=_referrerMapping;
@property(readonly, nonatomic) YouFetcherFactory *requestFactory; // @synthesize requestFactory=_requestFactory;
@property(readonly, nonatomic) AnalyticsDimensions *analyticsDimensions; // @synthesize analyticsDimensions=_analyticsDimensions;
@property(readonly, nonatomic) MarketingController *marketingController; // @synthesize marketingController=_marketingController;
@property(readonly, nonatomic) APAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
- (void).cxx_destruct;
- (id)youSignal;
- (id)deeplinkUrn;
- (id)referrerForUpsellDeeplink:(id)arg1;
- (id)referrerFromDeeplink;
- (id)referrer;
- (long long)topLevelScreen;
- (long long)screenFromDeeplink;
- (long long)analyticsScreen;
- (void)setUserInfo;
- (id)foregroundEventWithReferrer:(id)arg1;
- (void)tagEvent:(id)arg1;
- (void)closeSessionIfMusicNotPlaying;
- (void)resumeSession;
- (void)startSession;
- (void)tagAppBackground;
- (void)tagAppForegroundWithReferrer:(id)arg1;
- (void)tagAppForeground;
- (void)tagPushNotification:(id)arg1;
- (void)tagDeeplink:(id)arg1 sourceApplication:(id)arg2;
- (void)tagAppLaunch;
- (id)initWithAnalyticsController:(id)arg1 marketingController:(id)arg2 analyticsDimensions:(id)arg3 youUrnStorageControllerFactory:(id)arg4;

@end
