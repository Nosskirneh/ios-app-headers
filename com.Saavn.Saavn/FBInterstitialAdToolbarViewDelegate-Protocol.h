//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInterstitialAdToolbarView, NSDictionary;

@protocol FBInterstitialAdToolbarViewDelegate <NSObject>
- (void)interstitialAdToolbarDidCloseAdChoices:(FBInterstitialAdToolbarView *)arg1;
- (void)interstitialAdToolbarDidTapAdChoices:(FBInterstitialAdToolbarView *)arg1;
- (void)interstitialAdToolbarDidClose:(FBInterstitialAdToolbarView *)arg1 withTouchData:(NSDictionary *)arg2;

@optional
- (void)interstitialAdToolbarDidTapAdInfo:(FBInterstitialAdToolbarView *)arg1;
@end

