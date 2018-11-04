//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSSet, NSString, SPTGaiaDeviceManager;

@interface SPTGaiaDevice : NSObject
{
    shared_ptr_e7b078e8 _cpp;
    struct scoped_connection _error_connection;
    struct scoped_connection _volume_connection;
    struct scoped_connection _name_connection;
    _Bool _isZeroconf;
    _Bool _webApp;
    NSString *_deviceId;
    NSString *_comparableDeviceId;
    NSString *_physicalDeviceId;
    NSString *_name;
    NSString *_brand;
    NSString *_model;
    long long _deviceType;
    NSString *_deviceClass;
    NSString *_attachId;
    NSDictionary *_capabilities;
    NSSet *_incarnations;
    id <SPTGaiaDeviceDelegate> _delegate;
    SPTGaiaDeviceManager *_manager;
    id <SPTAsyncScheduler> _scheduler;
}

@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak SPTGaiaDeviceManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <SPTGaiaDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSSet *incarnations; // @synthesize incarnations=_incarnations;
@property(retain, nonatomic) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSString *attachId; // @synthesize attachId=_attachId;
@property(readonly, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic, getter=isWebApp) _Bool webApp; // @synthesize webApp=_webApp;
@property(readonly, nonatomic, getter=isZeroconf) _Bool isZeroconf; // @synthesize isZeroconf=_isZeroconf;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *physicalDeviceId; // @synthesize physicalDeviceId=_physicalDeviceId;
@property(readonly, nonatomic) NSString *comparableDeviceId; // @synthesize comparableDeviceId=_comparableDeviceId;
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateCapabilitiesWithJSON:(id)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool supportsAlarm;
@property(retain, nonatomic, getter=getAlarm, setter=setAlarm:) NSDictionary *alarm;
@property(readonly, nonatomic) _Bool supportsLogout;
- (void)logout;
@property(readonly, nonatomic) _Bool supportsVolume;
- (void)volumeDown;
- (void)volumeUp;
@property(nonatomic, getter=getVolume) float volume;
@property(readonly, nonatomic, getter=isGroup) _Bool isGroup;
@property(readonly, nonatomic, getter=isShuffleDevice) _Bool shuffleDevice;
@property(readonly, nonatomic) long long deviceState;
- (void)acknowledgeNewlyDiscovered;
- (_Bool)rename:(id)arg1;
@property(readonly, nonatomic, getter=isAvailableInLocalNetwork) _Bool availableInLocalNetwork;
@property(readonly, nonatomic, getter=isNewlyDiscovered) _Bool isNewlyDiscovered;
@property(nonatomic, getter=isPreferredZeroconf, setter=setPreferredZeroconf:) _Bool preferredZeroconf;
@property(nonatomic, getter=isAttached, setter=setAttached:) _Bool attach;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (shared_ptr_e7b078e8)cpp;
- (id)initWithCpp:(const shared_ptr_e7b078e8 *)arg1 manager:(id)arg2 scheduler:(id)arg3;
- (id)incarnationOfDeviceClass:(id)arg1;
- (unsigned long long)supportedIncarnationsCount;
- (id)connectIncarnation;
- (id)castJSIncarnation;
- (id)castIncarnation;
- (id)specificNameWithSeparator:(id)arg1;
- (_Bool)isTier1;
- (id)deviceTypeString;
- (id)brandAndTypeStringWithSeparator:(id)arg1;
- (id)deviceTypeName;
- (unsigned long long)spt_deviceTypeUsingGaiaManager:(id)arg1;

@end

