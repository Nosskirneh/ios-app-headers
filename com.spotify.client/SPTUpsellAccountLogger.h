//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTUpsellAccountLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logBuyPremiumButtonTouched;
- (void)logGetPremiumTrialButtonTouched;
- (void)logPremiumDestinationDialogImpressionWithPromotedOffer:(id)arg1 currentProduct:(id)arg2 referrerIdentifier:(id)arg3;
- (void)logEvent:(id)arg1 context:(id)arg2;
- (id)initWithLogCenter:(id)arg1;

@end
