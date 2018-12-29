//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSOperationQueue, NSPersistentStoreCoordinator;

@interface WMPCoreService : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSOperationQueue *_coreDataOperationQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *coreDataOperationQueue; // @synthesize coreDataOperationQueue=_coreDataOperationQueue;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (void)saveContext;
- (id)initializePersistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (id)initializeManagedObjectContext;
- (void)setUnitTestableContext:(id)arg1;
- (id)getMainContext;
- (void)mergeChanges:(id)arg1;
- (void)updateMainContext:(id)arg1;
- (void)addRequestBlock:(CDUnknownBlockType)arg1 qualityOfService:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addRequestBlock:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addRequestBlock:(CDUnknownBlockType)arg1 qualityOfService:(long long)arg2;
- (void)addRequestBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
