//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPartnerIntegration-Protocol.h"

@protocol SPTPartnerNavigationIntegrationObserver;

@protocol SPTPartnerNavigationIntegration <SPTPartnerIntegration>
@property(readonly, nonatomic, getter=isNavigating) _Bool navigating;
- (void)removeObserver:(id <SPTPartnerNavigationIntegrationObserver>)arg1;
- (void)addObserver:(id <SPTPartnerNavigationIntegrationObserver>)arg1;
@end

