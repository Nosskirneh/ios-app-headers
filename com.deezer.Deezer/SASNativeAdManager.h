//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SASMediationAdManagerNativeDelegate-Protocol.h"
#import "SASNativeRequestManagerDelegate-Protocol.h"

@class NSString, SASMediationAdManager, SASNativeAd, SASNativeAdPlacement, SASNativeRequestManager;

@interface SASNativeAdManager : NSObject <SASNativeRequestManagerDelegate, SASMediationAdManagerNativeDelegate>
{
    _Bool _requestInProgress;
    SASNativeAdPlacement *_adPlacement;
    SASNativeRequestManager *_requestManager;
    CDUnknownBlockType _completionBlock;
    SASMediationAdManager *_mediationAdManager;
    SASNativeAd *_currentAd;
}

+ (void)setLocation:(id)arg1;
+ (id)nativeAdManagerWithPlacement:(id)arg1;
@property(retain, nonatomic) SASNativeAd *currentAd; // @synthesize currentAd=_currentAd;
@property(retain, nonatomic) SASMediationAdManager *mediationAdManager; // @synthesize mediationAdManager=_mediationAdManager;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) SASNativeRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) SASNativeAdPlacement *adPlacement; // @synthesize adPlacement=_adPlacement;
- (void).cxx_destruct;
- (_Bool)isValidPremiumAd;
- (void)mediationAdManagerDidFailFetchingAdWithErrors:(id)arg1;
- (void)mediationAdManagerDidFinishFetchingAd:(id)arg1 forAd:(id)arg2;
- (void)logError:(id)arg1 insertionID:(id)arg2;
- (void)requestManagerDidFailDownloadingAdWithError:(id)arg1 insertionID:(id)arg2;
- (void)requestManagerDidFinishDownloadingMediationAds:(id)arg1 withPremiumAd:(id)arg2;
- (void)requestManagerDidFinishDownloadingAd:(id)arg1;
- (void)requestAd:(CDUnknownBlockType)arg1;
- (void)requestHasEnded;
- (void)requestHasStarted;
- (_Bool)requestInProgress;
- (void)resetRequestManager;
- (void)cleanRequestManager;
- (id)initWithPlacement:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

