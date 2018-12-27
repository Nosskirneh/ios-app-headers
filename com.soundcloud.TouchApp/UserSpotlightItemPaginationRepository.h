//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PaginationRepository-Protocol.h"

@class BaseDAO, CoreDataController, NSManagedObjectID, NSString;

@interface UserSpotlightItemPaginationRepository : NSObject <PaginationRepository>
{
    CoreDataController *_controller;
    NSManagedObjectID *_userId;
    BaseDAO *_userSpotlightItemDAO;
}

@property(readonly, nonatomic) BaseDAO *userSpotlightItemDAO; // @synthesize userSpotlightItemDAO=_userSpotlightItemDAO;
@property(readonly, nonatomic) NSManagedObjectID *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) CoreDataController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)user;
- (id)setUserSpotlightItems:(id)arg1;
- (id)replaceItems:(id)arg1 withNextPageUrl:(id)arg2;
- (id)addItems:(id)arg1 withNextPageUrl:(id)arg2;
- (id)paginatableObject;
- (id)initWithController:(id)arg1 userId:(id)arg2 userSpotlightItemDAO:(id)arg3;
- (id)initWithController:(id)arg1 managedObjectId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

