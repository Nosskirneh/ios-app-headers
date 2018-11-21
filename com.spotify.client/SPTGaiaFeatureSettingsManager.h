//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTCastReceiverAppIDManager, SPTFeatureSettingsItem, SPTGaiaDeviceManager, SPTGaiaFeatureFlagsManager, SPTGaiaSavedDeviceManager;
@protocol SPTFeatureSettingsItemFactory;

@interface SPTGaiaFeatureSettingsManager : NSObject
{
    SPTGaiaFeatureFlagsManager *_featureFlagsManager;
    SPTGaiaDeviceManager *_deviceManager;
    SPTGaiaSavedDeviceManager *_savedDeviceManager;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    SPTFeatureSettingsItem *_customAppIDItem;
    SPTCastReceiverAppIDManager *_receiverAppManager;
}

@property(retain, nonatomic) SPTCastReceiverAppIDManager *receiverAppManager; // @synthesize receiverAppManager=_receiverAppManager;
@property(retain, nonatomic) SPTFeatureSettingsItem *customAppIDItem; // @synthesize customAppIDItem=_customAppIDItem;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(retain, nonatomic) SPTGaiaSavedDeviceManager *savedDeviceManager; // @synthesize savedDeviceManager=_savedDeviceManager;
@property(retain, nonatomic) SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) SPTGaiaFeatureFlagsManager *featureFlagsManager; // @synthesize featureFlagsManager=_featureFlagsManager;
- (void).cxx_destruct;
- (id)customAppIdItem;
- (void)showCustomReceiverAlert;
- (id)customReceiverAppIdSelectionItem;
- (id)castMultipleChoiceItem;
- (id)pickerSortingSettingsItem;
- (id)resetDiscoveredDevicesItem;
- (id)homeDeviceMenuItem;
- (id)pickerContextMenuItem;
- (id)localDevicesInSettings;
- (id)resetHomeDeviceItem;
- (id)resetOnboardingItem;
- (void)updateCustomReceiverAppId:(id)arg1;
- (id)castReceiverAppIDs;
- (void)createCastSettingsPage;
- (void)createGaiaFeatureSettingsPage;
- (id)initWithFeatureFlagsManager:(id)arg1 deviceManager:(id)arg2 savedDeviceManager:(id)arg3 featureSettingsItemFactory:(id)arg4 receiverAppManager:(id)arg5;

@end

