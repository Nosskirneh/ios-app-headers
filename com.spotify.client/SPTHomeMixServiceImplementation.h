//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHomeMixService.h"

@class NSString, SPTAllocationContext;

@interface SPTHomeMixServiceImplementation : NSObject <SPTHomeMixService>
{
    id <SPTPlaylistPlatformService> _playlistPlatformService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
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
