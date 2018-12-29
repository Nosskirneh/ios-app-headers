//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSManagedObjectContext, NSOperationQueue, NSPersistentStoreCoordinator;

@interface WMPCoreDataOperation : NSOperation
{
    NSManagedObjectContext *_parentContext;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    CDUnknownBlockType _blockToExecute;
    NSOperationQueue *_mainOperationQueue;
}

+ (long long)priorityBasedOnQualityOfService:(long long)arg1;
@property(nonatomic) __weak NSOperationQueue *mainOperationQueue; // @synthesize mainOperationQueue=_mainOperationQueue;
@property(copy, nonatomic) CDUnknownBlockType blockToExecute; // @synthesize blockToExecute=_blockToExecute;
@property(retain) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSManagedObjectContext *parentContext; // @synthesize parentContext=_parentContext;
- (void).cxx_destruct;
- (void)main;
- (id)initWithRequestBlock:(CDUnknownBlockType)arg1 sharedCoordinator:(id)arg2 operationQueue:(id)arg3 qualityOfService:(long long)arg4;
- (id)initWithRequestBlock:(CDUnknownBlockType)arg1 sharedCoordinator:(id)arg2 operationQueue:(id)arg3;
- (id)init;

@end
