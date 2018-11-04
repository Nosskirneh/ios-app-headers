//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTGaiaDeviceManager, SPTGaiaLocalDevicePermissions;

@interface SPTGaiaDevicePickerAppearanceManager : NSObject
{
    SPTGaiaDeviceManager *_deviceManager;
    id <SPTGaiaDevicePickerFlagsProvider><SPTGaiaEducationTooltipsFlagsProvider> _flagsProvider;
    id <SPTAccountProductInformationController> _productInformationController;
    SPTGaiaLocalDevicePermissions *_localDevicePermissions;
}

@property(retain, nonatomic) SPTGaiaLocalDevicePermissions *localDevicePermissions; // @synthesize localDevicePermissions=_localDevicePermissions;
@property(retain, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(retain, nonatomic) id <SPTGaiaDevicePickerFlagsProvider><SPTGaiaEducationTooltipsFlagsProvider> flagsProvider; // @synthesize flagsProvider=_flagsProvider;
@property(retain, nonatomic) SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowActiveDeviceAsShuffleOnly;
- (_Bool)shouldDeviceBeShownAsShuffleOnly:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowLocalDeviceAsShuffleOnly;
@property(readonly, nonatomic) _Bool shouldSeparateShuffleAndOnDemandDevices;
- (_Bool)isVisualSeparationOfShuffleOnlyDevicesActive;
- (_Bool)isVisualSeparationOfShuffleOnlyDevicesAllowed;
- (_Bool)currentDeviceIsFreeTier;
- (id)initWithDeviceManager:(id)arg1 flagsProvider:(id)arg2 productInformationController:(id)arg3 localDevicePermissions:(id)arg4;

@end
