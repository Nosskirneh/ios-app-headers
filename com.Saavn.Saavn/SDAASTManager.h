//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface SDAASTManager : NSObject
{
    _Bool _isDaast;
    _Bool _isFallback;
    NSMutableDictionary *_confirmation;
    NSMutableDictionary *_thirdPartyConfirmation;
    NSMutableDictionary *_keysDictionary;
    NSMutableDictionary *_dfpError;
    NSString *_error;
    NSMutableDictionary *_mediaConfg;
    NSMutableDictionary *_videoConfg;
    NSMutableDictionary *_audioTrackingEvents;
    long long _mediaAdDuration;
    NSMutableDictionary *_adParameters;
    NSDictionary *_audioError;
    NSURL *_audioUrl;
    NSMutableDictionary *_audioCompanionConfig;
    NSMutableDictionary *_bannerConfig;
    NSMutableDictionary *_spotlightConfig;
    NSMutableDictionary *_idleConfig;
    NSMutableArray *_nativeConfig;
    NSMutableArray *_showcaseConfig;
    NSMutableDictionary *_defaultNativeConfig;
    NSMutableDictionary *_defaultShowcaseConfig;
    NSString *_adMediaFormat;
    NSString *_adVideoFormat;
    NSMutableArray *_impressionURL;
    NSString *_configAdTitle;
    NSString *_configAdSystem;
    NSString *_configAdId;
    NSString *_configAdCategory;
}

+ (void)downloadImageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (long long)ConvertTimeToSec:(id)arg1;
+ (id)sendWithCurrentTimestamp:(id)arg1;
+ (id)contentTypeForImageData:(id)arg1;
+ (_Bool)doesString:(id)arg1 containCharacter:(BOOL)arg2;
+ (id)getDurationOfAd:(id)arg1;
+ (id)convertXmlToDict:(id)arg1;
+ (id)replaceLSIDinURL:(id)arg1;
+ (id)sharedManager;
@property(nonatomic) _Bool isFallback; // @synthesize isFallback=_isFallback;
@property(nonatomic) _Bool isDaast; // @synthesize isDaast=_isDaast;
@property(retain, nonatomic) NSString *configAdCategory; // @synthesize configAdCategory=_configAdCategory;
@property(retain, nonatomic) NSString *configAdId; // @synthesize configAdId=_configAdId;
@property(retain, nonatomic) NSString *configAdSystem; // @synthesize configAdSystem=_configAdSystem;
@property(retain, nonatomic) NSString *configAdTitle; // @synthesize configAdTitle=_configAdTitle;
@property(retain, nonatomic) NSMutableArray *impressionURL; // @synthesize impressionURL=_impressionURL;
@property(retain, nonatomic) NSString *adVideoFormat; // @synthesize adVideoFormat=_adVideoFormat;
@property(retain, nonatomic) NSString *adMediaFormat; // @synthesize adMediaFormat=_adMediaFormat;
@property(retain, nonatomic) NSMutableDictionary *defaultShowcaseConfig; // @synthesize defaultShowcaseConfig=_defaultShowcaseConfig;
@property(retain, nonatomic) NSMutableDictionary *defaultNativeConfig; // @synthesize defaultNativeConfig=_defaultNativeConfig;
@property(retain, nonatomic) NSMutableArray *showcaseConfig; // @synthesize showcaseConfig=_showcaseConfig;
@property(retain, nonatomic) NSMutableArray *nativeConfig; // @synthesize nativeConfig=_nativeConfig;
@property(retain, nonatomic) NSMutableDictionary *idleConfig; // @synthesize idleConfig=_idleConfig;
@property(retain, nonatomic) NSMutableDictionary *spotlightConfig; // @synthesize spotlightConfig=_spotlightConfig;
@property(retain, nonatomic) NSMutableDictionary *bannerConfig; // @synthesize bannerConfig=_bannerConfig;
@property(retain, nonatomic) NSMutableDictionary *audioCompanionConfig; // @synthesize audioCompanionConfig=_audioCompanionConfig;
@property(retain, nonatomic) NSURL *audioUrl; // @synthesize audioUrl=_audioUrl;
@property(retain, nonatomic) NSDictionary *audioError; // @synthesize audioError=_audioError;
@property(retain, nonatomic) NSMutableDictionary *adParameters; // @synthesize adParameters=_adParameters;
@property(nonatomic) long long mediaAdDuration; // @synthesize mediaAdDuration=_mediaAdDuration;
@property(retain, nonatomic) NSMutableDictionary *audioTrackingEvents; // @synthesize audioTrackingEvents=_audioTrackingEvents;
@property(retain, nonatomic) NSMutableDictionary *videoConfg; // @synthesize videoConfg=_videoConfg;
@property(retain, nonatomic) NSMutableDictionary *mediaConfg; // @synthesize mediaConfg=_mediaConfg;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableDictionary *dfpError; // @synthesize dfpError=_dfpError;
@property(retain, nonatomic) NSMutableDictionary *keysDictionary; // @synthesize keysDictionary=_keysDictionary;
@property(retain, nonatomic) NSMutableDictionary *thirdPartyConfirmation; // @synthesize thirdPartyConfirmation=_thirdPartyConfirmation;
@property(retain, nonatomic) NSMutableDictionary *confirmation; // @synthesize confirmation=_confirmation;
- (void).cxx_destruct;
- (id)getStaticResource:(id)arg1;
- (id)getIFrameResource:(id)arg1;
- (id)getTypeForDict:(id)arg1;
- (void)sendslotbreak;
- (void)consumeProgress:(long long)arg1;
- (void)handleSDaastParams:(id)arg1;
- (id)getDefaultShowcaseConfig;
- (id)getDefaultNativConfig;
- (id)getShowcaseConfig;
- (id)getNativConfig;
- (id)getCompanionConfig;
- (id)getSpotlightConfig;
- (id)getIdleConfig;
- (id)getBannerConfig;
- (_Bool)getHonorSecond;
- (id)getApplicableNetwork;
- (id)getSequenceInfo;
- (_Bool)getAdbreakInfo;
- (_Bool)getPreRollInfo;
- (long long)getDispRotation;
- (id)getIdleTimer;
- (long long)getInitDuration;
- (long long)getSlotDuration;
- (id)getCampaignId;
- (id)getMediaConfig;
- (id)fetchStrFromNSArray:(id)arg1;
- (_Bool)isMediaEnabled;
- (id)convertDictToURL:(id)arg1;
- (id)convertAdParamsToURLstr:(id)arg1;
- (void)parseMedia:(id)arg1;
- (long long)maxBitrateForNetworkType;
- (void)assignMedia:(id)arg1;
- (void)storeBetterBanner:(id)arg1;
- (void)storeBetterSpotlight:(id)arg1;
- (void)storeBetterIdle:(id)arg1;
- (void)storeBetterAudioCompanion:(id)arg1;
- (void)storeBetterCompanion:(id)arg1;
- (void)storeBetterNative:(id)arg1;
- (void)storeBetterShowcase:(id)arg1;
- (void)assignParsedVals:(id)arg1;
- (void)parseDispay:(id)arg1;
- (id)getAdProviderInfo;
- (void)parseAdProviderInfo:(id)arg1;
- (void)handleError;
- (void)postRequest:(id)arg1;
- (id)getVideoConfig;
- (id)audioAdParametersAvailable;
- (id)audioAdAvailable;
- (void)handleRedirect:(id)arg1 withDict:(id)arg2;
- (void)parseDaastResp:(id)arg1 withFallback:(_Bool)arg2;
- (void)fetchWrapper:(id)arg1;
- (_Bool)isConfigOnlyDaast;
- (void)resetAllDaastParams;
- (void)trackEvent:(id)arg1;
- (id)init;

@end
