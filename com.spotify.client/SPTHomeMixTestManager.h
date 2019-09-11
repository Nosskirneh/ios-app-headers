//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTFeatureFlagSignal, SPTHomeMixTestManagerDelegate;

@interface SPTHomeMixTestManager : NSObject
{
    _Bool _settingsAvailable;
    _Bool _mixTuningEnabled;
    _Bool _genresPageEnabled;
    _Bool _userToggleEnabled;
    _Bool _facepileDetailEnabled;
    id <SPTFeatureFlagSignal> _enabledSignal;
    id <SPTHomeMixTestManagerDelegate> _delegate;
    id <SPTFeatureFlagSignal> _settingsAvailableSignal;
    id <SPTFeatureFlagSignal> _mixTuningEnabledSignal;
    id <SPTFeatureFlagSignal> _genresPageSignal;
    id <SPTFeatureFlagSignal> _userToggleSignal;
    id <SPTFeatureFlagSignal> _facepileDetailSignal;
}

@property(retain, nonatomic) id <SPTFeatureFlagSignal> facepileDetailSignal; // @synthesize facepileDetailSignal=_facepileDetailSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> userToggleSignal; // @synthesize userToggleSignal=_userToggleSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> genresPageSignal; // @synthesize genresPageSignal=_genresPageSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> mixTuningEnabledSignal; // @synthesize mixTuningEnabledSignal=_mixTuningEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> settingsAvailableSignal; // @synthesize settingsAvailableSignal=_settingsAvailableSignal;
@property(nonatomic) __weak id <SPTHomeMixTestManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isFacepileDetailEnabled) _Bool facepileDetailEnabled; // @synthesize facepileDetailEnabled=_facepileDetailEnabled;
@property(nonatomic, getter=isUserToggleEnabled) _Bool userToggleEnabled; // @synthesize userToggleEnabled=_userToggleEnabled;
@property(nonatomic, getter=isGenresPageEnabled) _Bool genresPageEnabled; // @synthesize genresPageEnabled=_genresPageEnabled;
@property(nonatomic, getter=isMixTuningEnabled) _Bool mixTuningEnabled; // @synthesize mixTuningEnabled=_mixTuningEnabled;
@property(nonatomic, getter=areSettingsAvailable) _Bool settingsAvailable; // @synthesize settingsAvailable=_settingsAvailable;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledSignal; // @synthesize enabledSignal=_enabledSignal;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupSignals:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 featureFlagFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

