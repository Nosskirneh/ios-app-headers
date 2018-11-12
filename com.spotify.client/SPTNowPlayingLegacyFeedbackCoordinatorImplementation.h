//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTNowPlayingLegacyFeedbackCoordinator-Protocol.h"

@class NSString, SPTNowPlayingLegacyDailyMixFeedbackHandlerImplementation, SPTNowPlayingLegacyFormatListFeedbackHandlerImplementation, SPTNowPlayingLegacyRadioFeedbackHandlerImplementation;
@protocol SPTCollectionPlatformConfiguration, SPTContextMenuPresenterFactory, SPTDailyMixFeedbackUIModel, SPTFeedbackViewModel, SPTFormatListPlatformRemoteControlPolicyFactory, SPTFreeTierEducationSnackBarPresenter, SPTNowPlayingRemoteControlPolicy, SPTPSXTestManager;

@interface SPTNowPlayingLegacyFeedbackCoordinatorImplementation : NSObject <SPTNowPlayingLegacyFeedbackCoordinator>
{
    SPTNowPlayingLegacyDailyMixFeedbackHandlerImplementation *_dailyMixFeedbackHandler;
    SPTNowPlayingLegacyRadioFeedbackHandlerImplementation *_radioFeedbackHandler;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTDailyMixFeedbackUIModel> _dailyMixFeedbackModel;
    id <SPTNowPlayingRemoteControlPolicy> _radioRemoteControlPolicy;
    id <SPTFormatListPlatformRemoteControlPolicyFactory> _formatListPlatformRemoteControlPolicyFactory;
    id <SPTNowPlayingRemoteControlPolicy> _formatListRemoteControlPolicy;
    id <SPTFeedbackViewModel> _feedbackViewModel;
    id <SPTPSXTestManager> _psxTestManager;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    SPTNowPlayingLegacyFormatListFeedbackHandlerImplementation *_formatListFeedbackHandler;
    id <SPTFreeTierEducationSnackBarPresenter> _snackBarPresenter;
}

@property(retain, nonatomic) id <SPTFreeTierEducationSnackBarPresenter> snackBarPresenter; // @synthesize snackBarPresenter=_snackBarPresenter;
@property(retain, nonatomic) SPTNowPlayingLegacyFormatListFeedbackHandlerImplementation *formatListFeedbackHandler; // @synthesize formatListFeedbackHandler=_formatListFeedbackHandler;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(nonatomic) __weak id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
@property(retain, nonatomic) id <SPTFeedbackViewModel> feedbackViewModel; // @synthesize feedbackViewModel=_feedbackViewModel;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> formatListRemoteControlPolicy; // @synthesize formatListRemoteControlPolicy=_formatListRemoteControlPolicy;
@property(retain, nonatomic) id <SPTFormatListPlatformRemoteControlPolicyFactory> formatListPlatformRemoteControlPolicyFactory; // @synthesize formatListPlatformRemoteControlPolicyFactory=_formatListPlatformRemoteControlPolicyFactory;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> radioRemoteControlPolicy; // @synthesize radioRemoteControlPolicy=_radioRemoteControlPolicy;
@property(retain, nonatomic) id <SPTDailyMixFeedbackUIModel> dailyMixFeedbackModel; // @synthesize dailyMixFeedbackModel=_dailyMixFeedbackModel;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
- (void).cxx_destruct;
- (id)createFormatListFeedbackManagerIfNecessary:(id)arg1;
@property(readonly, nonatomic) SPTNowPlayingLegacyRadioFeedbackHandlerImplementation *radioFeedbackHandler; // @synthesize radioFeedbackHandler=_radioFeedbackHandler;
@property(readonly, nonatomic) SPTNowPlayingLegacyDailyMixFeedbackHandlerImplementation *dailyMixFeedbackHandler; // @synthesize dailyMixFeedbackHandler=_dailyMixFeedbackHandler;
- (_Bool)isFormatListFeedbackState:(id)arg1;
- (id)feedbackHandlerForPlayerState:(id)arg1 containingViewController:(id)arg2;
- (id)initWithContextMenuPresenterFactory:(id)arg1 dailyMixFeedbackModel:(id)arg2 radioRemoteControlPolicy:(id)arg3 formatListPlatformRemoteControlPolicyFactory:(id)arg4 feedbackViewModel:(id)arg5 psxTestManager:(id)arg6 snackBarPresenter:(id)arg7 collectionConfiguration:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

