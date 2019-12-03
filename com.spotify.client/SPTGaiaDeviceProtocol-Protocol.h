//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTGaiaDeviceProtocol <NSObject>
- (_Bool)isSocialConnect;
@property(nonatomic, readonly) long long volumeSteps;
@property(nonatomic, readonly) _Bool supportsVolume;
@property(nonatomic, readonly) float volume;
- (_Bool)isShuffleDevice;
@property(nonatomic, readonly) _Bool isAttached;
@property(nonatomic, readonly) unsigned long long deviceState;
@property(nonatomic, readonly) unsigned long long deviceType;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *physicalDeviceId;
@property(nonatomic, readonly) NSString *deviceId;

// Remaining properties
@property(nonatomic, readonly) _Bool shuffleDevice;
@property(nonatomic, readonly) _Bool socialConnect;
@end

