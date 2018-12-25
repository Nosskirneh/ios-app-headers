//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIConfirmDialogRenderer, YTIFullScreenOverlayRenderer, YTIInterstitialPromoRenderer, YTIMealbarPromoRenderer, YTIMembershipPostTransactionRenderer, YTIMusicFullscreenPromoRenderer, YTIUnlimitedFamilyMessageInterstitialRenderer, YTIYPCPostTransactionRenderer, YTIYPCTransactionErrorMessageRenderer, YTIYPCUnpluggedWelcomeRenderer;

@interface YTIPostTransactionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIConfirmDialogRenderer *confirmDialogRenderer; // @dynamic confirmDialogRenderer;
@property(retain, nonatomic) YTIYPCTransactionErrorMessageRenderer *errorMessageRenderer; // @dynamic errorMessageRenderer;
@property(retain, nonatomic) YTIFullScreenOverlayRenderer *fullScreenOverlayRenderer; // @dynamic fullScreenOverlayRenderer;
@property(nonatomic) _Bool hasConfirmDialogRenderer; // @dynamic hasConfirmDialogRenderer;
@property(nonatomic) _Bool hasErrorMessageRenderer; // @dynamic hasErrorMessageRenderer;
@property(nonatomic) _Bool hasFullScreenOverlayRenderer; // @dynamic hasFullScreenOverlayRenderer;
@property(nonatomic) _Bool hasInterstitialPromoRenderer; // @dynamic hasInterstitialPromoRenderer;
@property(nonatomic) _Bool hasMealbarPromoRenderer; // @dynamic hasMealbarPromoRenderer;
@property(nonatomic) _Bool hasMembershipPostTransactionRenderer; // @dynamic hasMembershipPostTransactionRenderer;
@property(nonatomic) _Bool hasMusicFullscreenPromoRenderer; // @dynamic hasMusicFullscreenPromoRenderer;
@property(nonatomic) _Bool hasUnlimitedFamilyMessageInterstitialRenderer; // @dynamic hasUnlimitedFamilyMessageInterstitialRenderer;
@property(nonatomic) _Bool hasYpcPostTransactionRenderer; // @dynamic hasYpcPostTransactionRenderer;
@property(nonatomic) _Bool hasYpcUnpluggedWelcomeRenderer; // @dynamic hasYpcUnpluggedWelcomeRenderer;
@property(retain, nonatomic) YTIInterstitialPromoRenderer *interstitialPromoRenderer; // @dynamic interstitialPromoRenderer;
@property(retain, nonatomic) YTIMealbarPromoRenderer *mealbarPromoRenderer; // @dynamic mealbarPromoRenderer;
@property(retain, nonatomic) YTIMembershipPostTransactionRenderer *membershipPostTransactionRenderer; // @dynamic membershipPostTransactionRenderer;
@property(retain, nonatomic) YTIMusicFullscreenPromoRenderer *musicFullscreenPromoRenderer; // @dynamic musicFullscreenPromoRenderer;
@property(retain, nonatomic) YTIUnlimitedFamilyMessageInterstitialRenderer *unlimitedFamilyMessageInterstitialRenderer; // @dynamic unlimitedFamilyMessageInterstitialRenderer;
@property(retain, nonatomic) YTIYPCPostTransactionRenderer *ypcPostTransactionRenderer; // @dynamic ypcPostTransactionRenderer;
@property(retain, nonatomic) YTIYPCUnpluggedWelcomeRenderer *ypcUnpluggedWelcomeRenderer; // @dynamic ypcUnpluggedWelcomeRenderer;

@end

