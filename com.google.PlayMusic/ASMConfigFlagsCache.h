//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASMConfigFlagsService, NSTimer, SSOService;
@protocol ASMOptions;

@interface ASMConfigFlagsCache : NSObject
{
    SSOService *_SSOService;
    id <ASMOptions> _options;
    NSTimer *_cleanupTimer;
    ASMConfigFlagsService *_configFlagsService;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)userDefaults;
- (void)removeSettingsForInactiveUsers;
- (void)cleanup:(id)arg1;
- (id)keyForUserID:(id)arg1;
- (void)storeConfigFlags:(id)arg1 forUserID:(id)arg2;
- (id)cachedConfigFlagsForUserID:(id)arg1;
- (_Bool)isCacheStaleForUserID:(id)arg1;
- (_Bool)shouldUpdateFlagsForUserID:(id)arg1;
- (void)updateCacheWithConfigFlags:(id)arg1 forUserID:(id)arg2;
- (void)updateLastSyncAttemptForUserID:(id)arg1;
- (void)updateSSOService:(id)arg1 options:(id)arg2;
- (id)cachedFlagsForUserID:(id)arg1;
- (void)freshFlagsForUserWithAuthorization:(id)arg1 service:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)cachedFlagsForAuthorization:(id)arg1 andUpdateWithService:(id)arg2;
- (id)init;

@end
