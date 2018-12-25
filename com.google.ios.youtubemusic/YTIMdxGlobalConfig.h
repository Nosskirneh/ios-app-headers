//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIMdxGlobalPlatformSupportedConfigs, YTIMdxWhitelistingSupportedConfigs;

@interface YTIMdxGlobalConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int apiVersion; // @dynamic apiVersion;
@property(retain, nonatomic) NSMutableArray *capabilitiesArray; // @dynamic capabilitiesArray;
@property(readonly, nonatomic) unsigned long long capabilitiesArray_Count; // @dynamic capabilitiesArray_Count;
@property(copy, nonatomic) NSString *castAppId; // @dynamic castAppId;
@property(nonatomic) _Bool castEnabled; // @dynamic castEnabled;
@property(retain, nonatomic) NSMutableArray *experimentsArray; // @dynamic experimentsArray;
@property(readonly, nonatomic) unsigned long long experimentsArray_Count; // @dynamic experimentsArray_Count;
@property(nonatomic) _Bool hasApiVersion; // @dynamic hasApiVersion;
@property(nonatomic) _Bool hasCastAppId; // @dynamic hasCastAppId;
@property(nonatomic) _Bool hasCastEnabled; // @dynamic hasCastEnabled;
@property(nonatomic) _Bool hasPlatformConfig; // @dynamic hasPlatformConfig;
@property(nonatomic) _Bool hasWhitelisting; // @dynamic hasWhitelisting;
@property(retain, nonatomic) YTIMdxGlobalPlatformSupportedConfigs *platformConfig; // @dynamic platformConfig;
@property(retain, nonatomic) YTIMdxWhitelistingSupportedConfigs *whitelisting; // @dynamic whitelisting;

@end
