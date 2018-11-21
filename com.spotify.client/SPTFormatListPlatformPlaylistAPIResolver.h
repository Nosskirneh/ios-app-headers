//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFormatListPlatformResolver-Protocol.h"

@class NSString, SPTFormatListModelBuilder;
@protocol SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTFormatListPlatformPlaylistAPIResolver : NSObject <SPTFormatListPlatformResolver>
{
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    SPTFormatListModelBuilder *_modelBuilder;
}

@property(retain, nonatomic) SPTFormatListModelBuilder *modelBuilder; // @synthesize modelBuilder=_modelBuilder;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
- (void).cxx_destruct;
- (void)resolveFollowerCountForPlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synchronisePlaylistURL:(id)arg1;
- (void)resolveFormatListFromPlaylistURL:(id)arg1 metadataFetchOptions:(id)arg2 tracksFetchOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)subscribeFormatListFromPlaylistURL:(id)arg1 metadataSubscribeOptions:(id)arg2 tracksSubscribeOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resolveFormatListFromPlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveFormatListTypeFromPlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlaylistDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

