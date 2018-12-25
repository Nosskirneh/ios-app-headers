//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSManagedObjectContext;

@interface YTCoreDataContext : NSObject
{
    _Bool _didTearDown;
    GIMMe *_gimme;
    NSManagedObjectContext *_writerContext;
    NSManagedObjectContext *_context;
}

@property(readonly, nonatomic) _Bool didTearDown; // @synthesize didTearDown=_didTearDown;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSManagedObjectContext *writerContext; // @synthesize writerContext=_writerContext;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)tearDown;
- (void)dealloc;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)initWithModelName:(id)arg1 databaseSuffix:(id)arg2 wipe:(_Bool)arg3 excludeFromBackup:(_Bool)arg4 bundle:(id)arg5;
- (id)initWithModelName:(id)arg1 wipe:(_Bool)arg2 excludeFromBackup:(_Bool)arg3 bundle:(id)arg4;

@end

