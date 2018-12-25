//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAudioSessionRouteChangeObserver-Protocol.h"
#import "YTPlayerViewControllerConfigObserver-Protocol.h"

@class GIMMe, NSHashTable, NSString;
@protocol YTAudioSession, YTPlayerViewControllerConfig;

@interface YTBackgroundabilityPolicy : NSObject <YTAudioSessionRouteChangeObserver, YTPlayerViewControllerConfigObserver>
{
    NSObject<YTPlayerViewControllerConfig> *_config;
    id <YTAudioSession> _audioSession;
    _Bool _pluggedInOnly;
    NSHashTable *_observers;
    _Bool _backgroundableByUserSettings;
    GIMMe *_gimme;
}

@property(readonly, nonatomic, getter=isBackgroundableByUserSettings) _Bool backgroundableByUserSettings; // @synthesize backgroundableByUserSettings=_backgroundableByUserSettings;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyObserversBackgroundableByUserSettingsDidChange;
- (void)updateIsBackgroundableByUserSettings;
- (void)outputRouteDidChange;
- (void)backgroundabilityDidChange;
- (void)removeBackgroundabilityPolicyObserver:(id)arg1;
- (void)addBackgroundabilityPolicyObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

