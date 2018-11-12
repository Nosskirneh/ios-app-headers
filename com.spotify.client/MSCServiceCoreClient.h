//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCServiceCore.h"

@class MSCVersion, NSString;
@protocol MSCServiceCoreDelegateClient;

@interface MSCServiceCoreClient : MSCServiceCore
{
    unsigned int _audioRequestID;
    id <MSCServiceCoreDelegateClient> _delegateClient;
    NSString *_clientAuthenticationIdentifier;
    MSCVersion *_appSdkVersion;
}

@property(retain) MSCVersion *appSdkVersion; // @synthesize appSdkVersion=_appSdkVersion;
@property(retain) NSString *clientAuthenticationIdentifier; // @synthesize clientAuthenticationIdentifier=_clientAuthenticationIdentifier;
@property __weak id <MSCServiceCoreDelegateClient> delegateClient; // @synthesize delegateClient=_delegateClient;
- (void).cxx_destruct;
- (void)releaseAudioWithRequestId:(unsigned int)arg1;
- (unsigned int)requestAudioForType:(unsigned char)arg1 andDuration:(unsigned short)arg2;
- (void)voiceSessionRequest:(unsigned char)arg1;
- (void)navigateToWithDisplayName:(id)arg1 andPlacemark:(id)arg2 andWGSPosition:(id)arg3 andType:(unsigned char)arg4;
- (void)initiatePhoneCallWithDisplayName:(id)arg1 andNumber:(id)arg2;
- (void)sendClientState:(unsigned char)arg1 withValue:(unsigned char)arg2;
- (void)sendFramebufferUpdate:(id)arg1;
- (void)handleRuntimePacket:(id)arg1;
- (void)handleHandshakePacket:(id)arg1;
- (void)handleInitPacket:(id)arg1;
- (void)handleInitDonePacket:(id)arg1;
- (void)sendInitDoneClient;
- (void)connect;
- (void)sendClientHandshake;
- (void)start;
- (id)init;

@end

