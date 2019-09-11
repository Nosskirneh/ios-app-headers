//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GCKProximityInfo : NSObject
{
    NSString *_endpointDeviceID;
    long long _deviceCapabilities;
    NSString *_modelName;
    NSString *_friendlyName;
    NSString *_wifiBSSID;
}

@property(readonly, copy, nonatomic) NSString *wifiBSSID; // @synthesize wifiBSSID=_wifiBSSID;
@property(readonly, copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(readonly, copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, nonatomic) long long deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property(readonly, copy, nonatomic) NSString *endpointDeviceID; // @synthesize endpointDeviceID=_endpointDeviceID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEndpointDeviceID:(id)arg1 deviceCapabilities:(long long)arg2 modelName:(id)arg3 friendlyName:(id)arg4 wifiBSSID:(id)arg5;

@end

