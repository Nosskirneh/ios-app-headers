//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PaginationRepository-Protocol.h"

@class BaseDAO, CoreDataController, NSManagedObjectID, NSString, OfflineSync, UserLikedPlaylistRepository;

@interface UserPostedOrLikedPlaylistsPaginationRepository : NSObject <PaginationRepository>
{
    CoreDataController *_controller;
    NSManagedObjectID *_userId;
    BaseDAO *_userPostedOrLikedPlaylistDAO;
    UserLikedPlaylistRepository *_userLikedPlaylistRepository;
    OfflineSync *_offlineSync;
}

@property(readonly, nonatomic) OfflineSync *offlineSync; // @synthesize offlineSync=_offlineSync;
@property(readonly, nonatomic) UserLikedPlaylistRepository *userLikedPlaylistRepository; // @synthesize userLikedPlaylistRepository=_userLikedPlaylistRepository;
@property(readonly, nonatomic) BaseDAO *userPostedOrLikedPlaylistDAO; // @synthesize userPostedOrLikedPlaylistDAO=_userPostedOrLikedPlaylistDAO;
@property(readonly, nonatomic) NSManagedObjectID *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) CoreDataController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)user;
- (id)setUserPostedOrLikedPlaylists:(id)arg1 nextPageUrl:(id)arg2;
- (id)replaceItems:(id)arg1 withNextPageUrl:(id)arg2;
- (id)addItems:(id)arg1 withNextPageUrl:(id)arg2;
- (id)paginatableObject;
- (id)initWithController:(id)arg1 youId:(id)arg2 userPostedOrLikedPlaylistDAO:(id)arg3 userLikedPlaylistRepository:(id)arg4 offlineSync:(id)arg5;
- (id)initWithController:(id)arg1 managedObjectId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
