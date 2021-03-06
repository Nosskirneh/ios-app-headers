//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APDevice, APPlayer, APPlayerManager, APPlaylist, APUserPassword, APZone, NSError, NSString;

@protocol APPlayerManagerDelegate <NSObject>

@optional
- (void)playerManager:(APPlayerManager *)arg1 device:(APDevice *)arg2 onBatteryPower:(_Bool)arg3 chargeLevel:(int)arg4 timeUntilBatteryDischarged:(int)arg5 timeUntilBatteryCharged:(int)arg6;
- (APUserPassword *)playerManager:(APPlayerManager *)arg1 passwordRequestedForDevice:(APDevice *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 deviceRequiresPhysicalReboot:(APDevice *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 device:(APDevice *)arg2 updateProgressChanged:(double)arg3;
- (void)playerManager:(APPlayerManager *)arg1 device:(APDevice *)arg2 updateStatusChanged:(long long)arg3;
- (void)playerManager:(APPlayerManager *)arg1 deviceUpdateAvailable:(APDevice *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 device:(APDevice *)arg2 autoUpdateChanged:(_Bool)arg3;
- (void)playerManager:(APPlayerManager *)arg1 deviceUpdateStarted:(APDevice *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 device:(APDevice *)arg2 displayNameChanged:(NSString *)arg3;
- (void)playerManager:(APPlayerManager *)arg1 deviceRemoved:(APDevice *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 deviceAdded:(APDevice *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 player:(APPlayer *)arg2 inputSelectorChanged:(NSString *)arg3;
- (void)playerManager:(APPlayerManager *)arg1 zoneControlsEnabledChanged:(APZone *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 player:(APPlayer *)arg2 volumeEnabledChanged:(_Bool)arg3;
- (void)playerManager:(APPlayerManager *)arg1 player:(APPlayer *)arg2 interruptibleChanged:(_Bool)arg3;
- (void)playerManager:(APPlayerManager *)arg1 zone:(APZone *)arg2 playbackErrorInIndex:(int)arg3 error:(NSError *)arg4;
- (void)playerManager:(APPlayerManager *)arg1 zoneWithNewID:(APZone *)arg2 oldZoneID:(NSString *)arg3;
- (void)playerManager:(APPlayerManager *)arg1 zonePlayersListChanged:(APZone *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 player:(APPlayer *)arg2 displayNameChanged:(NSString *)arg3;
- (void)playerManager:(APPlayerManager *)arg1 playlist:(APPlaylist *)arg2 shuffleStateChanged:(long long)arg3;
- (void)playerManager:(APPlayerManager *)arg1 playlist:(APPlaylist *)arg2 loopStateChanged:(long long)arg3;
- (void)playerManager:(APPlayerManager *)arg1 player:(APPlayer *)arg2 volumeStateChanged:(int)arg3;
- (void)playerManager:(APPlayerManager *)arg1 player:(APPlayer *)arg2 partyModeEnabledChanged:(_Bool)arg3;
- (void)playerManager:(APPlayerManager *)arg1 playlistChanged:(APPlaylist *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 zone:(APZone *)arg2 playStateChanged:(long long)arg3;
- (void)playerManager:(APPlayerManager *)arg1 zoneRemoved:(APZone *)arg2;
- (void)playerManager:(APPlayerManager *)arg1 zoneAdded:(APZone *)arg2;
@end

