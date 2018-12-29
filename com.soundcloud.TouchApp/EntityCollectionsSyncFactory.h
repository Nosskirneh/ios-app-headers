//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EntityCollectionsCallFactory, NSManagedObjectContext;

@interface EntityCollectionsSyncFactory : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    EntityCollectionsCallFactory *_callFactory;
}

@property(readonly, nonatomic) EntityCollectionsCallFactory *callFactory; // @synthesize callFactory=_callFactory;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (id)syncForFetchingMissingStations:(id)arg1;
- (id)syncForFetchingMissingTracks:(id)arg1;
- (id)syncForFetchingMissingUsers:(id)arg1;
- (id)syncForFetchingMissingPlaylists:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 callFactory:(id)arg2;
- (id)init;

@end
