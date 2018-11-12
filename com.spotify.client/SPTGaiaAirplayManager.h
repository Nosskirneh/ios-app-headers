//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioSession, MPVolumeView, NSHashTable, NSNotificationCenter, NSString, UIApplication;

@interface SPTGaiaAirplayManager : NSObject
{
    _Bool _available;
    _Bool _active;
    NSString *_activeDeviceName;
    long long _audioOutputRoute;
    MPVolumeView *_volumeView;
    AVAudioSession *_audioSession;
    NSNotificationCenter *_notificationCenter;
    UIApplication *_application;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) long long audioOutputRoute; // @synthesize audioOutputRoute=_audioOutputRoute;
@property(retain, nonatomic) NSString *activeDeviceName; // @synthesize activeDeviceName=_activeDeviceName;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
- (void).cxx_destruct;
- (void)dealloc;
- (void)routeChanged:(id)arg1;
- (void)wirelessRouteActiveDidChange:(id)arg1;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;
- (void)callObserversAboutActiveChange;
- (void)wipeOutActiveDevice;
- (void)determineActiveDevice;
- (void)pressAirplayButtonOnVolumeView;
- (void)presentAirplayPicker;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addObservers;
- (void)setupVolumeView;
- (id)initWithVolumeView:(id)arg1 audioSession:(id)arg2 notificationCenter:(id)arg3 application:(id)arg4;

@end

