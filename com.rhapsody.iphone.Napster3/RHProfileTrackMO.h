//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_RHProfileTrackMO.h"

#import "RHPlayableEntity-Protocol.h"

@class NSString, NSURL, RHTrackMO;

@interface RHProfileTrackMO : _RHProfileTrackMO <RHPlayableEntity>
{
}

+ (id)deferredItemsFromGUIDS:(id)arg1 inContext:(id)arg2 withDataController:(id)arg3;
+ (Class)resultObjectClass;
+ (id)resultObjectKeyPath;
+ (id)rdsDataTypeString;
+ (long long)pageSize;
+ (id)processChartsWithPlayCounts:(id)arg1 profile:(id)arg2 tracks:(id)arg3 type:(unsigned long long)arg4 range:(unsigned long long)arg5 context:(id)arg6;
- (_Bool)isEntityPlayableOffline;
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

@end

