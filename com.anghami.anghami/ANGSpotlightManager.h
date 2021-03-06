//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUserActivity;

@interface ANGSpotlightManager : NSObject
{
    NSUserActivity *_activity;
    NSMutableArray *_objectsToIndex;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *objectsToIndex; // @synthesize objectsToIndex=_objectsToIndex;
@property(retain) NSUserActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (id)addCustomKeywordToArray:(id)arg1;
- (void)deleteAllSpotlightData;
- (void)removePlaylistsFromSpotlight:(id)arg1;
- (void)removeSongFromSpotlight:(id)arg1;
- (void)updateUserOwnPlaylists;
- (void)_updateUserOwnPlaylists;
- (void)indexSongOnSpotlight:(id)arg1 setCurrentActivity:(_Bool)arg2 type:(unsigned long long)arg3;
- (void)indexPlaylistOnSpotlight:(id)arg1 setCurrentActivity:(_Bool)arg2 type:(unsigned long long)arg3;
- (void)indexObject:(id)arg1 currentActivity:(_Bool)arg2 type:(unsigned long long)arg3;
- (_Bool)supportsIndexing;
- (id)fullyIndexedPlaylistsPath;
- (id)indexedSongsPath;
- (id)indexedPlaylistsPath;
- (id)indexPathWithFileName:(id)arg1;

@end

