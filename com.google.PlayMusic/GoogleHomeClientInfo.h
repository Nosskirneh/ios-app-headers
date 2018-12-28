//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GoogleHomeClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(nonatomic) int backendType; // @dynamic backendType;
@property(copy, nonatomic) NSString *buildType; // @dynamic buildType;
@property(copy, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(copy, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(copy, nonatomic) NSString *factoryCountry; // @dynamic factoryCountry;
@property(nonatomic) _Bool hasAppVersion; // @dynamic hasAppVersion;
@property(nonatomic) _Bool hasBackendType; // @dynamic hasBackendType;
@property(nonatomic) _Bool hasBuildType; // @dynamic hasBuildType;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasDeviceModel; // @dynamic hasDeviceModel;
@property(nonatomic) _Bool hasFactoryCountry; // @dynamic hasFactoryCountry;
@property(nonatomic) _Bool hasManufacturer; // @dynamic hasManufacturer;
@property(nonatomic) _Bool hasProductName; // @dynamic hasProductName;
@property(nonatomic) _Bool hasSystemBuild; // @dynamic hasSystemBuild;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *productName; // @dynamic productName;
@property(copy, nonatomic) NSString *systemBuild; // @dynamic systemBuild;

@end

