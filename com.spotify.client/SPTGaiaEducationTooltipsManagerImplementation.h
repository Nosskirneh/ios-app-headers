//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTGaiaEducationTooltipsManager-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTGaiaDeviceManager, SPTGaiaLocalDevicePermissions, SPTPlayerState;
@protocol SPTAccountProductInformationController, SPTGaiaEducationTooltipsFlagsProvider, SPTGaiaSettingsStorageProtocol, SPTPlayer;

@interface SPTGaiaEducationTooltipsManagerImplementation : NSObject <SPTPlayerObserver, SPTGaiaEducationTooltipsManager>
{
    id <SPTGaiaEducationTooltipsFlagsProvider> _flagsProvider;
    SPTGaiaDeviceManager *_deviceManager;
    id <SPTGaiaSettingsStorageProtocol> _localStorage;
    id <SPTPlayer> _player;
    id <SPTAccountProductInformationController> _productInformationController;
    SPTGaiaLocalDevicePermissions *_localDevicePermissions;
    SPTPlayerState *_currentPlayerState;
}

@property(retain, nonatomic) SPTPlayerState *currentPlayerState; // @synthesize currentPlayerState=_currentPlayerState;
@property(readonly, nonatomic) SPTGaiaLocalDevicePermissions *localDevicePermissions; // @synthesize localDevicePermissions=_localDevicePermissions;
@property(readonly, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTGaiaSettingsStorageProtocol> localStorage; // @synthesize localStorage=_localStorage;
@property(readonly, nonatomic) SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(readonly, nonatomic) id <SPTGaiaEducationTooltipsFlagsProvider> flagsProvider; // @synthesize flagsProvider=_flagsProvider;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)notifyDidDisplayTooltipForPage:(long long)arg1;
- (_Bool)shouldDisableOnboardingPopups;
- (_Bool)canDisplayTooltipForPage:(long long)arg1;
- (_Bool)isNotConnectedToAnyDevice;
- (_Bool)isLocalDeviceRestrictedToShuffleMode;
- (_Bool)isPlayerContextAvailable;
- (_Bool)isFlagEnabledForContext:(long long)arg1;
- (_Bool)isDisplayOfTooltipAllowedForContext:(long long)arg1;
- (_Bool)hasAtLeastOneOnDemandDeviceAvailable;
- (void)setLastSeenDate:(id)arg1;
- (id)lastSeenDate;
- (void)setNumberOfTimesPageWasViewed:(long long)arg1 forContext:(long long)arg2;
- (long long)numberOfTimesPageWasViewedForContext:(long long)arg1;
- (id)numberOfTimesSeenStoringIdentifierForContext:(long long)arg1;
- (void)dealloc;
- (id)initWithFlagsProvider:(id)arg1 deviceManager:(id)arg2 localStorage:(id)arg3 player:(id)arg4 productInformationController:(id)arg5 localDevicePermissions:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

