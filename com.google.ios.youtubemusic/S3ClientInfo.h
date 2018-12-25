//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface S3ClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *agentId; // @dynamic agentId;
@property(copy, nonatomic) NSString *applicationId; // @dynamic applicationId;
@property(copy, nonatomic) NSString *applicationVersion; // @dynamic applicationVersion;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) int deviceDisplayDensityDpi; // @dynamic deviceDisplayDensityDpi;
@property(nonatomic) int deviceDisplayHeightPixels; // @dynamic deviceDisplayHeightPixels;
@property(nonatomic) int deviceDisplayWidthPixels; // @dynamic deviceDisplayWidthPixels;
@property(copy, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSMutableArray *experimentIdArray; // @dynamic experimentIdArray;
@property(readonly, nonatomic) unsigned long long experimentIdArray_Count; // @dynamic experimentIdArray_Count;
@property(nonatomic) _Bool hasAgentId; // @dynamic hasAgentId;
@property(nonatomic) _Bool hasApplicationId; // @dynamic hasApplicationId;
@property(nonatomic) _Bool hasApplicationVersion; // @dynamic hasApplicationVersion;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasDeviceDisplayDensityDpi; // @dynamic hasDeviceDisplayDensityDpi;
@property(nonatomic) _Bool hasDeviceDisplayHeightPixels; // @dynamic hasDeviceDisplayHeightPixels;
@property(nonatomic) _Bool hasDeviceDisplayWidthPixels; // @dynamic hasDeviceDisplayWidthPixels;
@property(nonatomic) _Bool hasDeviceModel; // @dynamic hasDeviceModel;
@property(nonatomic) _Bool hasHeterodyneExperimentToken; // @dynamic hasHeterodyneExperimentToken;
@property(nonatomic) _Bool hasIsSharedDevice; // @dynamic hasIsSharedDevice;
@property(nonatomic) _Bool hasPlatformId; // @dynamic hasPlatformId;
@property(nonatomic) _Bool hasPlatformVersion; // @dynamic hasPlatformVersion;
@property(nonatomic) _Bool hasTriggerApplicationId; // @dynamic hasTriggerApplicationId;
@property(nonatomic) _Bool hasUserAgent; // @dynamic hasUserAgent;
@property(copy, nonatomic) NSString *heterodyneExperimentToken; // @dynamic heterodyneExperimentToken;
@property(nonatomic) _Bool isSharedDevice; // @dynamic isSharedDevice;
@property(retain, nonatomic) NSMutableArray *noiseSuppressorIdArray; // @dynamic noiseSuppressorIdArray;
@property(readonly, nonatomic) unsigned long long noiseSuppressorIdArray_Count; // @dynamic noiseSuppressorIdArray_Count;
@property(copy, nonatomic) NSString *platformId; // @dynamic platformId;
@property(copy, nonatomic) NSString *platformVersion; // @dynamic platformVersion;
@property(copy, nonatomic) NSString *triggerApplicationId; // @dynamic triggerApplicationId;
@property(copy, nonatomic) NSString *userAgent; // @dynamic userAgent;

@end

