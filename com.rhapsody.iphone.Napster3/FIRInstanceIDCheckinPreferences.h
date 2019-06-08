//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FIRInstanceIDCheckinPreferences : NSObject
{
    _Bool _hasPreCachedAuthCredentials;
    NSString *_deviceID;
    NSString *_secretToken;
    NSString *_deviceDataVersion;
    NSString *_digest;
    NSString *_versionInfo;
    NSMutableDictionary *_gServicesData;
    long long _lastCheckinTimestampMillis;
}

+ (id)checkinKeychainContent:(id)arg1 forIndex:(int)arg2;
+ (id)checkinSecretFromKeychainContent:(id)arg1;
+ (id)checkinDeviceIDFromKeychainContent:(id)arg1;
+ (id)preferencesFromKeychainContents:(id)arg1;
@property(nonatomic) _Bool hasPreCachedAuthCredentials; // @synthesize hasPreCachedAuthCredentials=_hasPreCachedAuthCredentials;
@property(nonatomic) long long lastCheckinTimestampMillis; // @synthesize lastCheckinTimestampMillis=_lastCheckinTimestampMillis;
@property(retain, nonatomic) NSMutableDictionary *gServicesData; // @synthesize gServicesData=_gServicesData;
@property(copy, nonatomic) NSString *versionInfo; // @synthesize versionInfo=_versionInfo;
@property(copy, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(copy, nonatomic) NSString *deviceDataVersion; // @synthesize deviceDataVersion=_deviceDataVersion;
@property(copy, nonatomic) NSString *secretToken; // @synthesize secretToken=_secretToken;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (_Bool)hasValidCheckinInfo;
- (_Bool)hasCheckinInfo;
- (id)checkinPlistContents;
- (id)checkinKeychainContent;
- (void)updateWithCheckinPlistContents:(id)arg1;
- (void)reset;
- (id)initWithDeviceID:(id)arg1 secretToken:(id)arg2;

@end

