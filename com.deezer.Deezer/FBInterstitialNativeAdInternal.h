//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBInterstitialAdInternal.h"

#import "FBAdCommandProcessorDelegate-Protocol.h"
#import "FBInterstitialAdNativeViewDelegate-Protocol.h"

@class FBAdCommandProcessor, FBAdPlacementDefinition, FBNativeAdDataModel, NSString, UIViewController;
@protocol FBInterstitialAdInternalDelegate;

@interface FBInterstitialNativeAdInternal : FBInterstitialAdInternal <FBInterstitialAdNativeViewDelegate, FBAdCommandProcessorDelegate>
{
    id <FBInterstitialAdInternalDelegate> _delegate;
    FBNativeAdDataModel *_dataModel;
    FBAdPlacementDefinition *_placementDefinition;
    UIViewController *_rootViewController;
    FBAdCommandProcessor *_commandProcessor;
}

@property(retain, nonatomic) FBAdCommandProcessor *commandProcessor; // @synthesize commandProcessor=_commandProcessor;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <FBInterstitialAdInternalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interstitialAdNativeViewDidClose:(id)arg1;
- (void)interstitialAdNativeViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 withPageNumber:(id)arg4 withPageTotal:(id)arg5;
- (void)interstitialAdNativeViewDidLogImpression:(id)arg1 withViewabilityValidator:(id)arg2 withPageNumber:(id)arg3 withPageTotal:(id)arg4;
- (void)interstitialAdNativeViewDidLoad:(id)arg1;
- (id)interstitialAdNativeViewRootViewController:(id)arg1;
- (id)commandProcessorTouchInformation:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
- (void)willPresentViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)setupCommandProcessorIfNeeded;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)showAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)loadAd;
- (void)loadAdFromMarkup:(id)arg1 activationCommand:(id)arg2 orientation:(long long)arg3;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithPlacementID:(id)arg1 adData:(id)arg2 placementDefinition:(id)arg3;
- (_Bool)isAdValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

