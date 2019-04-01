//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface _TtC3VOX12YouTubeModel : NSObject
{
    // Error parsing type: , name: sessionManager
    // Error parsing type: , name: busy
    // Error parsing type: , name: searchRequest
    // Error parsing type: , name: customPlaylists
    // Error parsing type: , name: topChartsPlaylists
    // Error parsing type: , name: requestCount
}

+ (id)shared;
- (CDUnknownBlockType).cxx_destruct;
- (id)findCustomPlaylist:(id)arg1;
- (void)fetchVideosWithPls:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchVideosWithIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPlaylists:(id)arg1 closure:(CDUnknownBlockType)arg2;
- (void)removeCustomPlaylist:(id)arg1;
- (void)addCustomPlaylist:(id)arg1 closure:(CDUnknownBlockType)arg2;
- (void)fetchCustomPlaylists:(CDUnknownBlockType)arg1;
- (void)fetchTopChartsPlaylists:(CDUnknownBlockType)arg1;
- (void)fetchAllPlaylists:(CDUnknownBlockType)arg1;
@property(nonatomic, copy) NSArray *customPlaylistIds;
- (void)cancelSearch;
- (void)searchTracks:(id)arg1 nextPageToken:(id)arg2 closure:(CDUnknownBlockType)arg3;
- (void)playPlaylistWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playTrackWithId:(id)arg1 bypassAlert:(_Bool)arg2;
@property(nonatomic) _Bool busy; // @synthesize busy;
- (void)dealloc;
- (id)init;

@end

