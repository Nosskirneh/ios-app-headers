//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdCommandProcessorDelegate-Protocol.h"
#import "FBAdContentContainerDelegate-Protocol.h"
#import "FBAdViewNavigationPolicy-Protocol.h"
#import "FBAdViewabilityValidatorDelegate-Protocol.h"
#import "FBInterstitialAdToolbarViewDelegate-Protocol.h"

@class FBAdCommandProcessor, FBAdPlacementDefinition, FBAdTimer, FBAdVideoCallToActionButton, FBAdViewabilityValidator, FBInterstitialAdToolbarView, FBNativeAdDataModel, FBVideoAdLabel, NSString, UIViewController;
@protocol FBAdContentContainer, FBAdPlayableViewDelegate;

@interface FBAdPlayableView : UIView <FBAdCommandProcessorDelegate, FBAdViewabilityValidatorDelegate, FBAdViewNavigationPolicy, FBInterstitialAdToolbarViewDelegate, FBAdContentContainerDelegate>
{
    _Bool _modalViewPresenting;
    _Bool _markupImpressionEventReceived;
    _Bool _impressionSent;
    _Bool _ctaClicked;
    id <FBAdPlayableViewDelegate> _delegate;
    FBNativeAdDataModel *_nativeAdDataModel;
    UIViewController *_rootViewController;
    NSString *_placementID;
    FBAdCommandProcessor *_commandHandler;
    id <FBAdContentContainer> _contentContainer;
    FBAdTimer *_toolbarTimer;
    FBAdViewabilityValidator *_viewabilityValidator;
    FBAdPlacementDefinition *_placementDefinition;
    FBInterstitialAdToolbarView *_toolbarView;
    double _elapsedTime;
    UIView *_waitingToast;
    UIView *_adDetailsView;
    FBVideoAdLabel *_subtitleView;
    FBVideoAdLabel *_titleView;
    FBAdVideoCallToActionButton *_callToActionButton;
    double _callToActionButtonShownTime;
}

@property(nonatomic) double callToActionButtonShownTime; // @synthesize callToActionButtonShownTime=_callToActionButtonShownTime;
@property(nonatomic) __weak FBAdVideoCallToActionButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(nonatomic) __weak FBVideoAdLabel *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak FBVideoAdLabel *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(nonatomic) __weak UIView *adDetailsView; // @synthesize adDetailsView=_adDetailsView;
@property(retain, nonatomic) UIView *waitingToast; // @synthesize waitingToast=_waitingToast;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) __weak FBInterstitialAdToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(retain, nonatomic) FBAdTimer *toolbarTimer; // @synthesize toolbarTimer=_toolbarTimer;
@property(retain, nonatomic) id <FBAdContentContainer> contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) FBAdCommandProcessor *commandHandler; // @synthesize commandHandler=_commandHandler;
@property(nonatomic) _Bool ctaClicked; // @synthesize ctaClicked=_ctaClicked;
@property(nonatomic, getter=isImpressionSent) _Bool impressionSent; // @synthesize impressionSent=_impressionSent;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
@property(readonly, nonatomic, getter=isMarkupImpressionEventReceived) _Bool markupImpressionEventReceived; // @synthesize markupImpressionEventReceived=_markupImpressionEventReceived;
@property(nonatomic, getter=isModalViewPresenting) _Bool modalViewPresenting; // @synthesize modalViewPresenting=_modalViewPresenting;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) FBNativeAdDataModel *nativeAdDataModel; // @synthesize nativeAdDataModel=_nativeAdDataModel;
@property(nonatomic) __weak id <FBAdPlayableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interstitialAdToolbarDidCloseAdChoices:(id)arg1;
- (void)interstitialAdToolbarDidTapAdChoices:(id)arg1;
- (void)interstitialAdToolbarDidClose:(id)arg1 withTouchData:(id)arg2;
- (_Bool)processRequestURL:(id)arg1 adDataModel:(id)arg2 withExtraData:(id)arg3;
- (id)contentContainerViewabilityValidator;
- (void)adDidTerminate;
- (void)adDidFailToLoadWithError:(id)arg1;
- (void)adDidLogClick;
- (void)showCallToActionButton;
- (void)showWaitingToast;
- (void)processCtaClick:(_Bool)arg1 extraData:(id)arg2;
- (void)adCTAClick:(id)arg1;
- (_Bool)processAccidentalClicksWithExtraData:(id)arg1 withFirstImpressionTime:(double)arg2;
- (void)adNativeCTAClick:(id)arg1 withEvent:(id)arg2;
- (void)adCTAClick;
- (void)adWillLogImpression;
- (void)adDidLoad;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
- (void)disableViewabilityValidation;
- (void)ensureViewabilityValidation;
- (void)setupNotifications;
- (id)commandProcessorTouchInformation:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
- (void)willPresentViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)animateAppearance;
- (void)addWebView;
- (void)addToolbarView;
@property(readonly, nonatomic, getter=isTerminated) _Bool terminated;
- (_Bool)forcedTimeFinished;
- (CDStruct_1b6d18a9)currentTime;
- (void)updateElapsedTime;
- (id)getDelayClickText:(long long)arg1;
- (void)updateWaitingTime;
- (void)setFrameOnShow:(struct CGRect)arg1;
- (void)layoutMetadataViewWithInsets:(struct UIEdgeInsets)arg1 withBounds:(struct CGRect)arg2;
- (void)layoutCallToActionButtonWithInsets:(struct UIEdgeInsets)arg1 withBounds:(struct CGRect)arg2;
- (void)layoutWebViewWithInsets:(struct UIEdgeInsets)arg1 withBounds:(struct CGRect)arg2;
- (void)layoutToolbarViewWithInsets:(struct UIEdgeInsets)arg1 withBounds:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)removeToolbarTimer;
- (void)setupToolbarTimer;
- (void)preloadWebView;
- (void)dealloc;
- (id)initWithPlacementID:(id)arg1 adData:(id)arg2 placementDefinition:(id)arg3 rootViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
