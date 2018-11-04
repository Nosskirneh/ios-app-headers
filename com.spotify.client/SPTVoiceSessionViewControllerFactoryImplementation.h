//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVoiceSessionViewControllerFactory.h"

@class NSString, SPTNowPlayingEntityDecorationController, SPTVoiceOnboardingManager, SPTVoiceSessionPresentationOptions;

@interface SPTVoiceSessionViewControllerFactoryImplementation : NSObject <SPTVoiceSessionViewControllerFactory>
{
    id <SPTVoiceSessionFactory> _voiceSessionFactory;
    SPTVoiceSessionPresentationOptions *_presentationOptions;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTVoiceCommandAudioCuePlayer> _audioCuePlayer;
    id <SPTVoiceCommandHandler> _deeplinkHandler;
    SPTVoiceOnboardingManager *_onboardingManager;
    id <SPTVoiceLoggerProtocol> _logger;
    NSString *_onboardingUtteranceIdentifier;
    id <SPTVoiceTestManager> _testManager;
    id <SPTPlayer> _player;
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
    id <SPTLocalSettings> _localSettings;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
}

@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) SPTNowPlayingEntityDecorationController *entityDecorationController; // @synthesize entityDecorationController=_entityDecorationController;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTVoiceTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) NSString *onboardingUtteranceIdentifier; // @synthesize onboardingUtteranceIdentifier=_onboardingUtteranceIdentifier;
@property(readonly, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTVoiceOnboardingManager *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(readonly, nonatomic) id <SPTVoiceCommandHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(readonly, nonatomic) id <SPTVoiceCommandAudioCuePlayer> audioCuePlayer; // @synthesize audioCuePlayer=_audioCuePlayer;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTVoiceSessionPresentationOptions *presentationOptions; // @synthesize presentationOptions=_presentationOptions;
@property(readonly, nonatomic) id <SPTVoiceSessionFactory> voiceSessionFactory; // @synthesize voiceSessionFactory=_voiceSessionFactory;
- (void).cxx_destruct;
- (id)voiceSessionViewController;
- (id)onboardingViewController;
- (id)createViewController;
- (id)initWithVoiceSessionFactory:(id)arg1 presentationOptions:(id)arg2 glueImageLoader:(id)arg3 audioCuePlayer:(id)arg4 deeplinkHandler:(id)arg5 onboardingManager:(id)arg6 testManager:(id)arg7 logger:(id)arg8 player:(id)arg9 entityDecorationController:(id)arg10 localSettings:(id)arg11 bannerPresentationManager:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

