//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDevicePickerCellProvider-Protocol.h"

@class NSString, SPTCastManager, SPTGaiaAirplayManager, SPTGaiaDevicePickerAppearanceManager, SPTPlayerState;

@interface SPTGaiaDevicePickerAirplayCellProvider : NSObject <SPTGaiaDevicePickerCellProvider>
{
    SPTGaiaAirplayManager *_airplayManager;
    SPTPlayerState *_playerState;
    SPTCastManager *_castManager;
    SPTGaiaDevicePickerAppearanceManager *_appearanceManager;
}

@property(readonly, nonatomic) SPTGaiaDevicePickerAppearanceManager *appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(readonly, nonatomic) __weak SPTCastManager *castManager; // @synthesize castManager=_castManager;
@property(readonly, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) SPTGaiaAirplayManager *airplayManager; // @synthesize airplayManager=_airplayManager;
- (void).cxx_destruct;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (long long)accessoryIcon;
- (long long)icon;
- (_Bool)shouldDisplayDeviceAsShuffleOnly;
- (id)subtitle;
- (id)title;
- (id)deviceDisplayName;
- (_Bool)isDeviceActive;
- (id)initWithAirplayManager:(id)arg1 playerState:(id)arg2 castManager:(id)arg3 appearanceManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

