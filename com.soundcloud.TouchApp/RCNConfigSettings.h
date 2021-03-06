//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, RCNConfigDBManager;

@interface RCNConfigSettings : NSObject
{
    double _lastFetchTimeInterval;
    NSMutableArray *_successFetchTimes;
    NSMutableArray *_failureFetchTimes;
    NSMutableDictionary *_deviceContext;
    NSMutableDictionary *_customVariables;
    NSMutableDictionary *_internalMetadata;
    NSMutableDictionary *_namespaceToDigest;
    long long _lastFetchStatus;
    long long _lastFetchError;
    double _lastApplyTimeInterval;
    double _lastSetDefaultsTimeInterval;
    RCNConfigDBManager *_DBManager;
    _Bool _hasFetched;
    double _expirationInSeconds;
    NSString *_deviceAuthID;
    NSString *_secretToken;
    NSString *_deviceDataVersion;
    NSString *_configInstanceID;
    NSString *_configInstanceIDToken;
    NSString *_GMPProjectIdentifier;
    NSString *_senderID;
    NSString *_bundleIdentifier;
}

@property(nonatomic) _Bool hasFetched; // @synthesize hasFetched=_hasFetched;
@property(nonatomic) double lastSetDefaultsTimeInterval; // @synthesize lastSetDefaultsTimeInterval=_lastSetDefaultsTimeInterval;
@property(nonatomic) double lastApplyTimeInterval; // @synthesize lastApplyTimeInterval=_lastApplyTimeInterval;
@property(nonatomic) long long lastFetchError; // @synthesize lastFetchError=_lastFetchError;
@property(nonatomic) long long lastFetchStatus; // @synthesize lastFetchStatus=_lastFetchStatus;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property(copy, nonatomic) NSString *GMPProjectIdentifier; // @synthesize GMPProjectIdentifier=_GMPProjectIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *namespaceToDigest; // @synthesize namespaceToDigest=_namespaceToDigest;
@property(copy, nonatomic) NSString *configInstanceIDToken; // @synthesize configInstanceIDToken=_configInstanceIDToken;
@property(copy, nonatomic) NSString *configInstanceID; // @synthesize configInstanceID=_configInstanceID;
@property(copy, nonatomic) NSString *deviceDataVersion; // @synthesize deviceDataVersion=_deviceDataVersion;
@property(copy, nonatomic) NSString *secretToken; // @synthesize secretToken=_secretToken;
@property(copy, nonatomic) NSString *deviceAuthID; // @synthesize deviceAuthID=_deviceAuthID;
@property(nonatomic) double expirationInSeconds; // @synthesize expirationInSeconds=_expirationInSeconds;
- (void).cxx_destruct;
@property(readonly, nonatomic) double lastFetchTimeInterval;
@property(copy, nonatomic) NSDictionary *customVariables;
@property(readonly, copy, nonatomic) NSDictionary *deviceContext;
@property(readonly, copy, nonatomic) NSDictionary *internalMetadata;
@property(readonly, copy, nonatomic) NSArray *failureFetchTimes;
@property(readonly, copy, nonatomic) NSArray *successFetchTimes;
- (void)setNamespaceToDigest:(id)arg1;
- (id)nextRequestWithUserProperties:(id)arg1 fetchedConfig:(id)arg2;
- (void)updateMetadataTable;
- (void)updateFetchTimeWithSuccessFetch:(_Bool)arg1;
- (void)updateMetadata:(_Bool)arg1 namespaceToDigest:(id)arg2;
- (void)updateInternalMetadataTableWithValues:(id)arg1;
- (void)updateInternalContentWithResponse:(id)arg1;
- (id)loadConfigFromMetadataTable;
- (id)initWithDatabaseManager:(id)arg1;
- (_Bool)shouldThrottle;
- (long long)internalMetadataValueForKey:(id)arg1 minValue:(int)arg2 maxValue:(int)arg3 defaultValue:(int)arg4;
- (double)cachedDataThrottledEndTimestamp;
- (_Bool)isCachedDataFresh;
- (_Bool)hasCachedData;
- (double)checkThrottlingEndTime:(_Bool)arg1 fetchTimes:(id)arg2;

@end

