//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAppExtensionKeychainManager-Protocol.h"

@class NSString, SPTAppExtensionKeychainWrapper;

@interface SPTAppExtensionSecureKeychainManager : NSObject <SPTAppExtensionKeychainManager>
{
    SPTAppExtensionKeychainWrapper *_keychainWrapper;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) SPTAppExtensionKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
- (void).cxx_destruct;
- (_Bool)deleteObjectForDomain:(id)arg1 andKey:(id)arg2 accessGroup:(id)arg3 synchronizable:(_Bool)arg4;
- (_Bool)deleteStringForDomain:(id)arg1 andKey:(id)arg2 accessGroup:(id)arg3;
- (int)addKeychainValueWithData:(id)arg1 andQuery:(id)arg2;
- (int)updateKeychainValueWithData:(id)arg1 andQuery:(id)arg2;
- (int)removeKeychainItemWithQuery:(id)arg1;
- (void)setData:(id)arg1 forDomain:(id)arg2 andKey:(id)arg3 accessGroup:(id)arg4 synchronizable:(_Bool)arg5;
- (void)setString:(id)arg1 forDomain:(id)arg2 andKey:(id)arg3 accessGroup:(id)arg4;
- (id)dataForDomain:(id)arg1 andKey:(id)arg2 accessGroup:(id)arg3 synchronizable:(_Bool)arg4;
- (id)stringForDomain:(id)arg1 andKey:(id)arg2 accessGroup:(id)arg3;
- (id)initWithKeychainWrapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

