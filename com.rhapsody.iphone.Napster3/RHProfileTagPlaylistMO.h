//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_RHProfileTagPlaylistMO.h"

#import "RHOfflinePlayableEntity-Protocol.h"
#import "RHProfileTag-Protocol.h"
#import "RHTaggedPlayableEntity-Protocol.h"

@class NSString, NSURL, RHTagMO, RHTrackMO;

@interface RHProfileTagPlaylistMO : _RHProfileTagPlaylistMO <RHProfileTag, RHTaggedPlayableEntity, RHOfflinePlayableEntity>
{
}

+ (id)parseEmbeddedRelationsForTagName:(id)arg1 json:(id)arg2 dataController:(id)arg3;
+ (Class)resultObjectClass;
+ (id)resultObjectKeyPath;
+ (id)rdsDataTypeString;
+ (long long)pageSize;
+ (id)napiRequestWithTagName:(id)arg1 napiCatalogId:(id)arg2 profile:(id)arg3 dataController:(id)arg4;
@property(readonly, nonatomic) _Bool isEntityPlayableOffline;
- (_Bool)hasRights;
@property(readonly, nonatomic) RHTrackMO *playableTrack;
- (_Bool)isDownloaded;
- (id)resultObject;
- (void)setResultObjectTo:(id)arg1;
@property(readonly, nonatomic) NSURL *uri;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) RHTagMO *tag;

@end

