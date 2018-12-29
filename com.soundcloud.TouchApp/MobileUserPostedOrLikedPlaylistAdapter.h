//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PaginationCoreDataAdapter-Protocol.h"

@class BaseDAO, CoreDataController, MobilePlaylistAdapter, NSManagedObjectID, NSString;

@interface MobileUserPostedOrLikedPlaylistAdapter : NSObject <PaginationCoreDataAdapter>
{
    CoreDataController *_controller;
    NSManagedObjectID *_userId;
    BaseDAO *_userPostedOrLikedPlaylistDAO;
    MobilePlaylistAdapter *_mobilePlaylistAdapter;
}

@property(readonly, nonatomic) MobilePlaylistAdapter *mobilePlaylistAdapter; // @synthesize mobilePlaylistAdapter=_mobilePlaylistAdapter;
@property(readonly, nonatomic) BaseDAO *userPostedOrLikedPlaylistDAO; // @synthesize userPostedOrLikedPlaylistDAO=_userPostedOrLikedPlaylistDAO;
@property(readonly, nonatomic) NSManagedObjectID *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) CoreDataController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)user;
- (id)adaptPlaylist:(id)arg1 liked:(_Bool)arg2 createdAt:(id)arg3;
- (id)adaptObject:(id)arg1;
- (id)initWithController:(id)arg1 userId:(id)arg2 userPostedOrLikedPlaylistDAO:(id)arg3 mobilePlaylistAdapter:(id)arg4;
- (id)initWithController:(id)arg1 userId:(id)arg2;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
