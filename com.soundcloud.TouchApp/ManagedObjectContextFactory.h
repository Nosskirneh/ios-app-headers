//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PersistentStoreManager;

@interface ManagedObjectContextFactory : NSObject
{
    PersistentStoreManager *_storeManager;
}

@property(readonly, nonatomic) PersistentStoreManager *storeManager; // @synthesize storeManager=_storeManager;
- (void).cxx_destruct;
- (id)contextWithConcurrencyType:(unsigned long long)arg1 canSave:(_Bool)arg2;
- (id)testContextWithParent:(id)arg1;
- (id)testContext;
- (id)mainContext;
- (id)offlineContext;
- (id)saveContext;
- (id)initWithStoreManager:(id)arg1;
- (id)init;

@end

