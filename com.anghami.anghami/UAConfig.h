//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface UAConfig : NSObject <NSCopying>
{
    _Bool _inProduction;
    _Bool _detectProvisioningMode;
    _Bool _automaticSetupEnabled;
    _Bool _analyticsEnabled;
    _Bool _clearUserOnAppRestore;
    _Bool _clearNamedUserOnAppRestore;
    _Bool _channelCaptureEnabled;
    _Bool _channelCreationDelayEnabled;
    _Bool _useWKWebView;
    _Bool _defaultDetectProvisioningMode;
    NSString *_developmentAppKey;
    NSString *_developmentAppSecret;
    NSString *_productionAppKey;
    NSString *_productionAppSecret;
    long long _developmentLogLevel;
    long long _productionLogLevel;
    unsigned long long _cacheDiskSizeInMB;
    NSArray *_whitelist;
    NSString *_deviceAPIURL;
    NSString *_analyticsURL;
    NSString *_landingPageContentURL;
    NSString *_messageCenterStyleConfig;
    NSString *_itunesID;
    NSDictionary *_customConfig;
    NSString *_profilePath;
    NSString *_testingMasterSecret;
    NSNumber *_usesProductionPushServer;
}

+ (_Bool)isProductionProvisioningProfile:(id)arg1;
+ (id)normalizeDictionary:(id)arg1;
+ (id)config;
+ (id)configWithContentsOfFile:(id)arg1;
+ (id)defaultConfig;
@property(retain, nonatomic) NSNumber *usesProductionPushServer; // @synthesize usesProductionPushServer=_usesProductionPushServer;
@property(nonatomic) _Bool defaultDetectProvisioningMode; // @synthesize defaultDetectProvisioningMode=_defaultDetectProvisioningMode;
@property(copy, nonatomic) NSString *testingMasterSecret; // @synthesize testingMasterSecret=_testingMasterSecret;
@property(copy, nonatomic) NSString *profilePath; // @synthesize profilePath=_profilePath;
@property(nonatomic) _Bool useWKWebView; // @synthesize useWKWebView=_useWKWebView;
@property(copy, nonatomic) NSDictionary *customConfig; // @synthesize customConfig=_customConfig;
@property(nonatomic, getter=isChannelCreationDelayEnabled) _Bool channelCreationDelayEnabled; // @synthesize channelCreationDelayEnabled=_channelCreationDelayEnabled;
@property(nonatomic, getter=isChannelCaptureEnabled) _Bool channelCaptureEnabled; // @synthesize channelCaptureEnabled=_channelCaptureEnabled;
@property(nonatomic) _Bool clearNamedUserOnAppRestore; // @synthesize clearNamedUserOnAppRestore=_clearNamedUserOnAppRestore;
@property(nonatomic) _Bool clearUserOnAppRestore; // @synthesize clearUserOnAppRestore=_clearUserOnAppRestore;
@property(copy, nonatomic) NSString *itunesID; // @synthesize itunesID=_itunesID;
@property(copy, nonatomic) NSString *messageCenterStyleConfig; // @synthesize messageCenterStyleConfig=_messageCenterStyleConfig;
@property(copy, nonatomic) NSString *landingPageContentURL; // @synthesize landingPageContentURL=_landingPageContentURL;
@property(copy, nonatomic) NSString *analyticsURL; // @synthesize analyticsURL=_analyticsURL;
@property(copy, nonatomic) NSString *deviceAPIURL; // @synthesize deviceAPIURL=_deviceAPIURL;
@property(nonatomic, getter=isAnalyticsEnabled) _Bool analyticsEnabled; // @synthesize analyticsEnabled=_analyticsEnabled;
@property(retain, nonatomic) NSArray *whitelist; // @synthesize whitelist=_whitelist;
@property(nonatomic, getter=isAutomaticSetupEnabled) _Bool automaticSetupEnabled; // @synthesize automaticSetupEnabled=_automaticSetupEnabled;
@property(nonatomic) unsigned long long cacheDiskSizeInMB; // @synthesize cacheDiskSizeInMB=_cacheDiskSizeInMB;
@property(nonatomic) long long productionLogLevel; // @synthesize productionLogLevel=_productionLogLevel;
@property(nonatomic) long long developmentLogLevel; // @synthesize developmentLogLevel=_developmentLogLevel;
@property(copy, nonatomic) NSString *productionAppSecret; // @synthesize productionAppSecret=_productionAppSecret;
@property(copy, nonatomic) NSString *productionAppKey; // @synthesize productionAppKey=_productionAppKey;
@property(copy, nonatomic) NSString *developmentAppSecret; // @synthesize developmentAppSecret=_developmentAppSecret;
@property(copy, nonatomic) NSString *developmentAppKey; // @synthesize developmentAppKey=_developmentAppKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSimulator;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)validate;
@property(nonatomic) _Bool detectProvisioningMode; // @synthesize detectProvisioningMode=_detectProvisioningMode;
@property(nonatomic, getter=isInProduction) _Bool inProduction; // @synthesize inProduction=_inProduction;
@property(readonly, nonatomic) long long logLevel;
@property(readonly, nonatomic) NSString *appSecret;
@property(readonly, nonatomic) NSString *appKey;
- (id)description;
- (id)configWithConfig:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
