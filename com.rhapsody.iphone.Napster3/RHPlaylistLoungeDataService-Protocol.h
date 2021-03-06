//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, RHLoungeTagMO, RHModelObserver, RHPlaylistMO, ZDSDeferred;

@protocol RHPlaylistLoungeDataService
- (ZDSDeferred *)memberPlaylistsForTag:(RHLoungeTagMO *)arg1 limit:(unsigned long long)arg2;
- (ZDSDeferred *)editorialPlaylistsForTag:(RHLoungeTagMO *)arg1 limit:(unsigned long long)arg2;
- (ZDSDeferred *)deferredTag:(NSString *)arg1;
- (RHModelObserver *)playlistsModelObserverForTag:(RHLoungeTagMO *)arg1;
- (RHModelObserver *)tagsModelObserverForPlaylist:(RHPlaylistMO *)arg1;
- (RHModelObserver *)childrenModelObserverForTag:(RHLoungeTagMO *)arg1;
- (RHModelObserver *)editorialTagsObserver;
@end

