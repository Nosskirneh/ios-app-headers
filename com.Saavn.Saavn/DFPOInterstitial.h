//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOInterstitial.h"

#import "DFPOCustomRenderedAdEventHandler-Protocol.h"

@class GADOCorrelator, NSString;
@protocol DFPCustomRenderedInterstitialDelegate, GADAppEventDelegate;

@interface DFPOInterstitial : GADOInterstitial <DFPOCustomRenderedAdEventHandler>
{
    unsigned int _previousCorrelationID;
    _Bool _customAdRenderingEnabled;
    id <GADAppEventDelegate> _appEventDelegate;
    id <DFPCustomRenderedInterstitialDelegate> _customRenderedInterstitialDelegate;
}

@property(nonatomic, getter=isCustomAdRenderingEnabled) _Bool customAdRenderingEnabled; // @synthesize customAdRenderingEnabled=_customAdRenderingEnabled;
@property(nonatomic) __weak id <DFPCustomRenderedInterstitialDelegate> customRenderedInterstitialDelegate; // @synthesize customRenderedInterstitialDelegate=_customRenderedInterstitialDelegate;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
- (void).cxx_destruct;
- (void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2;
- (_Bool)slotShouldPreemptInProgressRequest:(id)arg1;
- (void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)presentFromRootViewController:(id)arg1;
- (_Bool)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) GADOCorrelator *correlator;
- (void)finishedRenderingAdView:(id)arg1;
- (void)recordCustomAdImpression;
- (void)recordClick;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *adUnitID; // @dynamic adUnitID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

