//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreDataMigrationProvider, CoreDataMigrationValidator, CoreDataMigratorFactory, CoreDataModelProvider, NSNumber, PersistentStoreManager;

@interface CoreDataMigrationController : NSObject
{
    CoreDataMigrationProvider *_migrationProvider;
    CoreDataMigratorFactory *_migratorFactory;
    PersistentStoreManager *_persistentStoreManager;
    CoreDataModelProvider *_coreDataModelProvider;
    CoreDataMigrationValidator *_migrationValidator;
    NSNumber *_initialStoreSize;
}

@property(retain, nonatomic) NSNumber *initialStoreSize; // @synthesize initialStoreSize=_initialStoreSize;
@property(readonly, nonatomic) CoreDataMigrationValidator *migrationValidator; // @synthesize migrationValidator=_migrationValidator;
@property(readonly, nonatomic) CoreDataModelProvider *coreDataModelProvider; // @synthesize coreDataModelProvider=_coreDataModelProvider;
@property(readonly, nonatomic) PersistentStoreManager *persistentStoreManager; // @synthesize persistentStoreManager=_persistentStoreManager;
@property(readonly, nonatomic) CoreDataMigratorFactory *migratorFactory; // @synthesize migratorFactory=_migratorFactory;
@property(readonly, nonatomic) CoreDataMigrationProvider *migrationProvider; // @synthesize migrationProvider=_migrationProvider;
- (void).cxx_destruct;
- (id)resultComparingModelsWithAttempted:(_Bool)arg1;
- (id)migrateIfValid:(id)arg1 error:(inout id *)arg2;
- (id)migrate;
- (id)initWithMigrationProvider:(id)arg1 migratorFactory:(id)arg2 persistentStoreManager:(id)arg3 dataModelProvider:(id)arg4 migrationValidator:(id)arg5;
- (id)init;

@end
