//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TWTRKeychainWrapper : NSObject
{
    NSMutableDictionary *_keychainItemData;
    NSMutableDictionary *_genericPasswordQuery;
}

@property(retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery=_genericPasswordQuery;
@property(retain, nonatomic) NSMutableDictionary *keychainItemData; // @synthesize keychainItemData=_keychainItemData;
- (void).cxx_destruct;
- (void)executeAccessGroupBlockWithBlock:(CDUnknownBlockType)arg1 withBlockToRunOnSimulator:(CDUnknownBlockType)arg2;
- (_Bool)writeToKeychain;
- (id)secItemFormatToDictionary:(id)arg1;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (void)resetKeychainItem;
- (id)objectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithAccount:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;

@end

