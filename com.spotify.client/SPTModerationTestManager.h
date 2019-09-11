//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTModerationServiceState-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagSignal;

@interface SPTModerationTestManager : NSObject <SPTModerationServiceState>
{
    _Bool _npvModerationEnabled;
    _Bool _artistProfileImagesModerationEnabled;
    id <SPTFeatureFlagSignal> _npvModerationFeatureSignal;
    id <SPTFeatureFlagSignal> _artistProfileImagesModerationFeatureSignal;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> artistProfileImagesModerationFeatureSignal; // @synthesize artistProfileImagesModerationFeatureSignal=_artistProfileImagesModerationFeatureSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> npvModerationFeatureSignal; // @synthesize npvModerationFeatureSignal=_npvModerationFeatureSignal;
@property(nonatomic, getter=isArtistProfileImagesModerationEnabled) _Bool artistProfileImagesModerationEnabled; // @synthesize artistProfileImagesModerationEnabled=_artistProfileImagesModerationEnabled;
@property(nonatomic, getter=isNPVModerationEnabled) _Bool npvModerationEnabled; // @synthesize npvModerationEnabled=_npvModerationEnabled;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)createArtistProfileImagesModerationSignal:(id)arg1;
- (id)createNPVModerationSignal:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

