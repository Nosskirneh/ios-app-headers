//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOAdViewDelegate.h"

#import "GADODelayLoadDelegate-Protocol.h"

@class GADOSlot, NSString;

@interface GADOBannerAdViewDelegate : GADOAdViewDelegate <GADODelayLoadDelegate>
{
    _Bool _loadDelayed;
    _Bool _loadFinished;
    GADOSlot *_slot;
}

@property(readonly, nonatomic, getter=isLoadFinished) _Bool loadFinished; // @synthesize loadFinished=_loadFinished;
@property(readonly, nonatomic, getter=isLoadDelayed) _Bool loadDelayed; // @synthesize loadDelayed=_loadDelayed;
@property(readonly, nonatomic) __weak GADOSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (id)CSIForGMSGHandler:(id)arg1;
- (void)loadHandlerDidCancel:(id)arg1;
- (void)loadHandlerDidChangeDelay:(id)arg1 from:(long long)arg2 to:(long long)arg3;
- (void)adViewDidMuteAd:(id)arg1;
- (void)adView:(id)arg1 didReceiveUnconfirmedClickWithClickInfo:(id)arg2;
- (void)adViewDidRecordClick:(id)arg1;
- (void)adViewDidRecordImpression:(id)arg1;
- (void)adView:(id)arg1 didLoadVideoWithSize:(struct CGSize)arg2;
- (void)adView:(id)arg1 contentSizeDidChange:(struct CGSize)arg2;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adViewDidFinishLoad:(id)arg1;
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)init;
- (id)initWithSlot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

