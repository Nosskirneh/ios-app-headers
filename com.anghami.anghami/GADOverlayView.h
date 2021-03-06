//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADAdViewDelegate-Protocol.h"

@class GADAdView, GADAdViewDelegate, NSDictionary, NSString;

@interface GADOverlayView : UIView <GADAdViewDelegate>
{
    GADAdView *_overlayView;
    NSDictionary *_loadOverlayUserInfo;
    GADAdViewDelegate *_adViewDelegate;
    NSString *_overlayIdentifier;
    GADAdView *_adView;
}

@property(retain, nonatomic) GADAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)adViewWebProcessDidTerminate:(id)arg1;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adViewDidStartLoad:(id)arg1;
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handleSendMessageToOverlayView:(id)arg1;
- (void)handleHideOverlayView:(id)arg1;
- (void)handleShowOverlayView:(id)arg1;
- (void)handleLoadOverlayView:(id)arg1;
- (void)handleSendMessageToAdViewNotification:(id)arg1;
- (void)handleHideOverlayNotification:(id)arg1;
- (void)sendMessageToOverlayWithUserInfo:(id)arg1;
- (void)loadOverlayWithUserInfo:(id)arg1;
- (void)addOverlaySubview;
- (void)removeOverlaySubview;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

