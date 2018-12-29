//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PaginationCoreDataAdapter-Protocol.h"

@class CoreDataController, MobileMiniUserAdapter, MobilePlaylistAdapter, NSString, UserPostedPlaylistRepository;

@interface MobileUserPostedPlaylistAdapter : NSObject <PaginationCoreDataAdapter>
{
    CoreDataController *_controller;
    MobilePlaylistAdapter *_mobilePlaylistAdapter;
    MobileMiniUserAdapter *_mobileMiniUserAdapter;
    UserPostedPlaylistRepository *_repository;
}

@property(readonly, nonatomic) UserPostedPlaylistRepository *repository; // @synthesize repository=_repository;
@property(readonly, nonatomic) MobileMiniUserAdapter *mobileMiniUserAdapter; // @synthesize mobileMiniUserAdapter=_mobileMiniUserAdapter;
@property(readonly, nonatomic) MobilePlaylistAdapter *mobilePlaylistAdapter; // @synthesize mobilePlaylistAdapter=_mobilePlaylistAdapter;
@property(readonly, nonatomic) CoreDataController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)adaptRepostedPlaylist:(id)arg1;
- (id)adaptPostedPlaylist:(id)arg1;
- (id)adaptObject:(id)arg1;
- (id)initWithController:(id)arg1 mobilePlaylistAdapter:(id)arg2 mobileMiniUserAdapter:(id)arg3 userPostedPlaylistRepository:(id)arg4;
- (id)initWithController:(id)arg1 mobilePlaylistAdapter:(id)arg2 mobileMiniUserAdapter:(id)arg3;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
