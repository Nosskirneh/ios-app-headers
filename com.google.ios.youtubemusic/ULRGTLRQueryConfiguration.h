//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ULRGTLRQueryConfiguration : NSObject
{
    int _deviceTag;
    long long _NLPVersion;
    NSString *_platform;
    NSString *_countryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_previousCountryCode;
    NSString *_devicePrettyName;
    NSString *_deviceRestriction;
}

@property(readonly, nonatomic) NSString *deviceRestriction; // @synthesize deviceRestriction=_deviceRestriction;
@property(readonly, nonatomic) NSString *devicePrettyName; // @synthesize devicePrettyName=_devicePrettyName;
@property(readonly, nonatomic) NSString *previousCountryCode; // @synthesize previousCountryCode=_previousCountryCode;
@property(readonly, nonatomic) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(readonly, nonatomic) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) long long NLPVersion; // @synthesize NLPVersion=_NLPVersion;
@property(readonly, nonatomic) int deviceTag; // @synthesize deviceTag=_deviceTag;
- (void).cxx_destruct;
- (id)initWithDeviceTag:(int)arg1 NLPVersion:(long long)arg2 platform:(id)arg3 countryCode:(id)arg4 mobileCountryCode:(id)arg5 mobileNetworkCode:(id)arg6 previousCountryCode:(id)arg7 devicePrettyName:(id)arg8 deviceRestriction:(id)arg9 error:(id *)arg10;

@end

