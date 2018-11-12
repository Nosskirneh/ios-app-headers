//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTAdNPVModeGeneratorProtocol-Protocol.h"

@class NSString, SPTNowPlayingAudioAdMode;

@interface SPTAdNowPlayingAudioAdModeGenerator : NSObject <SPTAdNPVModeGeneratorProtocol>
{
    SPTNowPlayingAudioAdMode *_audioAdMode;
}

@property(retain, nonatomic) SPTNowPlayingAudioAdMode *audioAdMode; // @synthesize audioAdMode=_audioAdMode;
- (void).cxx_destruct;
- (void)updateAdModeWithAdEntity:(id)arg1;
- (id)getNPVAdMode;
- (id)initWithNowPlayingManager:(id)arg1 adManager:(id)arg2 playerObserver:(id)arg3 animationView:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

