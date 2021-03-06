//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBDeviceInfo_Common.h"

@class NSString;

@interface GBDeviceInfo : GBDeviceInfo_Common
{
    NSString *_modelString;
    long long _model;
    CDStruct_6015bbef _deviceVersion;
    CDStruct_3b8e5a0a _displayInfo;
}

+ (CDStruct_3b4937be)_osVersion;
+ (id)_modelNuances;
+ (CDStruct_6015bbef)_deviceVersion;
+ (id)_rawSystemInfoString;
@property CDStruct_3b8e5a0a displayInfo; // @synthesize displayInfo=_displayInfo;
@property long long model; // @synthesize model=_model;
@property(retain) NSString *modelString; // @synthesize modelString=_modelString;
@property CDStruct_6015bbef deviceVersion; // @synthesize deviceVersion=_deviceVersion;
- (void).cxx_destruct;
- (id)init;
- (id)description;
@property(readonly) _Bool isJailbroken;

@end

