//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol SDLConnectionManagerType;

@interface SDLVoiceCommandManager : NSObject
{
    _Bool _waitingOnHMIUpdate;
    _Bool _hasQueuedUpdate;
    unsigned int _lastVoiceCommandId;
    NSArray *_voiceCommands;
    id <SDLConnectionManagerType> _connectionManager;
    NSString *_currentHMILevel;
    NSArray *_inProgressUpdate;
    NSArray *_oldVoiceCommands;
}

@property(copy, nonatomic) NSArray *oldVoiceCommands; // @synthesize oldVoiceCommands=_oldVoiceCommands;
@property(nonatomic) unsigned int lastVoiceCommandId; // @synthesize lastVoiceCommandId=_lastVoiceCommandId;
@property(nonatomic) _Bool hasQueuedUpdate; // @synthesize hasQueuedUpdate=_hasQueuedUpdate;
@property(retain, nonatomic) NSArray *inProgressUpdate; // @synthesize inProgressUpdate=_inProgressUpdate;
@property(copy, nonatomic) NSString *currentHMILevel; // @synthesize currentHMILevel=_currentHMILevel;
@property(nonatomic) _Bool waitingOnHMIUpdate; // @synthesize waitingOnHMIUpdate=_waitingOnHMIUpdate;
@property(nonatomic) __weak id <SDLConnectionManagerType> connectionManager; // @synthesize connectionManager=_connectionManager;
@property(copy, nonatomic) NSArray *voiceCommands; // @synthesize voiceCommands=_voiceCommands;
- (void).cxx_destruct;
- (void)sdl_hmiStatusNotification:(id)arg1;
- (void)sdl_commandNotification:(id)arg1;
- (id)sdl_commandForVoiceCommand:(id)arg1;
- (id)sdl_addCommandsForVoiceCommands:(id)arg1;
- (id)sdl_deleteCommandsForVoiceCommands:(id)arg1;
- (void)sdl_updateIdsOnVoiceCommands:(id)arg1;
- (void)sdl_sendCurrentVoiceCommands:(CDUnknownBlockType)arg1;
- (void)sdl_sendDeleteCurrentVoiceCommands:(CDUnknownBlockType)arg1;
- (void)sdl_updateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (id)initWithConnectionManager:(id)arg1;
- (id)init;

@end

