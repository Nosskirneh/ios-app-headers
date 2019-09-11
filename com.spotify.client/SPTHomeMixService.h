//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTNetworkService, SPTPlaylistPlatformService;

@interface SPTHomeMixService : NSObject <SPTService>
{
    id <SPTNetworkService> _networkService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (id)provideHomeMixModelForURI:(id)arg1;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

