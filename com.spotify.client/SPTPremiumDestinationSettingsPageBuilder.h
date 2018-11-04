//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureSettingsUIProvider.h"

@class NSString;

@interface SPTPremiumDestinationSettingsPageBuilder : NSObject <SPTFeatureSettingsUIProvider>
{
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTNavigationListProvider> _navigationListProvider;
}

@property(readonly, nonatomic) id <SPTNavigationListProvider> navigationListProvider; // @synthesize navigationListProvider=_navigationListProvider;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
- (void).cxx_destruct;
- (id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned long long)arg2;
- (id)showUpsell:(long long)arg1 availableProduct:(long long)arg2 upgradeAvailableButCantPurchase:(_Bool)arg3;
- (id)itemForFullUpsell;
- (void)itemizeSettingsPage:(id)arg1;
- (id)initWithNavigationListProvider:(id)arg1 featureSettingsItemFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
