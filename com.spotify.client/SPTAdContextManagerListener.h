//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdContextManagerObserver-Protocol.h"

@class NSString, SPTAdContextManager, SPTAdRulesManager;
@protocol SPTAdsBaseCosmosBridge, SPTAdsBaseGlobalSettingsController;

@interface SPTAdContextManagerListener : NSObject <SPTAdContextManagerObserver>
{
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    SPTAdRulesManager *_adRulesManager;
    SPTAdContextManager *_adContextManager;
    id <SPTAdsBaseGlobalSettingsController> _adsSettingsController;
}

@property(retain, nonatomic) id <SPTAdsBaseGlobalSettingsController> adsSettingsController; // @synthesize adsSettingsController=_adsSettingsController;
@property(retain, nonatomic) SPTAdContextManager *adContextManager; // @synthesize adContextManager=_adContextManager;
@property(retain, nonatomic) SPTAdRulesManager *adRulesManager; // @synthesize adRulesManager=_adRulesManager;
@property(retain, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (void).cxx_destruct;
- (void)adContextManager:(id)arg1 didChangePlayOrigin:(id)arg2 fromPlayOrigin:(id)arg3;
- (void)adContextManager:(id)arg1 didChangeNavigationContext:(id)arg2 fromNavigationContext:(id)arg3;
- (void)dealloc;
- (id)initWithCosmosBridge:(id)arg1 adsSettingsController:(id)arg2 adRulesManager:(id)arg3 adContextManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

