//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTGaiaSilentAudioPlayerProvider-Protocol.h"

@class NSString;
@protocol SPTGaiaSilentAudioPlayer;

@interface SPTGaiaSilentAudioPlayerProviderDefaultImplementation : NSObject <SPTGaiaSilentAudioPlayerProvider>
{
    id <SPTGaiaSilentAudioPlayer> _silentAudioPlayer;
}

@property(retain, nonatomic) id <SPTGaiaSilentAudioPlayer> silentAudioPlayer; // @synthesize silentAudioPlayer=_silentAudioPlayer;
- (void).cxx_destruct;
- (id)silentAudioSession;
- (id)newSilentAudioPlayer;
- (id)provideSilentAudioPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

