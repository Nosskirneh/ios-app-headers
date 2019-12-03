//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceLibraryRecognitionTaskFactory-Protocol.h"

@class NSString, SPTDataLoaderFactory, SPTVoiceLibrarySpeechProxyRequest;
@protocol SPTPlayer, SPTVoiceLibraryAudioRecorderFactory;

@interface SPTVoiceLibraryRecognitionTaskFactoryImplementation : NSObject <SPTVoiceLibraryRecognitionTaskFactory>
{
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTVoiceLibraryAudioRecorderFactory> _audioRecorderFactory;
    id <SPTPlayer> _player;
    SPTVoiceLibrarySpeechProxyRequest *_speechProxyRequest;
}

@property(readonly, nonatomic) SPTVoiceLibrarySpeechProxyRequest *speechProxyRequest; // @synthesize speechProxyRequest=_speechProxyRequest;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTVoiceLibraryAudioRecorderFactory> audioRecorderFactory; // @synthesize audioRecorderFactory=_audioRecorderFactory;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (id)createVoiceRecognitionTask;
- (id)initWithDataLoaderFactory:(id)arg1 audioRecorderFactory:(id)arg2 player:(id)arg3 speechProxyRequest:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

