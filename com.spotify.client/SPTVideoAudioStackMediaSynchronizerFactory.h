//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEventObserverFactory-Protocol.h"

@class NSString;
@protocol SPTAudioPlayerMediaClockService;

@interface SPTVideoAudioStackMediaSynchronizerFactory : NSObject <BMEventObserverFactory>
{
    CDUnknownBlockType _playerProvider;
    id <SPTAudioPlayerMediaClockService> _audioPlayerMediaClockService;
}

@property(nonatomic) __weak id <SPTAudioPlayerMediaClockService> audioPlayerMediaClockService; // @synthesize audioPlayerMediaClockService=_audioPlayerMediaClockService;
@property(copy, nonatomic) CDUnknownBlockType playerProvider; // @synthesize playerProvider=_playerProvider;
- (void).cxx_destruct;
- (id)createPlaybackEventObserverForPlaybackIdentity:(id)arg1 options:(id)arg2 timeObservable:(id)arg3;
- (id)initWithPlayerProvider:(CDUnknownBlockType)arg1 audioPlayerMediaClockService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

