//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, RACScheduler;

@interface CoreDataController : NSObject
{
    NSManagedObjectContext *_context;
    RACScheduler *_scheduler;
}

@property(readonly, nonatomic) RACScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)createSignal:(CDUnknownBlockType)arg1;
- (_Bool)entity:(id)arg1 hasDynamicProperty:(id)arg2;
- (id)performFetch:(id)arg1 predicate:(id)arg2;
- (void)updateObjects:(id)arg1;
- (id)userInfoFromNotification:(id)arg1 didSave:(_Bool)arg2;
- (void)mergeChangesFromNotification:(id)arg1;
- (void)setupChangeObservation:(id)arg1;
- (id)request:(id)arg1 sectionNameKeyPath:(id)arg2 cacheName:(id)arg3;
- (id)entityForId:(id)arg1;
- (id)save;
- (id)deleteEntities:(id)arg1;
- (id)deleteEntity:(id)arg1;
- (id)countForEntityName:(id)arg1 predicate:(id)arg2;
- (id)createEntityNamed:(id)arg1 parameter:(id)arg2 value:(id)arg3;
- (id)createEntityNamed:(id)arg1;
- (id)createEntitiesNamed:(id)arg1 ofCount:(unsigned long long)arg2;
- (id)performFetchWithEntityName:(id)arg1 predicate:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 observedContext:(id)arg2 scheduler:(id)arg3;
- (id)initWithContext:(id)arg1 observedContext:(id)arg2;
- (_Bool)hasChanges;
- (id)deletedObjects;
- (id)updatedObjects;
- (id)insertedObjects;

@end

