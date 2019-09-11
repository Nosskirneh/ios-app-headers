//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationPersistence-Protocol.h"

@class NSDictionary, NSString;

@interface SPTRemoteConfigurationPersistenceImplementation : NSObject <SPTRemoteConfigurationPersistence>
{
    NSDictionary *_typeDictionary;
}

@property(retain, nonatomic) NSDictionary *typeDictionary; // @synthesize typeDictionary=_typeDictionary;
- (void).cxx_destruct;
- (id)applicationDocumentsDirectory;
- (id)fileURLWithName:(id)arg1;
- (void)clearFileWithKey:(id)arg1;
- (void)clearConfigurationFileForType:(unsigned long long)arg1;
- (id)restoreConfigurationWithURL:(id)arg1;
- (void)storeConfiguration:(id)arg1 URL:(id)arg2;
- (void)clearLocalOverride;
- (id)restoreLocalOverride;
- (void)storeLocalOverride:(id)arg1;
- (void)clearAll;
- (id)restoreConfigurationWithType:(unsigned long long)arg1;
- (void)storeConfiguration:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

