//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPMAdRefreshController, GPMAdSessionManager, GPMAdTargetingParameters, GPMAudioAdFrequencyManager, GPMServiceConfiguration, MusicQueueManager, NSString;

@interface GPMAdController : NSObject
{
    GPMServiceConfiguration *_serviceConfiguration;
    MusicQueueManager *_musicQueueManager;
    GPMAdRefreshController *_refreshController;
    GPMAudioAdFrequencyManager *_audioAdFrequencyManager;
    GPMAdSessionManager *_adSessionManager;
    NSString *_currentRadioStationSeedId;
    GPMAdTargetingParameters *_adTargetingParameters;
}

+ (_Bool)shouldEnableUserTargeting;
- (void).cxx_destruct;
- (void)handleRadioStationChanged:(id)arg1;
- (id)adURLWithQueryFormat:(id)arg1;
- (id)stringByURLEncodingStringParameter:(id)arg1;
- (_Bool)shouldShowAdForTrack:(id)arg1;
- (id)prepopulatedDFPRequest;
- (id)videoAdURL;
- (id)audioAdURL;
- (_Bool)shouldPlayAudioAd;
- (_Bool)shouldLoadAudioAd;
- (_Bool)shouldShowOverlayAd;
- (_Bool)shouldShowVideoAd;
- (_Bool)shouldShowBannerAd;
@property(readonly) double audioAdCacheExpirationInterval;
@property(readonly) double audioAdRequestTimeoutInterval;
@property(readonly) double maxVideoAdPlaybackDelayInterval;
@property(readonly) NSString *dfpAdNetworkID;
- (void)setupObservers;
- (void)dealloc;
- (id)initWithServiceConfiguration:(id)arg1 musicQueueManager:(id)arg2;
- (id)init;

@end
