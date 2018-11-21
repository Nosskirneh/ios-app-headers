//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationPlaybackCoordinator-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTExternalIntegrationPlaybackService, SPTPlaylistPlatformPlaylistDataLoader, SPTPlaylistPlatformService;

@interface SPTExternalIntegrationPlaylistPlaybackCoordinatorService : NSObject <SPTService, SPTExternalIntegrationPlaybackCoordinator>
{
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTPlaylistPlatformPlaylistDataLoader> _dataLoader;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
- (void).cxx_destruct;
- (void)playContentWithURI:(id)arg1 withOptions:(id)arg2 playlistOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)playContentWithURI:(id)arg1 withOptions:(id)arg2 origin:(id)arg3 requestOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)canPlayContentWithURI:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

