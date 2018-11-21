//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioSessionControllerDelegate-Protocol.h"
#import "SPTVoiceAudioSession-Protocol.h"

@class NSString, SPTAudioSessionActivator;
@protocol SPTAudioSessionController;

@interface SPTVoiceAudioSessionManager : NSObject <SPTAudioSessionControllerDelegate, SPTVoiceAudioSession>
{
    _Bool _sessionConfigured;
    _Bool _shouldRequestRecording;
    id <SPTAudioSessionController> _audioSessionController;
    SPTAudioSessionActivator *_audioSessionActivator;
}

@property(nonatomic) _Bool shouldRequestRecording; // @synthesize shouldRequestRecording=_shouldRequestRecording;
@property(retain, nonatomic) SPTAudioSessionActivator *audioSessionActivator; // @synthesize audioSessionActivator=_audioSessionActivator;
@property(readonly, nonatomic) __weak id <SPTAudioSessionController> audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(nonatomic, getter=isSessionConfigured) _Bool sessionConfigured; // @synthesize sessionConfigured=_sessionConfigured;
- (void).cxx_destruct;
- (_Bool)audioSessionShouldSupportBluetooth:(id)arg1;
- (_Bool)audioSessionShouldSupportRecording:(id)arg1;
- (_Bool)shouldModifyAudioSession:(id)arg1;
- (void)refreshAudioSessionConfiguration;
- (void)stopAudioRecording;
- (void)requestAudioRecording;
- (void)deactiveAudioSession;
- (void)configureAudioSession;
- (void)dealloc;
- (id)initWithAudioSessionController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

