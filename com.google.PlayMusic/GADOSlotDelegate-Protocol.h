//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADOAd, GADORequest, GADOSlot, NSArray, NSString, UIView, UIViewController;

@protocol GADOSlotDelegate <NSObject>

@optional
- (void)slot:(GADOSlot *)arg1 didChangeAdMetadata:(NSString *)arg2 withInfo:(NSString *)arg3;
- (void)slotDidReceiveAdClick:(GADOSlot *)arg1;
- (void)slot:(GADOSlot *)arg1 willLoadAdWithRequest:(GADORequest *)arg2;
- (_Bool)slot:(GADOSlot *)arg1 notifyPublisherToRenderCustomRenderingAd:(GADOAd *)arg2 error:(id *)arg3;
- (void)slot:(GADOSlot *)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
- (void)slot:(GADOSlot *)arg1 willResizeToAdSize:(struct GADOAdSize)arg2;
- (void)slotDidLoadMRAIDAd:(GADOSlot *)arg1;
- (NSArray *)validAdSizes;
- (struct GADOAdSize)adSize;
- (void)layoutSubviewsIfNeeded;
- (void)setAdSize:(struct GADOAdSize)arg1 andReload:(_Bool)arg2;
- (void)slot:(GADOSlot *)arg1 contentSizeDidChange:(struct CGSize)arg2;
- (void)slot:(GADOSlot *)arg1 didReceiveAdView:(UIView *)arg2;
- (UIViewController *)rootViewController;
- (struct CGRect)bounds;
- (struct CGRect)frameInInterface;
- (struct CGRect)frame;
- (_Bool)slotShouldPreemptInProgressRequest:(GADOSlot *)arg1;
- (_Bool)slotShouldReloadCurrentRequest:(GADOSlot *)arg1;
- (_Bool)slot:(GADOSlot *)arg1 shouldLoadRequest:(GADORequest *)arg2 error:(id *)arg3;
@end

