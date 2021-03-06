//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFEventsHandler : NSObject
{
    _Bool _adReported;
    _Bool _interstitialAdReported;
    _Bool _nativeAdReported;
}

@property(getter=isNativeAdReported) _Bool nativeAdReported; // @synthesize nativeAdReported=_nativeAdReported;
@property(getter=isInterstitialAdReported) _Bool interstitialAdReported; // @synthesize interstitialAdReported=_interstitialAdReported;
@property(getter=isAdReported) _Bool adReported; // @synthesize adReported=_adReported;
- (void)invokeNativeAdEventBlocker:(CDUnknownBlockType)arg1;
- (void)invokeInterstitialAdEventBlocker:(CDUnknownBlockType)arg1;
- (void)invokeAdEventBlocker:(CDUnknownBlockType)arg1;
- (void)resetNativeEventBlocker;
- (void)resetInterstitialEventBlocker;
- (void)resetAdEventBlocker;
- (id)init;

@end

