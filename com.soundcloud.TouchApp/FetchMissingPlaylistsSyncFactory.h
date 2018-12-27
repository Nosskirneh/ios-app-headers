//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FetchMissingEntitySyncFactory-Protocol.h"

@class EntityCollectionsCallFactory, NSManagedObjectContext, NSString;

@interface FetchMissingPlaylistsSyncFactory : NSObject <FetchMissingEntitySyncFactory>
{
    NSManagedObjectContext *_managedObjectContext;
    EntityCollectionsCallFactory *_callFactory;
}

@property(readonly, nonatomic) EntityCollectionsCallFactory *callFactory; // @synthesize callFactory=_callFactory;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (id)syncForFetchingMissingEntitiesForUrns:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 callFactory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

