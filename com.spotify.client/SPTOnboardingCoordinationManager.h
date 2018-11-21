//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMetaViewControllerRootViewPresenter-Protocol.h"
#import "SPTOnboardingServiceFlowStateReporter-Protocol.h"

@class NSMutableArray, NSString, UINavigationController;
@protocol SPTMetaViewController, SPTModalPresentationController, SPTOnboardingFlowCoordinator;

@interface SPTOnboardingCoordinationManager : NSObject <SPTMetaViewControllerRootViewPresenter, SPTOnboardingServiceFlowStateReporter>
{
    id <SPTMetaViewController> _metaViewController;
    id <SPTModalPresentationController> _modalPresentationController;
    UINavigationController *_coordinationNavigationController;
    NSMutableArray *_flowCoordinators;
    id <SPTOnboardingFlowCoordinator> _currentFlowCoordinator;
    unsigned long long _presentationMode;
}

@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) id <SPTOnboardingFlowCoordinator> currentFlowCoordinator; // @synthesize currentFlowCoordinator=_currentFlowCoordinator;
@property(retain, nonatomic) NSMutableArray *flowCoordinators; // @synthesize flowCoordinators=_flowCoordinators;
@property(retain, nonatomic) UINavigationController *coordinationNavigationController; // @synthesize coordinationNavigationController=_coordinationNavigationController;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
- (void).cxx_destruct;
- (_Bool)presentBridgeViewAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)provideNavigationControllerWithRootViewController:(id)arg1;
- (void)onboardingFlowDidFinish;
- (id)onboardingFlowNavigationControllerWithViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentHome;
- (void)startNextOnboardingFlow;
- (void)coordinateOnboardingWithFlowCoordinators:(id)arg1 inPresentationMode:(unsigned long long)arg2;
- (id)initWithMetaViewController:(id)arg1 modalPresentationController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

