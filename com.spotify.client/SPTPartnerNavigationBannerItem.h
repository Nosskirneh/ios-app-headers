//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTBannerItem.h"

#import "SPTBannerItemCustomView-Protocol.h"

@class NSString, SPTPartnerNavigationBannerView;
@protocol SPTBannerViewDelegate;

@interface SPTPartnerNavigationBannerItem : SPTBannerItem <SPTBannerItemCustomView>
{
    SPTPartnerNavigationBannerView *_bannerView;
    id <SPTBannerViewDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SPTBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTPartnerNavigationBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (double)presentationDuration;
- (id)initWithBannerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

