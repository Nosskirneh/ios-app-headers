//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDXAirPlayScreenManager.h"

#import "YTAudioSessionRouteChangeObserver-Protocol.h"

@class AVRouteDetector, MDXAirPlayScreen, MPVolumeView, NSMutableArray, NSString, UIView, UIViewController;
@protocol MDXScreenDiscoveryDelegate, YTAudioSession;

@interface MDXExperimentalAirPlayScreenManager : MDXAirPlayScreenManager <YTAudioSessionRouteChangeObserver>
{
    _Bool _visible;
    MDXAirPlayScreen *_screen;
    NSMutableArray *_screens;
    UIView *_airPlayPickerView;
    AVRouteDetector *_routeDetector;
    MPVolumeView *_notificationVolumeView;
    MPVolumeView *_presentingVolumeView;
    UIViewController *_presentingViewController;
    id <YTAudioSession> _audioSession;
    id <MDXScreenDiscoveryDelegate> _delegate;
}

- (id)screens;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)removeScreen;
- (void)addScreen;
- (void)airPlayRouteAvailabilityDidChangeIos11:(id)arg1;
- (void)airPlayRouteAvailabilityDidChange:(id)arg1;
- (void)stopDiscovery;
- (void)startDiscovery;
- (void)presentAirPlayUnavailableAlert;
- (void)extractAndClickAirPlayButtonFromView:(id)arg1;
- (void)presentAirPlayPicker;
- (void)presentAirPlayPickerIos11;
- (void)outputRouteDidChange;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

