//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_RHTagDateTrackMO.h"

#import "RHOfflinePlayableEntity-Protocol.h"

@class NSString;

@interface RHTagDateTrackMO : _RHTagDateTrackMO <RHOfflinePlayableEntity>
{
}

+ (id)parseAddTagRequest:(id)arg1 json:(id)arg2 dataController:(id)arg3;
+ (id)addTagRequest:(id)arg1 contentID:(id)arg2 member:(id)arg3 dataController:(id)arg4 napiCatalogId:(id)arg5;
+ (id)deferredItemsFromGUIDS:(id)arg1 inContext:(id)arg2 withDataController:(id)arg3;
+ (Class)resultObjectClass;
+ (id)resultObjectKeyPath;
+ (id)rdsDataTypeString;
+ (long long)pageSize;
@property(readonly, nonatomic) _Bool isEntityPlayableOffline;
- (id)playableTrack;
- (_Bool)isDownloaded;
- (id)resultObject;
- (void)setResultObjectTo:(id)arg1;
- (id)uri;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

