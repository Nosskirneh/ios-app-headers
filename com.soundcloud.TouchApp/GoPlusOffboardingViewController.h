//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "DismissibleViewController-Protocol.h"
#import "_TtP8Payments28SubscriptionChangeHandleable_-Protocol.h"

@class AnalyticsConsumerSubsEventTagger, GoPlusOffboardingView, NSString, OnOffBoardingDismisser, SubscriptionOffboardingActionHandler, UIApplication, UpsellLauncher;

@interface GoPlusOffboardingViewController : BaseViewController <_TtP8Payments28SubscriptionChangeHandleable_, DismissibleViewController>
{
    GoPlusOffboardingView *_offboardingView;
    SubscriptionOffboardingActionHandler *_actionHandler;
    UpsellLauncher *_upsellLauncher;
    OnOffBoardingDismisser *_dismisser;
    AnalyticsConsumerSubsEventTagger *_eventTagger;
    UIApplication *_application;
}

@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) AnalyticsConsumerSubsEventTagger *eventTagger; // @synthesize eventTagger=_eventTagger;
@property(readonly, nonatomic) OnOffBoardingDismisser *dismisser; // @synthesize dismisser=_dismisser;
@property(readonly, nonatomic) UpsellLauncher *upsellLauncher; // @synthesize upsellLauncher=_upsellLauncher;
@property(readonly, nonatomic) SubscriptionOffboardingActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) __weak GoPlusOffboardingView *offboardingView; // @synthesize offboardingView=_offboardingView;
- (void).cxx_destruct;
- (void)tagImpressionEvent;
- (void)tagResubscribeEvent;
- (void)dismiss;
- (void)launchUpsell;
- (_Bool)isDismissible;
- (void)continuePoliciesDidFailToUpdate;
- (void)continuePoliciesDidUpdate;
- (void)resubscriptionPoliciesDidFailToUpdate;
- (void)resubscriptionPoliciesDidUpdate;
- (void)didTapContinue;
- (void)didTapResubscribe;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)screen;
- (id)initWithCoder:(id)arg1 actionHandler:(id)arg2 eventTagger:(id)arg3 upsellLauncher:(id)arg4 dismisser:(id)arg5 application:(id)arg6;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
