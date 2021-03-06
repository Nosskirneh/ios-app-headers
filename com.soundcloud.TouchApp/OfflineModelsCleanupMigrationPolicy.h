//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSEntityMigrationPolicy.h>

@class NSManagedObjectContext;
@protocol OfflineModelsCleanupEntitiesProviding, _TtP9SCOffline28OfflineSyncMigrationManaging_;

@interface OfflineModelsCleanupMigrationPolicy : NSEntityMigrationPolicy
{
    NSManagedObjectContext *_context;
    id <OfflineModelsCleanupEntitiesProviding> _entitiesProvider;
    id <_TtP9SCOffline28OfflineSyncMigrationManaging_> _migrationManager;
    CDUnknownBlockType _shouldMigrate;
}

@property(copy, nonatomic) CDUnknownBlockType shouldMigrate; // @synthesize shouldMigrate=_shouldMigrate;
@property(readonly, nonatomic) id <_TtP9SCOffline28OfflineSyncMigrationManaging_> migrationManager; // @synthesize migrationManager=_migrationManager;
@property(readonly, nonatomic) id <OfflineModelsCleanupEntitiesProviding> entitiesProvider; // @synthesize entitiesProvider=_entitiesProvider;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)cleanupOfflineWithYou:(id)arg1;
- (void)cleanupOfflinePlaylistWithYouEntity:(id)arg1;
- (void)cleanupOfflineTrackWithYouEntity:(id)arg1;
- (_Bool)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (id)initWithContext:(id)arg1 entitiesProvider:(id)arg2 shouldMigrate:(CDUnknownBlockType)arg3;
- (id)initWithOfflineStore:(id)arg1 shouldMigrate:(CDUnknownBlockType)arg2;
- (id)initWithOfflineStore:(id)arg1;
- (id)init;

@end

