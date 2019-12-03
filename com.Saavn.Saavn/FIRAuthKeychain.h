//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRAuthStorage-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FIRAuthKeychain : NSObject <FIRAuthStorage>
{
    NSString *_service;
    NSMutableDictionary *_legacyEntryDeletedForKey;
}

- (void).cxx_destruct;
- (id)legacyGenericPasswordQueryWithKey:(id)arg1;
- (id)genericPasswordQueryWithKey:(id)arg1;
- (void)deleteLegacyItemWithKey:(id)arg1;
- (_Bool)deleteItemWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)setItemWithQuery:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (id)itemWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)removeDataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
