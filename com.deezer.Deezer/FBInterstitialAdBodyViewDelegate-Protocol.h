//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdViewabilityValidator, FBInterstitialAdBodyView, NSNumber, NSURL, UIEvent;

@protocol FBInterstitialAdBodyViewDelegate <NSObject>
- (void)interstitialAdBodyViewDidEnd:(FBInterstitialAdBodyView *)arg1;
- (void)interstitialAdBodyViewDidProgress:(FBInterstitialAdBodyView *)arg1;
- (void)interstitialAdBodyViewDidClick:(FBInterstitialAdBodyView *)arg1 withEvent:(UIEvent *)arg2 withCommand:(NSURL *)arg3 withPageNumber:(NSNumber *)arg4 withPageTotal:(NSNumber *)arg5;
- (void)interstitialAdBodyViewDidLogImpression:(FBInterstitialAdBodyView *)arg1 withViewabilityValidator:(FBAdViewabilityValidator *)arg2 withPageNumber:(NSNumber *)arg3 withPageTotal:(NSNumber *)arg4;
- (void)interstitialAdBodyViewDidLoad:(FBInterstitialAdBodyView *)arg1;
@end

