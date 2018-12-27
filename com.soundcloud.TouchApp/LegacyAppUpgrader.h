//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Keychain, LegacyAppAccessToken, NSFileManager, NSString, NSUserDefaults, UIApplication, UserSettings;

@interface LegacyAppUpgrader : NSObject
{
    NSFileManager *_fileManager;
    NSString *_cachesPath;
    Keychain *_keychain;
    LegacyAppAccessToken *_legacyAccessToken;
    NSUserDefaults *_userDefaults;
    UserSettings *_userSettings;
    UIApplication *_application;
}

@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) UserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) LegacyAppAccessToken *legacyAccessToken; // @synthesize legacyAccessToken=_legacyAccessToken;
@property(readonly, nonatomic) Keychain *keychain; // @synthesize keychain=_keychain;
@property(readonly, nonatomic) NSString *cachesPath; // @synthesize cachesPath=_cachesPath;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (void)upgradeKeychain;
- (void)copyOldPreferences;
- (void)deleteOldCaches;
- (void)setBadgeCountIsReset;
- (void)setAppDataIsMigrated;
- (void)resetBadgeCount;
- (void)migrateAppData;
- (_Bool)needsDataMigration;
- (_Bool)needsBadgeCountReset;
- (void)migrateFromPreviousApp;
- (id)initWithFileManager:(id)arg1 cachesFolder:(id)arg2 keychain:(id)arg3 oldKeychain:(id)arg4 userDefaults:(id)arg5 userSettings:(id)arg6 application:(id)arg7;
- (id)init;

@end

