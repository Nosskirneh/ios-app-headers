//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHModel.h"

@class NSMutableSet;

@interface RHSecureModel : RHModel
{
    NSMutableSet *_secureKeys;
}

+ (void)setGlobalAccessGroup:(id)arg1;
+ (id)globalAccessGroup;
@property(retain) NSMutableSet *secureKeys; // @synthesize secureKeys=_secureKeys;
- (void).cxx_destruct;
- (void)deleteModel;
- (void)keysHaveChanged:(id)arg1;
- (void)keysChanged;
- (void)implRemoveObjectForKey:(id)arg1 sendNotifIfChanged:(_Bool)arg2;
- (void)implSetObject:(id)arg1 forKey:(id)arg2 sendNotifIfChanged:(_Bool)arg3;
- (id)implObjectForKey:(id)arg1;
- (void)loadStoredKeys;
- (id)keyStorageValue;
- (void)dealloc;
- (id)init;

@end

