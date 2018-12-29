//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDLIAPSessionDelegate-Protocol.h"
#import "SDLTransportType-Protocol.h"

@class NSString, SDLIAPSession, SDLTimer;
@protocol SDLTransportDelegate;

@interface SDLIAPTransport : NSObject <SDLTransportType, SDLIAPSessionDelegate>
{
    _Bool _alreadyDestructed;
    _Bool _sessionSetupInProgress;
    int _retryCounter;
    SDLIAPSession *_controlSession;
    SDLIAPSession *_session;
    id <SDLTransportDelegate> _delegate;
    unsigned long long _backgroundTaskId;
    SDLTimer *_protocolIndexTimer;
}

+ (id)sdl_supportsRequiredProtocolStrings;
@property(retain, nonatomic) SDLTimer *protocolIndexTimer; // @synthesize protocolIndexTimer=_protocolIndexTimer;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(nonatomic) _Bool sessionSetupInProgress; // @synthesize sessionSetupInProgress=_sessionSetupInProgress;
@property(nonatomic) int retryCounter; // @synthesize retryCounter=_retryCounter;
@property(nonatomic) __weak id <SDLTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SDLIAPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SDLIAPSession *controlSession; // @synthesize controlSession=_controlSession;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sdl_destructObjects;
- (double)retryDelay;
- (CDUnknownBlockType)sdl_dataStreamErroredHandler;
- (CDUnknownBlockType)sdl_dataStreamHasBytesHandler;
- (CDUnknownBlockType)sdl_dataStreamEndedHandler;
- (CDUnknownBlockType)sdl_controlStreamErroredHandler;
- (CDUnknownBlockType)sdl_controlStreamHasBytesHandlerForAccessory:(id)arg1;
- (CDUnknownBlockType)sdl_controlStreamEndedHandler;
- (void)sendData:(id)arg1;
- (void)onSessionStreamsEnded:(id)arg1;
- (void)onSessionInitializationCompleteForSession:(id)arg1;
- (void)sdl_retryEstablishSession;
- (void)sdl_createIAPDataSessionWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (void)sdl_createIAPControlSessionWithAccessory:(id)arg1;
- (void)sdl_establishSessionWithAccessory:(id)arg1;
- (_Bool)sdl_connectAccessory:(id)arg1;
- (void)disconnect;
- (void)sdl_connect:(id)arg1;
- (void)connect;
- (void)sdl_applicationDidEnterBackground:(id)arg1;
- (void)sdl_applicationWillEnterForeground:(id)arg1;
- (void)sdl_accessoryDisconnected:(id)arg1;
- (void)sdl_accessoryConnected:(id)arg1;
- (void)sdl_stopEventListening;
- (void)sdl_startEventListening;
- (void)sdl_backgroundTaskEnd;
- (void)sdl_backgroundTaskStart;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
