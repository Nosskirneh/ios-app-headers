//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCKSessionManagerListener-Protocol.h"

@class GCKSessionManager, GCKSessionTraits, GCKUIButton, NSString, NSTimer, UIButton, UISlider, UISwitch, UIView;

@interface GCKUIDeviceVolumeController : NSObject <GCKSessionManagerListener>
{
    GCKSessionManager *_sessionManager;
    GCKSessionTraits *_sessionTraits;
    UIView *_volumeView;
    UISlider *_volumeViewSlider;
    float _savedSystemVolume;
    float _initialSystemVolume;
    _Bool _volumeSliderMoving;
    _Bool _pendingVolumeSliderUpdate;
    NSTimer *_volumeSliderUpdateTimer;
    UIButton *_volumeUpButton;
    UIButton *_volumeDownButton;
    UISlider *_volumeSlider;
    UISwitch *_muteSwitch;
    GCKUIButton *_muteToggleButton;
}

@property(nonatomic) __weak GCKUIButton *muteToggleButton; // @synthesize muteToggleButton=_muteToggleButton;
@property(nonatomic) __weak UISwitch *muteSwitch; // @synthesize muteSwitch=_muteSwitch;
@property(nonatomic) __weak UISlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(nonatomic) __weak UIButton *volumeDownButton; // @synthesize volumeDownButton=_volumeDownButton;
@property(nonatomic) __weak UIButton *volumeUpButton; // @synthesize volumeUpButton=_volumeUpButton;
- (void).cxx_destruct;
- (float)clipVolume:(float)arg1;
- (void)configureControls;
- (void)disableControls;
- (void)detachFromSession:(id)arg1;
- (void)attachToSession:(id)arg1;
- (void)sessionManager:(id)arg1 session:(id)arg2 didReceiveDeviceVolume:(float)arg3 muted:(_Bool)arg4;
- (void)sessionManager:(id)arg1 didEndSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didResumeSession:(id)arg2;
- (void)sessionManager:(id)arg1 didSuspendSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didStartSession:(id)arg2;
- (void)toggleMute;
- (void)volumeDown;
- (void)volumeUp;
- (void)volumeSliderUpdateTimerDidFire:(id)arg1;
- (void)finishUpdatingVolume:(id)arg1;
- (void)handleVolumeSliderValueChange:(id)arg1;
- (void)startUpdatingVolume:(id)arg1;
- (void)handleMuteToggleButton:(id)arg1;
- (void)handleMuteSwitch:(id)arg1;
- (void)handleVolumeDownButton:(id)arg1;
- (void)handleVolumeUpButton:(id)arg1;
- (void)releaseMuteToggleButton;
- (void)releaseMuteSwitch;
- (void)releaseVolumeSlider;
- (void)releaseVolumeDownButton;
- (void)releaseVolumeUpButton;
- (void)toggleMuted;
- (void)setMuted:(_Bool)arg1;
- (void)setVolume:(float)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

