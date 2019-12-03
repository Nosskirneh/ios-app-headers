//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADOAdViewDelegate-Protocol.h"

@class GADOAdView, GADOAdViewDelegate, NSDictionary, NSString;

@interface GADOOverlayView : UIView <GADOAdViewDelegate>
{
    GADOAdView *_overlayView;
    NSDictionary *_loadOverlayUserInfo;
    GADOAdViewDelegate *_adViewDelegate;
    NSString *_overlayIdentifier;
    GADOAdView *_adView;
}

@property(retain, nonatomic) GADOAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)adViewWebProcessDidTerminate:(id)arg1;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adViewDidStartLoad:(id)arg1;
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handleSendMessageToOverlayView:(id)arg1;
- (void)handleHideOverlayView;
- (void)handleShowOverlayView;
- (void)handleLoadOverlayView:(id)arg1;
- (void)handleAdMuted;
- (void)handleSendMessageToAdViewNotification:(id)arg1;
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
