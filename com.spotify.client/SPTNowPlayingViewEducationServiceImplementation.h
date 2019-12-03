//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTNowPlayingStateObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSMutableArray, NSString, SPTAllocationContext;
@protocol SPTFeatureFlagSignal, SPTFreeTierService, SPTNowPlayingPlatformService, SPTNowPlayingService, SPTNowPlayingTestManager, SPTSnackbarConditionalPresenter, SPTSnackbarService;

@interface SPTNowPlayingViewEducationServiceImplementation : NSObject <SPTNowPlayingStateObserver, SPTFeatureFlagSignalObserver, SPTService>
{
    id <SPTSnackbarService> _snackbarService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    NSMutableArray *_skipRegistry;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTNowPlayingTestManager> _nowPlayingTestManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTNowPlayingTestManager> nowPlayingTestManager; // @synthesize nowPlayingTestManager=_nowPlayingTestManager;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(retain, nonatomic) NSMutableArray *skipRegistry; // @synthesize skipRegistry=_skipRegistry;
@property(retain, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)presentSnackbarIfSkippedTooFast;
- (void)presentSnackbarForFirstTimeSkip;
- (void)willSkipToNextWithPlayerRestrictions:(id)arg1;
- (void)disableFreeTierNowPlayingEducationFeatureService;
- (void)enableFreeTierNowPlayingEducationFeatureService;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

