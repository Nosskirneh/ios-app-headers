//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTGaiaDevice, UIView;
@protocol SPTGaiaManagerObserver;

@protocol SPTGaiaManager <NSObject>
@property(readonly, nonatomic, getter=isDisplayingGaiaVolumeControlInMainView) _Bool displayingGaiaVolumeControlInMainView;
@property(readonly, nonatomic) NSString *activeDeviceName;
@property(readonly, nonatomic) long long activeConnectionType;
@property(readonly, nonatomic, getter=isDevicePickerAvailable) _Bool devicePickerAvailable;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic) long long remoteConnectionState;
- (NSString *)modelNameForCastGaiaDevice:(SPTGaiaDevice *)arg1;
- (void)presentDevicePickerPopOverFromView:(UIView *)arg1 fromContext:(unsigned long long)arg2;
- (void)presentDevicePickerFromContext:(unsigned long long)arg1;
- (_Bool)isConnectionTypeAvailable:(long long)arg1;
- (void)removeObserver:(id <SPTGaiaManagerObserver>)arg1;
- (void)addObserver:(id <SPTGaiaManagerObserver>)arg1;
@end

