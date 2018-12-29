//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PaginatableService-Protocol.h"

@class CoreDataController, NSString, SyncNotifier, Urn, UserRepository;
@protocol Paginatable, PaginationApi;

@interface UserPostedPlaylistsService : NSObject <PaginatableService>
{
    CoreDataController *_controller;
    Urn *_userUrn;
    SyncNotifier *_syncNotifier;
    id <Paginatable> _paginatableObject;
    UserRepository *_userRepository;
    id <PaginationApi> _paginationApi;
    NSString *_syncDataIdentifier;
}

+ (id)userPostedPlaylistServiceWithUserUrn:(id)arg1;
+ (id)userReleasePlaylistServiceWithUserUrn:(id)arg1;
+ (id)userPostPlaylistServiceWithUserUrn:(id)arg1;
+ (id)userRepostedPlaylistServiceWithUserUrn:(id)arg1;
@property(readonly, copy, nonatomic) NSString *syncDataIdentifier; // @synthesize syncDataIdentifier=_syncDataIdentifier;
@property(readonly, nonatomic) id <PaginationApi> paginationApi; // @synthesize paginationApi=_paginationApi;
@property(readonly, nonatomic) UserRepository *userRepository; // @synthesize userRepository=_userRepository;
@property(readonly, nonatomic) id <Paginatable> paginatableObject; // @synthesize paginatableObject=_paginatableObject;
@property(readonly, nonatomic) SyncNotifier *syncNotifier; // @synthesize syncNotifier=_syncNotifier;
@property(readonly, nonatomic) Urn *userUrn; // @synthesize userUrn=_userUrn;
@property(readonly, nonatomic) CoreDataController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)user;
- (_Bool)userHasNoPostedPlaylists:(id)arg1;
- (id)userPostedPlaylistsSyncData;
- (id)syncSignalForAction:(unsigned long long)arg1;
- (id)nextPage;
- (id)paginationConfig;
- (_Bool)hasMoreData;
- (id)forceRefresh;
- (id)softRefresh;
- (id)paginate;
- (id)initWithController:(id)arg1 userUrn:(id)arg2 syncNotifier:(id)arg3 userRepository:(id)arg4 userPostedPlaylistsApi:(id)arg5 paginatable:(id)arg6 syncDataIdentifier:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
