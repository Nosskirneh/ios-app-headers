//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTAudioPreviewService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTAudioPreviewModelFactory, SPTAudioPreviewPlayer, SPTAudioPreviewUIFactory, SPTGLUEService, SPTNetworkService, SPTPlayerFeature, SPTSessionService;

@interface SPTAudioPreviewServiceImplementation : NSObject <SPTAudioPreviewService>
{
    id <SPTNetworkService> _networkService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTSessionService> _sessionService;
    id <SPTGLUEService> _glueService;
    id <SPTAudioPreviewPlayer> _player;
    id <SPTAudioPreviewUIFactory> _uiFactory;
    id <SPTAudioPreviewModelFactory> _modelFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTAudioPreviewModelFactory> modelFactory; // @synthesize modelFactory=_modelFactory;
@property(retain, nonatomic) id <SPTAudioPreviewUIFactory> uiFactory; // @synthesize uiFactory=_uiFactory;
@property(retain, nonatomic) id <SPTAudioPreviewPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (id)providePlayer;
- (id)provideModelFactory;
- (id)provideUIFactory;
- (void)unload;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

