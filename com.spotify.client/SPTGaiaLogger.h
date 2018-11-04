//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTGaiaLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logOverlayImpressionWithItemId:(id)arg1 pageUri:(id)arg2;
- (void)logDeviceLockScreenSettingsChangedInteractionWithState:(_Bool)arg1;
- (void)logShowLocalDevicesSettingsChangedInteractionWithState:(_Bool)arg1;
- (void)logNewDevicePopupInteractionWithAction:(id)arg1;
- (void)logSwitchDevicePopupInteractionWithAction:(id)arg1;
- (void)logEducationInteractionWithPageIdentifier:(id)arg1 pageURI:(id)arg2;
- (void)logDeviceContextMenuItemInteractionWithIndex:(long long)arg1 andActionIdentifier:(id)arg2;
- (void)logDeviceContextMenuInteractionWithIndex:(long long)arg1 andDeviceType:(id)arg2;
- (void)logDeviceSelectedInteractionWithIndex:(long long)arg1 andDeviceType:(id)arg2;
- (void)logDevicePickerOpenInteractionWithDevicesAvailableState:(id)arg1;
- (void)logDevicePickerInteractionEventWithDevicesAvailableState:(id)arg1;
- (void)logRemoteControlEventOccuredWithType:(long long)arg1;
- (id)initWithLogCenter:(id)arg1;

@end

