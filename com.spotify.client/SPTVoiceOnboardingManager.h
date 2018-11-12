//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SPTVoiceOnboardingFlow;
@protocol GLUETheme, SPTLinkDispatcher, SPTVoiceLoggerProtocol, SPTVoiceOnboardingRecordPermissionsState, SPTVoiceTestManager;

@interface SPTVoiceOnboardingManager : NSObject
{
    id <SPTVoiceOnboardingRecordPermissionsState> _permissionsReducer;
    id <GLUETheme> _glueTheme;
    SPTVoiceOnboardingFlow *_onboardingFlow;
    CDUnknownBlockType _completionHandler;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTVoiceLoggerProtocol> _logger;
    id <SPTVoiceTestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTVoiceTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) SPTVoiceOnboardingFlow *onboardingFlow; // @synthesize onboardingFlow=_onboardingFlow;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) id <SPTVoiceOnboardingRecordPermissionsState> permissionsReducer; // @synthesize permissionsReducer=_permissionsReducer;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOnboardingCompleted) _Bool onboardingCompleted;
- (void)setOnboardingCompleted:(_Bool)arg1;
- (id)onboardingViewControllerWithUtteranceId:(id)arg1;
- (id)getVoiceOnboardingPagesVersion;
- (id)getOnboardingVersion;
- (id)getVoiceOnboardingPages;
- (void)setupOnboardingFlowsWithLocalSettings:(id)arg1;
- (id)initWithLocalSettings:(id)arg1 permissionsReducer:(id)arg2 glueTheme:(id)arg3 linkDispatcher:(id)arg4 logger:(id)arg5 testManager:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end

