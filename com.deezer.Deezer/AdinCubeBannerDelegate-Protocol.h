//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AdinCubeBannerView, NSString;

@protocol AdinCubeBannerDelegate <NSObject>

@optional
- (void)didClickOnBanner:(AdinCubeBannerView *)arg1;
- (void)didFailToShowBanner:(AdinCubeBannerView *)arg1 withError:(NSString *)arg2;
- (void)didShowBanner:(AdinCubeBannerView *)arg1;
- (void)didFailToLoadBanner:(AdinCubeBannerView *)arg1 withError:(NSString *)arg2;
- (void)didLoadBanner:(AdinCubeBannerView *)arg1;
@end

