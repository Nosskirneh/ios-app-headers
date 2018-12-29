//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "StorageObserver-Protocol.h"

@class CoreDataMapper, NSArray, NSFetchRequest, NSManagedObjectContext, NSString, RACBehaviorSubject, RACScheduler, StorageRequest, StorageRequestOptions;
@protocol ServiceObjectMapper;

@interface CoreDataObserver : NSObject <StorageObserver>
{
    StorageRequest *_storageRequest;
    StorageRequestOptions *_storageRequestOptions;
    NSManagedObjectContext *_context;
    id <ServiceObjectMapper> _serviceObjectMapper;
    CoreDataMapper *_coreDataMapper;
    RACScheduler *_scheduler;
    NSFetchRequest *_fetchRequest;
    RACBehaviorSubject *_subject;
    NSArray *_cache;
    id _notificationToken;
}

@property(retain, nonatomic) id notificationToken; // @synthesize notificationToken=_notificationToken;
@property(copy, nonatomic) NSArray *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) RACBehaviorSubject *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) RACScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) CoreDataMapper *coreDataMapper; // @synthesize coreDataMapper=_coreDataMapper;
@property(readonly, nonatomic) id <ServiceObjectMapper> serviceObjectMapper; // @synthesize serviceObjectMapper=_serviceObjectMapper;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) StorageRequestOptions *storageRequestOptions; // @synthesize storageRequestOptions=_storageRequestOptions;
@property(readonly, nonatomic) StorageRequest *storageRequest; // @synthesize storageRequest=_storageRequest;
- (void).cxx_destruct;
- (id)changesForObservationType:(unsigned long long)arg1 fromFullChanges:(id)arg2;
- (_Bool)changesAreRelevantToSubscriber:(id)arg1;
- (_Bool)relevantEntitiesChanged:(id)arg1;
- (id)observeCoreDataChanges;
- (void)subscribeToChanges;
- (id)mappedObjectForObject:(id)arg1;
- (id)mappedResultsForFetchedObjects:(id)arg1;
- (void)fetchData;
- (void)reloadData;
- (unsigned long long)count;
- (id)entityAtIndex:(unsigned long long)arg1;
- (id)observe;
- (void)dealloc;
- (id)initWithStorageRequest:(id)arg1 options:(id)arg2 managedObjectContext:(id)arg3 serviceObjectMapper:(id)arg4 coreDataMapper:(id)arg5 fetchRequestCreator:(id)arg6 scheduler:(id)arg7;
- (id)initWithStorageRequest:(id)arg1 options:(id)arg2 managedObjectContext:(id)arg3 serviceObjectMapper:(id)arg4 scheduler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
