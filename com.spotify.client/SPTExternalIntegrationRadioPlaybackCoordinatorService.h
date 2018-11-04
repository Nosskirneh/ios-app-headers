//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationPlaybackCoordinator.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext;

@interface SPTExternalIntegrationRadioPlaybackCoordinatorService : NSObject <SPTService, SPTExternalIntegrationPlaybackCoordinator>
{
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTRadioService> _radioService;
    id <SPTRadioManager> _radioManager;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) id <SPTRadioManager> radioManager; // @synthesize radioManager=_radioManager;
@property(readonly, nonatomic) __weak id <SPTRadioService> radioService; // @synthesize radioService=_radioService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
- (void).cxx_destruct;
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

