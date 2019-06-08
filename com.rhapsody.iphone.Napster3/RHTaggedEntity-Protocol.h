//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSManagedObjectContext, NSString, RHDataController, RHPayloadRequest, RHProfileMO, ZDSDeferred;

@protocol RHTaggedEntity <NSObject>
+ (ZDSDeferred *)parseRemoveTagRequest:(NSString *)arg1 json:(id)arg2 dataController:(RHDataController *)arg3;
+ (ZDSDeferred *)parseAddTagRequest:(NSString *)arg1 json:(id)arg2 dataController:(RHDataController *)arg3;
+ (ZDSDeferred *)parseEmbeddedRelationsForTagName:(NSString *)arg1 json:(id)arg2 dataController:(RHDataController *)arg3;
+ (ZDSDeferred *)deferredItemsFromGUIDS:(NSArray *)arg1 inContext:(NSManagedObjectContext *)arg2 withDataController:(RHDataController *)arg3;
+ (RHPayloadRequest *)removeTagRequest:(NSString *)arg1 contentID:(NSString *)arg2 member:(RHProfileMO *)arg3 dataController:(RHDataController *)arg4 napiCatalogId:(NSString *)arg5;
+ (RHPayloadRequest *)addTagRequest:(NSString *)arg1 contentID:(NSString *)arg2 member:(RHProfileMO *)arg3 dataController:(RHDataController *)arg4 napiCatalogId:(NSString *)arg5;
+ (RHPayloadRequest *)napiRequestWithTagName:(NSString *)arg1 napiCatalogId:(NSString *)arg2 profile:(RHProfileMO *)arg3 dataController:(RHDataController *)arg4;
+ (Class)resultObjectClass;
+ (NSString *)resultObjectKeyPath;
+ (NSString *)rdsDataTypeString;
+ (long long)pageSize;
@end

