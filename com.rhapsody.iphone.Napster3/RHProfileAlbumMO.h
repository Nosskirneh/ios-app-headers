//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_RHProfileAlbumMO.h"

#import "RHOfflinePlayableEntity-Protocol.h"

@class NSString;

@interface RHProfileAlbumMO : _RHProfileAlbumMO <RHOfflinePlayableEntity>
{
}

+ (id)processChartsWithPlayCounts:(id)arg1 profile:(id)arg2 albums:(id)arg3 type:(unsigned long long)arg4 range:(unsigned long long)arg5 context:(id)arg6;
@property(readonly, nonatomic) _Bool isEntityPlayableOffline;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

