//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTPlaylistExtender-Protocol.h"

@class NSMutableDictionary, NSString, SPTDataLoader;

@interface SPTPlaylistExtenderImplementation : NSObject <SPTDataLoaderDelegate, SPTPlaylistExtender>
{
    SPTDataLoader *_dataLoader;
    NSMutableDictionary *_cachedTracks;
    NSMutableDictionary *_returnedTracks;
    NSMutableDictionary *_availableTracks;
}

@property(retain, nonatomic) NSMutableDictionary *availableTracks; // @synthesize availableTracks=_availableTracks;
@property(retain, nonatomic) NSMutableDictionary *returnedTracks; // @synthesize returnedTracks=_returnedTracks;
@property(retain, nonatomic) NSMutableDictionary *cachedTracks; // @synthesize cachedTracks=_cachedTracks;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)tracksFromResponse:(id)arg1;
- (void)fetchExtraTracksForPlaylistURL:(id)arg1 currentTracks:(id)arg2 numberOfResults:(unsigned long long)arg3 skipAlreadyFetchedTracks:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addReturnedTracks:(id)arg1 forPlaylist:(id)arg2;
- (void)addAvailableTracks:(id)arg1 toPlaylist:(id)arg2;
- (id)consumeAvailableTracksForPlaylist:(id)arg1 numberOfTracks:(unsigned long long)arg2;
- (void)addCachedTracks:(id)arg1 forPlaylist:(id)arg2;
- (void)discardCachedTracks:(id)arg1 forPlaylist:(id)arg2;
- (id)cachedTracksForPlaylistURL:(id)arg1;
- (id)returnedTracksForPlaylistURL:(id)arg1;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

