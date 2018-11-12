//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBNativeAdDelegate-Protocol.h"

@class DZRAudioAdsManager, DZRBannerAdsManager, DZRNativeAdsManager, DZROpeningAdManager, DZRSponsoredTracksManager, FBNativeAd, NSDictionary, NSString;
@protocol DZRAdManagerdelegate;

@interface DZRAdManager : NSObject <FBNativeAdDelegate>
{
    id <DZRAdManagerdelegate> _delegate;
    DZROpeningAdManager *_openingAdManager;
    DZRNativeAdsManager *_nativeAdsManager;
    DZRBannerAdsManager *_bannerAdsManager;
    DZRSponsoredTracksManager *_sponsoredTracksManager;
    NSString *_baseUrl;
    NSString *_surveyUrl;
    NSDictionary *_targetingParameters;
    FBNativeAd *_newsFeedNativeAd;
    DZRAudioAdsManager *_audioAdsManager;
}

+ (id)defaultAdManager;
@property(retain, nonatomic) DZRAudioAdsManager *audioAdsManager; // @synthesize audioAdsManager=_audioAdsManager;
@property(retain, nonatomic) FBNativeAd *newsFeedNativeAd; // @synthesize newsFeedNativeAd=_newsFeedNativeAd;
@property(retain, nonatomic) NSDictionary *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(retain, nonatomic) NSString *surveyUrl; // @synthesize surveyUrl=_surveyUrl;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) DZRSponsoredTracksManager *sponsoredTracksManager; // @synthesize sponsoredTracksManager=_sponsoredTracksManager;
@property(retain, nonatomic) DZRBannerAdsManager *bannerAdsManager; // @synthesize bannerAdsManager=_bannerAdsManager;
@property(retain, nonatomic) DZRNativeAdsManager *nativeAdsManager; // @synthesize nativeAdsManager=_nativeAdsManager;
@property(retain, nonatomic) DZROpeningAdManager *openingAdManager; // @synthesize openingAdManager=_openingAdManager;
@property(nonatomic) __weak id <DZRAdManagerdelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setInterstitialsBlocked:(_Bool)arg1;
- (void)nativeAdDidFinishHandlingClick:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (void)nativeAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdDidLoad:(id)arg1;
- (_Bool)shouldDisplayFbAdInNewsFeed;
- (void)userDidDisconnect;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)resetManagers;
- (void)resetAdCounters;
- (void)setParameters:(id)arg1;
- (void)addTestDevices;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
