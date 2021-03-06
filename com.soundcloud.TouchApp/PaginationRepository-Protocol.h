//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CoreDataController, NSArray, NSManagedObjectID, NSString, RACSignal;
@protocol Paginatable;

@protocol PaginationRepository <NSObject>
- (RACSignal *)replaceItems:(NSArray *)arg1 withNextPageUrl:(NSString *)arg2;
- (RACSignal *)addItems:(NSArray *)arg1 withNextPageUrl:(NSString *)arg2;
- (id <Paginatable>)paginatableObject;
- (CoreDataController *)controller;
- (id)initWithController:(CoreDataController *)arg1 managedObjectId:(NSManagedObjectID *)arg2;
@end

