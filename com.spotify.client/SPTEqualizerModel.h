//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioDriverControllerObserver-Protocol.h"
#import "SPTAudioDriverObserver-Protocol.h"
#import "SPTGaiaConnectObserver-Protocol.h"

@class AVAudioSession, NSArray, NSString;
@protocol SPTAudioDriverController, SPTEqualizerModelDelegate, SPTGaiaConnectAPI, SPTLocalSettings;

@interface SPTEqualizerModel : NSObject <SPTAudioDriverControllerObserver, SPTAudioDriverObserver, SPTGaiaConnectObserver>
{
    _Bool _on;
    _Bool _connectActive;
    id <SPTEqualizerModelDelegate> _delegate;
    NSArray *_values;
    NSArray *_presets;
    NSString *_preset;
    id <SPTLocalSettings> _localSettings;
    id <SPTAudioDriverController> _audioDriverController;
    id <SPTGaiaConnectAPI> _connectManager;
    AVAudioSession *_audioSession;
    NSArray *_presetCurves;
    NSArray *_bands;
}

+ (id)defaultValues;
+ (id)equalizerModelWithLocalSettings:(id)arg1 audioDriverController:(id)arg2 connectManager:(id)arg3 audioSession:(id)arg4;
@property(retain, nonatomic) NSArray *bands; // @synthesize bands=_bands;
@property(retain, nonatomic) NSArray *presetCurves; // @synthesize presetCurves=_presetCurves;
@property(nonatomic) __weak AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(nonatomic) __weak id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) _Bool connectActive; // @synthesize connectActive=_connectActive;
@property(retain, nonatomic) NSString *preset; // @synthesize preset=_preset;
@property(retain, nonatomic) NSArray *presets; // @synthesize presets=_presets;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(nonatomic) __weak id <SPTEqualizerModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)dealloc;
- (void)audioDriverDidBegin:(id)arg1;
- (void)audioDriverController:(id)arg1 didAddAudioDriver:(id)arg2;
@property(readonly, nonatomic) _Bool allowsEditing;
- (id)currentRoutePortType;
- (void)applyEqualizerToAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;
- (void)applyEqualizer;
- (id)columnNameAtIndex:(long long)arg1;
- (void)setConnectActive:(_Bool)arg1;
- (void)resetPersistedPreset;
- (void)persistPreset:(id)arg1;
- (id)initWithLocalSettings:(id)arg1 audioDriverController:(id)arg2 connectManager:(id)arg3 audioSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

