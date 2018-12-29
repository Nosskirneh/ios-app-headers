//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class FIRRemoteConfigSettings, NSDate, NSString, RCNConfigContent, RCNConfigDBManager, RCNConfigExperiment, RCNConfigFetch, RCNConfigSettings;
@protocol OS_dispatch_queue;

@interface FIRRemoteConfig : NSObject <NSFastEnumeration>
{
    RCNConfigContent *_configContent;
    RCNConfigDBManager *_DBManager;
    RCNConfigSettings *_settings;
    RCNConfigFetch *_configFetch;
    RCNConfigExperiment *_configExperiment;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)remoteConfig;
@property(readonly, nonatomic) RCNConfigSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *senderID;
@property(copy, nonatomic) NSString *GMPProjectID;
@property(retain, nonatomic) FIRRemoteConfigSettings *configSettings;
- (void)setDefaultsFromPlistFileName:(id)arg1 namespace:(id)arg2;
- (void)setDefaultsFromPlistFileName:(id)arg1;
- (id)defaultValueForKey:(id)arg1 namespace:(id)arg2;
- (void)setDefaults:(id)arg1 namespace:(id)arg2;
- (void)setDefaults:(id)arg1;
- (id)keysWithPrefix:(id)arg1 namespace:(id)arg2;
- (id)keysWithPrefix:(id)arg1;
- (id)allKeysFromSource:(long long)arg1 namespace:(id)arg2;
@property(readonly, nonatomic) long long lastFetchStatus;
@property(readonly, nonatomic) NSDate *lastFetchTime;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)configValueForKey:(id)arg1 namespace:(id)arg2 source:(long long)arg3;
- (id)configValueForKey:(id)arg1 namespace:(id)arg2;
- (id)configValueForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)updateExperiments;
- (_Bool)activateFetched;
- (void)fetchWithExpirationDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDBManager:(id)arg1;

@end
