//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMediatedNativeAdDelegate-Protocol.h"
#import "GADMediatedNativeAppInstallAd-Protocol.h"
#import "InMobiMediatedNativeAppInstallAdDelegate-Protocol.h"

@class GADMAdapterInMobi, GADNativeAdImage, IMNative, NSArray, NSDictionary, NSString;

@interface InMobiMediatedNativeAppInstallAd : NSObject <GADMediatedNativeAdDelegate, InMobiMediatedNativeAppInstallAdDelegate, GADMediatedNativeAppInstallAd>
{
    GADMAdapterInMobi *adapter_;
    IMNative *_native;
    NSArray *_mappedImages;
    GADNativeAdImage *_mappedIcon;
    NSDictionary *_extras;
    NSDictionary *_nativeAdContentDictionary;
}

@property(retain, nonatomic) NSDictionary *nativeAdContentDictionary; // @synthesize nativeAdContentDictionary=_nativeAdContentDictionary;
@property(copy, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) GADNativeAdImage *mappedIcon; // @synthesize mappedIcon=_mappedIcon;
@property(copy, nonatomic) NSArray *mappedImages; // @synthesize mappedImages=_mappedImages;
@property(retain, nonatomic) IMNative *native; // @synthesize native=_native;
@property(retain, nonatomic) GADMAdapterInMobi *adapter; // @synthesize adapter=adapter_;
- (void)inmobiMediatedNativeAppInstallAdSuccessful:(id)arg1;
- (void)inmobiMediatedNativeAppInstallAdFailed;
- (void)mediatedNativeAd:(id)arg1 didUntrackView:(id)arg2;
- (void)mediatedNativeAd:(id)arg1 didRenderInView:(id)arg2 viewController:(id)arg3;
- (void)mediatedNativeAd:(id)arg1 didRecordClickOnAssetWithName:(id)arg2 view:(id)arg3 viewController:(id)arg4;
- (id)mediatedNativeAdDelegate;
- (id)extraAssets;
- (id)price;
- (id)store;
- (id)starRating;
- (id)callToAction;
- (id)icon;
- (id)body;
- (id)images;
- (id)headline;
- (id)initWithInMobiNativeAppInstallAd:(id)arg1 withAdapter:(id)arg2 shouldDownloadImage:(_Bool)arg3 withCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

