//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTBannerItem.h"

#import "SPTBannerItemCustomView-Protocol.h"
#import "SPTBannerViewDelegate-Protocol.h"

@class NSString, SPTBannerView;
@protocol SPTBannerViewDelegate, SPTPartnerService;

@interface SPTStartWazeBannerItem : SPTBannerItem <SPTBannerViewDelegate, SPTBannerItemCustomView>
{
    id <SPTBannerViewDelegate> _delegate;
    id <SPTPartnerService> _partnerService;
}

@property(readonly, nonatomic) __weak id <SPTPartnerService> partnerService; // @synthesize partnerService=_partnerService;
@property(readonly, nonatomic) __weak id <SPTBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTBannerView *bannerView;
- (id)initWithDelegate:(id)arg1 partnerService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

