//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTCEOTestManager : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _upcomingShowsButtonEnabled;
    _Bool _registerFanButtonEnabled;
    _Bool _singAlongButtonEnabled;
    _Bool _behindSongButtonEnabled;
    _Bool _fromArtistButtonEnabled;
    _Bool _artistActivityButtonEnabled;
    _Bool _lyricsButtonEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _enabledUpcomingShowsSignal;
    id <SPTFeatureFlagSignal> _enabledRegisterFanSignal;
    id <SPTFeatureFlagSignal> _enabledSingAlongSignal;
    id <SPTFeatureFlagSignal> _enabledBehindSongSignal;
    id <SPTFeatureFlagSignal> _enabledFromArtistSignal;
    id <SPTFeatureFlagSignal> _enabledArtistActivitySignal;
    id <SPTFeatureFlagSignal> _enabledLyricsSignal;
}

@property(nonatomic, getter=isLyricsButtonEnabled) _Bool lyricsButtonEnabled; // @synthesize lyricsButtonEnabled=_lyricsButtonEnabled;
@property(nonatomic, getter=isArtistActivityButtonEnabled) _Bool artistActivityButtonEnabled; // @synthesize artistActivityButtonEnabled=_artistActivityButtonEnabled;
@property(nonatomic, getter=isFromArtistButtonEnabled) _Bool fromArtistButtonEnabled; // @synthesize fromArtistButtonEnabled=_fromArtistButtonEnabled;
@property(nonatomic, getter=isBehindSongButtonEnabled) _Bool behindSongButtonEnabled; // @synthesize behindSongButtonEnabled=_behindSongButtonEnabled;
@property(nonatomic, getter=isSingAlongButtonEnabled) _Bool singAlongButtonEnabled; // @synthesize singAlongButtonEnabled=_singAlongButtonEnabled;
@property(nonatomic, getter=isRegisterFanButtonEnabled) _Bool registerFanButtonEnabled; // @synthesize registerFanButtonEnabled=_registerFanButtonEnabled;
@property(nonatomic, getter=isUpcomingShowsButtonEnabled) _Bool upcomingShowsButtonEnabled; // @synthesize upcomingShowsButtonEnabled=_upcomingShowsButtonEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledLyricsSignal; // @synthesize enabledLyricsSignal=_enabledLyricsSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledArtistActivitySignal; // @synthesize enabledArtistActivitySignal=_enabledArtistActivitySignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledFromArtistSignal; // @synthesize enabledFromArtistSignal=_enabledFromArtistSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledBehindSongSignal; // @synthesize enabledBehindSongSignal=_enabledBehindSongSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledSingAlongSignal; // @synthesize enabledSingAlongSignal=_enabledSingAlongSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledRegisterFanSignal; // @synthesize enabledRegisterFanSignal=_enabledRegisterFanSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledUpcomingShowsSignal; // @synthesize enabledUpcomingShowsSignal=_enabledUpcomingShowsSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (_Bool)isTestEnabled;
@property(readonly, nonatomic, getter=isCardViewEnabled) _Bool cardViewEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupFlags;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

