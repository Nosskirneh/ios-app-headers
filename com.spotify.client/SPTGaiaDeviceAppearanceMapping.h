//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTCastManager, SPTGaiaHomeDeviceManager;

@interface SPTGaiaDeviceAppearanceMapping : NSObject
{
    SPTCastManager *_castManager;
    SPTGaiaHomeDeviceManager *_homeDeviceManager;
}

@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *homeDeviceManager; // @synthesize homeDeviceManager=_homeDeviceManager;
@property(readonly, nonatomic) SPTCastManager *castManager; // @synthesize castManager=_castManager;
- (void).cxx_destruct;
- (long long)iconForGaiaDeviceType:(unsigned long long)arg1 isGroup:(_Bool)arg2;
- (long long)iconForLocalDevice;
- (_Bool)isDeviceCast:(id)arg1;
- (long long)iconForDevice:(id)arg1;
- (id)initWithCastManager:(id)arg1 homeDeviceManager:(id)arg2;

@end

