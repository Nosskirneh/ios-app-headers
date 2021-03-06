//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SaavnAdManager;

@interface SaavnNativeAdManager : NSObject
{
    SaavnAdManager *adManager;
    NSMutableArray *defaultNativeLaunchConfig;
    NSMutableArray *defaultShowcaseLaunchConfig;
    _Bool dfpCalledAtleastOnce;
    int adReady;
    long long _userState;
    NSMutableArray *_dfpBanners;
    NSMutableArray *_dfpShowcases;
    NSMutableArray *_dfpNatives;
    NSMutableArray *_dfpSpotlights;
    NSMutableArray *_final_native_ads;
    NSMutableArray *_final_showcase_ads;
    NSMutableArray *_final_spotlight_ads;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *final_spotlight_ads; // @synthesize final_spotlight_ads=_final_spotlight_ads;
@property(retain, nonatomic) NSMutableArray *final_showcase_ads; // @synthesize final_showcase_ads=_final_showcase_ads;
@property(retain, nonatomic) NSMutableArray *final_native_ads; // @synthesize final_native_ads=_final_native_ads;
@property(retain, nonatomic) NSMutableArray *dfpSpotlights; // @synthesize dfpSpotlights=_dfpSpotlights;
@property(retain, nonatomic) NSMutableArray *dfpNatives; // @synthesize dfpNatives=_dfpNatives;
@property(retain, nonatomic) NSMutableArray *dfpShowcases; // @synthesize dfpShowcases=_dfpShowcases;
@property(retain, nonatomic) NSMutableArray *dfpBanners; // @synthesize dfpBanners=_dfpBanners;
@property(nonatomic) long long userState; // @synthesize userState=_userState;
@property(nonatomic) int adReady; // @synthesize adReady;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setRecieverForSearchSpotlightDFPAd:(id)arg1 inParent:(id)arg2;
- (void)setRecieverForSpotlightWebAd:(id)arg1 with:(id)arg2 inParent:(id)arg3;
- (void)setRecieverForSpotlightDFPAd:(id)arg1 with:(id)arg2 inParent:(id)arg3;
- (void)setRecieverForShowcaseWebAd:(id)arg1 with:(id)arg2 inParent:(id)arg3;
- (void)setRecieverForNativeDFPAd:(id)arg1 with:(id)arg2 inParent:(id)arg3;
- (void)setRecieverForShowcaseDFPAd:(id)arg1 with:(id)arg2 inParent:(id)arg3;
- (void)updateConfig:(_Bool)arg1;
- (void)fetchLaunchConfig:(id)arg1;
- (void)handleFailureInDFP;
- (void)fetchLaunchConfigFromDFP;
- (void)userProUpdated:(id)arg1;
- (_Bool)isLaunchDFPRequested;
- (id)init;

@end

