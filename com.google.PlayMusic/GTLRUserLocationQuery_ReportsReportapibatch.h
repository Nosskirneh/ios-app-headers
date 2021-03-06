//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRUserLocationQuery.h"

@class NSString;

@interface GTLRUserLocationQuery_ReportsReportapibatch : GTLRUserLocationQuery
{
}

+ (id)queryWithObject:(id)arg1 deviceTag:(long long)arg2;
+ (id)userDataQueryForType:(id)arg1 data:(id)arg2 timestamp:(id)arg3 location:(id)arg4 configuration:(id)arg5 error:(id *)arg6;
+ (id)queryWithRequest:(id)arg1 configuration:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *androidGcmRegistrationId; // @dynamic androidGcmRegistrationId;
@property(copy, nonatomic) NSString *barometerSensorName; // @dynamic barometerSensorName;
@property(copy, nonatomic) NSString *brand; // @dynamic brand;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(copy, nonatomic) NSString *device; // @dynamic device;
@property(copy, nonatomic) NSString *devicePrettyName; // @dynamic devicePrettyName;
@property(copy, nonatomic) NSString *deviceRestriction; // @dynamic deviceRestriction;
@property(nonatomic) long long deviceTag; // @dynamic deviceTag;
@property(nonatomic) long long gmsVersion; // @dynamic gmsVersion;
@property(nonatomic) _Bool isLowRam; // @dynamic isLowRam;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *mobileCountryCode; // @dynamic mobileCountryCode;
@property(copy, nonatomic) NSString *mobileNetworkCode; // @dynamic mobileNetworkCode;
@property(copy, nonatomic) NSString *model; // @dynamic model;
@property(nonatomic) long long moduleVersion; // @dynamic moduleVersion;
@property(nonatomic) long long nlpVersion; // @dynamic nlpVersion;
@property(nonatomic) long long osLevel; // @dynamic osLevel;
@property(nonatomic) long long packageVersion; // @dynamic packageVersion;
@property(copy, nonatomic) NSString *platform; // @dynamic platform;
@property(copy, nonatomic) NSString *previousServerLegalCountryCode; // @dynamic previousServerLegalCountryCode;
@property(copy, nonatomic) NSString *product; // @dynamic product;

@end

