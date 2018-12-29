//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PaginationCoreDataAdapter-Protocol.h"

@class CoreDataController, LikePlaylistRepository, MobilePlaylistAdapter, NSManagedObjectID, NSString;

@interface MobileUserLikedPlaylistAdapter : NSObject <PaginationCoreDataAdapter>
{
    CoreDataController *_controller;
    LikePlaylistRepository *_likePlaylistRepository;
    MobilePlaylistAdapter *_mobilePlaylistAdapter;
    NSManagedObjectID *_userId;
}

@property(readonly, nonatomic) NSManagedObjectID *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) MobilePlaylistAdapter *mobilePlaylistAdapter; // @synthesize mobilePlaylistAdapter=_mobilePlaylistAdapter;
@property(readonly, nonatomic) LikePlaylistRepository *likePlaylistRepository; // @synthesize likePlaylistRepository=_likePlaylistRepository;
@property(readonly, nonatomic) CoreDataController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)user;
- (id)adaptObject:(id)arg1;
- (id)initWithController:(id)arg1 likePlaylistRepository:(id)arg2 playlistAdapter:(id)arg3 userId:(id)arg4;
- (id)initWithController:(id)arg1 userId:(id)arg2;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
