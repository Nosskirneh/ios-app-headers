//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMediationBannerAdEventDelegate-Protocol.h"
#import "GADNAdRendering-Protocol.h"

@class GADNBannerAd, GADNMediatedIntermission, GADNMediationBannerAdConfiguration, NSString;
@protocol GADMediationAdapter;

@interface GADNRTBMediationBannerAdRenderer : NSObject <GADMediationBannerAdEventDelegate, GADNAdRendering>
{
    CDUnknownBlockType _renderCompletionHandler;
    id <GADMediationAdapter> _loadingAdapter;
    GADNBannerAd *_bannerAd;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _clickEventReceived
    GADNMediationBannerAdConfiguration *_mediationConfiguration;
    GADNMediatedIntermission *_intermission;
}

- (void).cxx_destruct;
- (void)didFailToPresentWithError:(id)arg1;
- (void)willBackgroundApplication;
- (void)didDismissFullScreenView;
- (void)willDismissFullScreenView;
- (void)willPresentFullScreenView;
- (void)reportClick;
- (void)reportImpression;
- (void)adapter:(id)arg1 completedLoadWithMediatedAd:(id)arg2 adConfiguration:(struct NSDictionary *)arg3 transaction:(id)arg4 error:(id)arg5;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

