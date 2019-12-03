//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRInstanceIDAuthKeychain, FIRInstanceIDBackupExcludedPlist, NSString;

@interface FIRInstanceIDCheckinStore : NSObject
{
    FIRInstanceIDBackupExcludedPlist *_plist;
    FIRInstanceIDAuthKeychain *_keychain;
}

@property(retain, nonatomic) FIRInstanceIDAuthKeychain *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) FIRInstanceIDBackupExcludedPlist *plist; // @synthesize plist=_plist;
- (void).cxx_destruct;
- (void)migrateCheckinItemIfNeeded;
- (id)cachedCheckinPreferences;
- (void)removeCheckinPreferencesWithHandler:(CDUnknownBlockType)arg1;
- (void)saveCheckinPreferences:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *bundleIdentifierForKeychainAccount;
- (_Bool)hasCheckinPlist;
- (id)initWithCheckinPlist:(id)arg1 keychain:(id)arg2;
- (id)initWithCheckinPlistFileName:(id)arg1 applicationSupportSubDirectory:(id)arg2;

@end
