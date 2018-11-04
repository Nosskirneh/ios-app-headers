//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTGaiaDevicePickerContextMenuFlagsProvider.h"
#import "SPTGaiaDevicePickerFlagsProvider.h"
#import "SPTGaiaEducationTooltipsFlagsProvider.h"
#import "SPTGaiaHomeDeviceFlagsProvider.h"
#import "SPTGaiaLockScreenPlayerFlagsProvider.h"

@class NSHashTable, NSString;

@interface SPTGaiaFeatureFlagsManager : NSObject <SPTAbbaFeatureFlagsObserver, SPTGaiaDevicePickerContextMenuFlagsProvider, SPTGaiaHomeDeviceFlagsProvider, SPTGaiaLockScreenPlayerFlagsProvider, SPTGaiaDevicePickerFlagsProvider, SPTGaiaEducationTooltipsFlagsProvider>
{
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTLocalSettings> _localSettings;
    NSHashTable *_lockScreenPlayerFlagsObservers;
}

@property(retain, nonatomic) NSHashTable *lockScreenPlayerFlagsObservers; // @synthesize lockScreenPlayerFlagsObservers=_lockScreenPlayerFlagsObservers;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
- (void).cxx_destruct;
- (_Bool)tooltipOnTrackPagesEnabled;
- (_Bool)tooltipOnPlaylistPagesEnabled;
- (_Bool)freeTierEducationPickerDesignEnabled;
- (id)sortingMethodSettingsKey;
- (long long)sortingMethod;
- (void)removeLockScreenPlayerFlagsObserver:(id)arg1;
- (void)addLockScreenPlayerFlagsObserver:(id)arg1;
- (_Bool)lockScreenPlayerFeatureEnabled;
- (id)homeDeviceLocalForcedSettingsKey;
- (_Bool)homeDeviceFeatureEnabled;
- (id)abbaSupportedContextMenuFeatureClasses;
- (id)devicePickerContextMenuFeatureFlagDisabledValue;
- (id)devicePickerContextMenuFeatureFlagEnabledValue;
- (_Bool)contextMenuEnabled:(id)arg1;
- (void)featureFlagsDidChange:(id)arg1;
- (id)initWithFeatureFlags:(id)arg1 localSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

