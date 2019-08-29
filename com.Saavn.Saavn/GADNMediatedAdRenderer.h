//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMAdNetworkConnector-Protocol.h"
#import "GADNAdRendering-Protocol.h"

@class GADNServerTransaction, NSArray, NSDate, NSDictionary, NSNumber, NSString;
@protocol GADAdNetworkExtras, GADMAdNetworkAdapter;

@interface GADNMediatedAdRenderer : NSObject <GADNAdRendering, GADMAdNetworkConnector>
{
    GADNServerTransaction *_transaction;
    struct NSDictionary *_adConfiguration;
    id <GADMAdNetworkAdapter> _adapter;
}

- (void).cxx_destruct;
- (void)adapter:(id)arg1 clickDidOccurInBanner:(id)arg2;
- (void)adapter:(id)arg1 didFailInterstitial:(id)arg2;
- (void)adapter:(id)arg1 didReceiveInterstitial:(id)arg2;
- (void)adapterDidGetAdClick:(id)arg1;
- (void)adapterWillLeaveApplication:(id)arg1;
- (void)adapterDidDismissFullScreenModal:(id)arg1;
- (void)adapterWillDismissFullScreenModal:(id)arg1;
- (void)adapterWillPresentFullScreenModal:(id)arg1;
- (void)adapter:(id)arg1 didReceiveAdView:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedUnifiedNativeAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (void)adapterDidDismissInterstitial:(id)arg1;
- (void)adapterWillDismissInterstitial:(id)arg1;
- (void)adapterWillPresentInterstitial:(id)arg1;
- (void)adapterDidReceiveInterstitial:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (_Bool)adMuted;
- (float)adVolume;
@property(readonly, nonatomic) NSArray *userKeywords;
@property(readonly, nonatomic) NSString *userLocationDescription;
@property(readonly, nonatomic) double userLocationAccuracyInMeters;
@property(readonly, nonatomic) double userLongitude;
@property(readonly, nonatomic) double userLatitude;
@property(readonly, nonatomic) _Bool userHasLocation;
@property(readonly, nonatomic) NSDate *userBirthday;
@property(readonly, nonatomic) long long userGender;
@property(readonly, nonatomic) NSNumber *underAgeOfConsent;
@property(readonly, nonatomic) NSString *maxAdContentRating;
@property(readonly, nonatomic) NSNumber *childDirectedTreatment;
@property(readonly, nonatomic) id <GADAdNetworkExtras> networkExtras;
@property(readonly, nonatomic) _Bool testMode;
@property(readonly, copy, nonatomic) NSDictionary *credentials;
@property(readonly, copy, nonatomic) NSString *publisherId;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (Class)mainAdapterClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

