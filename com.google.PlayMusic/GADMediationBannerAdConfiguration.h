//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMediationAdConfiguration.h"

@interface GADMediationBannerAdConfiguration : GADMediationAdConfiguration
{
    struct GADOAdSize _adSize;
}

@property(readonly, nonatomic) struct GADOAdSize adSize; // @synthesize adSize=_adSize;
- (id)initWithBidResponse:(id)arg1 credentials:(id)arg2 extras:(id)arg3;
- (id)init;
- (id)initWithAdSize:(struct GADOAdSize)arg1 bidResponse:(id)arg2 credentials:(id)arg3 extras:(id)arg4;

@end

