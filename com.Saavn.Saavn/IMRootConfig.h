//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMConfig.h"

#import "IMConfig-Protocol.h"

@class IMGDPRConfig, IMRootConfig_SDKInfoModel, NSArray, NSNumber, NSString;
@protocol IMComponentConfig;

@interface IMRootConfig : IMConfig <IMConfig>
{
    long long _maxRetries;
    long long _waitTime;
    long long _retryInterval;
    IMRootConfig_SDKInfoModel *_latestSdkInfo;
    NSNumber *_monetizationDisabled;
    IMGDPRConfig *_gdpr;
    NSArray<IMComponentConfig> *_components;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSArray<IMComponentConfig> *components; // @synthesize components=_components;
@property(retain, nonatomic) IMGDPRConfig *gdpr; // @synthesize gdpr=_gdpr;
@property(retain, nonatomic) NSNumber *monetizationDisabled; // @synthesize monetizationDisabled=_monetizationDisabled;
@property(retain, nonatomic) IMRootConfig_SDKInfoModel *latestSdkInfo; // @synthesize latestSdkInfo=_latestSdkInfo;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long waitTime; // @synthesize waitTime=_waitTime;
@property(nonatomic) long long maxRetries; // @synthesize maxRetries=_maxRetries;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)getType;
- (long long)expiryForProductType:(id)arg1;
- (id)fallbackUrlForProductType:(id)arg1;
- (id)urlForProductType:(id)arg1;
- (_Bool)validate:(id *)arg1;
- (id)toDictionary;
- (_Bool)updatefromDictionary:(id)arg1;
- (void)updateFromObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

