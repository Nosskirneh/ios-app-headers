//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastSurveyTestManager-Protocol.h"
#import "SPTPodcastUtteranceSurveyDataLoaderDelegate-Protocol.h"
#import "SPTPodcastUtteranceSurveyService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPodcastUtteranceSurveyDataLoader, SPTPodcastUtteranceSurveyLogger, SPTPodcastUtteranceSurveyManagerImplementation, SPTPodcastUtteranceSurveyPresenter, SPTPodcastUtteranceSurveyTestManager, SPTPodcastUtteranceSurveyViewModel;
@protocol SPTContainerService, SPTFeatureFlaggingService, SPTGLUEService, SPTLocalSettings, SPTNetworkService, SPTSessionService, SPTSettingsFeature, SPTSpeakerCompanionService, SPTVoiceLibraryService, SlateFeature;

@interface SPTPodcastUtteranceSurveyServiceImplementation : NSObject <SPTPodcastUtteranceSurveyDataLoaderDelegate, SPTPodcastSurveyTestManager, SPTPodcastUtteranceSurveyService>
{
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSessionService> _sessionService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTContainerService> _containerService;
    id <SPTNetworkService> _networkService;
    id <SlateFeature> _slateFeature;
    id <SPTGLUEService> _glueService;
    id <SPTSpeakerCompanionService> _speakerCompanionService;
    id <SPTVoiceLibraryService> _voiceLibraryService;
    SPTPodcastUtteranceSurveyTestManager *_testManager;
    SPTPodcastUtteranceSurveyLogger *_logger;
    SPTPodcastUtteranceSurveyDataLoader *_dataLoader;
    SPTPodcastUtteranceSurveyPresenter *_presenter;
    SPTPodcastUtteranceSurveyViewModel *_viewModel;
    SPTPodcastUtteranceSurveyManagerImplementation *_surveyManager;
    id <SPTLocalSettings> _localSettings;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyManagerImplementation *surveyManager; // @synthesize surveyManager=_surveyManager;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyTestManager *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTVoiceLibraryService> voiceLibraryService; // @synthesize voiceLibraryService=_voiceLibraryService;
@property(nonatomic) __weak id <SPTSpeakerCompanionService> speakerCompanionService; // @synthesize speakerCompanionService=_speakerCompanionService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SlateFeature> slateFeature; // @synthesize slateFeature=_slateFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
- (void).cxx_destruct;
- (void)didChangeSurveyEnabledStateWithTestManager:(id)arg1;
- (void)podcastUtteranceSurveyDataLoader:(id)arg1 eligibilityResponse:(id)arg2;
- (id)provideSurveyManager;
- (void)getEligibility;
- (void)configurePresenter;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
