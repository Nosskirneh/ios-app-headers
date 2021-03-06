//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSString;

@interface UAEventStore : NSObject
{
    NSManagedObjectContext *_managedContext;
    NSString *_storeName;
}

+ (id)eventStoreWithConfig:(id)arg1;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) NSManagedObjectContext *managedContext; // @synthesize managedContext=_managedContext;
- (void).cxx_destruct;
- (void)storeEventWithID:(id)arg1 eventType:(id)arg2 eventTime:(id)arg3 eventBody:(id)arg4 sessionID:(id)arg5;
- (void)migrateOldDatabase;
- (void)trimEventsToStoreSize:(unsigned long long)arg1;
- (void)deleteAllEvents;
- (void)deleteEventsWithIDs:(id)arg1;
- (void)fetchEventsWithMaxBatchSize:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveEvent:(id)arg1 sessionID:(id)arg2;
- (void)protectedDataAvailable;
- (void)addPersistentStore;
- (id)initWithConfig:(id)arg1;

@end

