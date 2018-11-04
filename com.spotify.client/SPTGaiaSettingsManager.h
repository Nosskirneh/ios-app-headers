//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaSettingsProvider.h"

@class NSHashTable, NSString, SPTGaiaDeviceManager, SPTGaiaLogger, SPTGaiaSavedDeviceManager;

@interface SPTGaiaSettingsManager : NSObject <SPTGaiaSettingsProvider>
{
    id <SPTGaiaManager> _gaiaManager;
    id <SPTGaiaSettingsStorageProtocol> _settingsStorage;
    id <SPTLogCenter> _logCenter;
    id <SPTGaiaLockScreenPlayerFlagsProvider><SPTGaiaHomeDeviceFlagsProvider> _settingsFlags;
    SPTGaiaDeviceManager *_deviceManager;
    NSHashTable *_observers;
    SPTGaiaSavedDeviceManager *_savedDeviceManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTGaiaLogger *_logger;
}

+ (id)createDefaultSettingStorage;
@property(readonly, nonatomic) SPTGaiaLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTGaiaSavedDeviceManager *savedDeviceManager; // @synthesize savedDeviceManager=_savedDeviceManager;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(readonly, nonatomic) id <SPTGaiaLockScreenPlayerFlagsProvider><SPTGaiaHomeDeviceFlagsProvider> settingsFlags; // @synthesize settingsFlags=_settingsFlags;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTGaiaSettingsStorageProtocol> settingsStorage; // @synthesize settingsStorage=_settingsStorage;
@property(readonly, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
- (void).cxx_destruct;
- (id)provideHomeDeviceResetSectionWithSettingsViewController:(id)arg1;
- (id)provideHomeDeviceHeaderSectionWithSettingsViewController:(id)arg1;
- (id)provideLockScreenControlsSectionWithSettingsViewController:(id)arg1;
- (id)provideLocalDevicesSectionWithSettingsViewController:(id)arg1;
- (id)providePickerSectionWithSettingsViewController:(id)arg1;
- (id)provideHeaderSectionWithSettingsViewController:(id)arg1;
- (void)registerSettingsInSettingsRegistry:(id)arg1 withGaiaFeature:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(nonatomic) _Bool automaticallyTransfersPlaybackForHomeDevice;
@property(nonatomic) _Bool lockScreenControlsEnabled;
@property(nonatomic) _Bool localDevicesFilterEnabled;
- (void)notifyObserversLockScreenControlsEnabledSettingsChanged;
- (void)registerDefaultSettingsIfNotExist;
- (id)initWithGaiaManager:(id)arg1 storage:(id)arg2 logCenter:(id)arg3 settingsFlags:(id)arg4 deviceManager:(id)arg5 savedDeviceManager:(id)arg6 linkDispatcher:(id)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
