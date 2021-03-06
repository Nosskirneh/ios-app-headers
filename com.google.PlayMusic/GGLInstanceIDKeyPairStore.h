//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GGLInstanceIDBackupExcludedPlist;

@interface GGLInstanceIDKeyPairStore : NSObject
{
    GGLInstanceIDBackupExcludedPlist *_plist;
}

+ (id)keyStoreFileName;
+ (id)creationTimeKeyWithSubtype:(id)arg1;
+ (id)privateTagWithSubtype:(id)arg1;
+ (id)publicTagWithSubtype:(id)arg1;
@property(retain, nonatomic) GGLInstanceIDBackupExcludedPlist *plist; // @synthesize plist=_plist;
- (void).cxx_destruct;
- (_Bool)removeKeyPairCreationTimePlistWithError:(id *)arg1;
- (_Bool)deleteSavedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (id)cachedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (id)validCachedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (id)generateAndSaveKeyWithSubtype:(id)arg1 creationTime:(long long)arg2 error:(id *)arg3;
- (id)init;

@end

