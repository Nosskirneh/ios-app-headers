//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioSession, MPVolumeView;

@interface JPSVolumeButtonHandler : NSObject
{
    _Bool _appIsActive;
    CDUnknownBlockType _upBlock;
    CDUnknownBlockType _downBlock;
    double _initialVolume;
    AVAudioSession *_session;
    MPVolumeView *_volumeView;
}

+ (id)volumeButtonHandlerWithUpBlock:(CDUnknownBlockType)arg1 downBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool appIsActive; // @synthesize appIsActive=_appIsActive;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) AVAudioSession *session; // @synthesize session=_session;
@property(nonatomic) double initialVolume; // @synthesize initialVolume=_initialVolume;
@property(copy, nonatomic) CDUnknownBlockType downBlock; // @synthesize downBlock=_downBlock;
@property(copy, nonatomic) CDUnknownBlockType upBlock; // @synthesize upBlock=_upBlock;
- (void).cxx_destruct;
- (void)setSystemVolume:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationDidChangeActive:(id)arg1;
- (void)setInitialVolume;
- (void)updateInitialVolumeWithDelay;
- (void)disableVolumeHUD;
- (void)audioSessionInterrupted:(id)arg1;
- (void)setupSession;
- (void)dealloc;
- (id)init;

@end
