//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTUpsellOverlayControllerDelegate.h"

@class NSMapTable, NSMutableArray, NSString, SPTUpsellActionFactory, SPTUpsellAutoTrialOverlayController, SPTUpsellExperiments, SPTUpsellMobileOverlayController;

@interface SPTUpsellPopupManagerImplementation : NSObject <SPTUpsellOverlayControllerDelegate>
{
    _Bool _popupPresentingOrPresented;
    _Bool _keyboardActive;
    _Bool _popupsDisabled;
    double _upsellPresentationStartTime;
    double _showcasePresentationStartTime;
    id <SPTUpsellLogger> _logger;
    id <SPTLogCenter> _logCenter;
    id <SPTAccountProductActivationController> _productActivationController;
    id <SPTAccountProductInformationController> _productInformationController;
    SPTUpsellActionFactory *_actionFactory;
    SPTUpsellExperiments *_experiments;
    NSMutableArray *_upsellQueue;
    NSMapTable *_observers;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    SPTUpsellMobileOverlayController *_upsellOverlayController;
    id <SPTUpsellOverlayController> _showcaseOverlayController;
    SPTUpsellAutoTrialOverlayController *_autoTrialOverlayController;
    id <SPTAccountAutoTrialStateManager> _autoTrialStateManager;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistraction;
}

@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistraction; // @synthesize driverDistraction=_driverDistraction;
@property(retain, nonatomic) id <SPTAccountAutoTrialStateManager> autoTrialStateManager; // @synthesize autoTrialStateManager=_autoTrialStateManager;
@property(retain, nonatomic) SPTUpsellAutoTrialOverlayController *autoTrialOverlayController; // @synthesize autoTrialOverlayController=_autoTrialOverlayController;
@property(retain, nonatomic) id <SPTUpsellOverlayController> showcaseOverlayController; // @synthesize showcaseOverlayController=_showcaseOverlayController;
@property(retain, nonatomic) SPTUpsellMobileOverlayController *upsellOverlayController; // @synthesize upsellOverlayController=_upsellOverlayController;
@property(readonly, nonatomic) __weak id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) __weak id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *upsellQueue; // @synthesize upsellQueue=_upsellQueue;
@property(nonatomic, getter=isPopupsDisabled) _Bool popupsDisabled; // @synthesize popupsDisabled=_popupsDisabled;
@property(nonatomic, getter=isKeyboardActive) _Bool keyboardActive; // @synthesize keyboardActive=_keyboardActive;
@property(readonly, nonatomic) SPTUpsellExperiments *experiments; // @synthesize experiments=_experiments;
@property(readonly, nonatomic) SPTUpsellActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(readonly, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(readonly, nonatomic) id <SPTAccountProductActivationController> productActivationController; // @synthesize productActivationController=_productActivationController;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTUpsellLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) double showcasePresentationStartTime; // @synthesize showcasePresentationStartTime=_showcasePresentationStartTime;
@property(nonatomic) double upsellPresentationStartTime; // @synthesize upsellPresentationStartTime=_upsellPresentationStartTime;
@property(nonatomic, getter=isPopupPresentingOrPresented) _Bool popupPresentingOrPresented; // @synthesize popupPresentingOrPresented=_popupPresentingOrPresented;
- (void).cxx_destruct;
- (void)slateViewControllerViewDidAppear:(_Bool)arg1;
- (void)didDismissOverlayForController:(id)arg1;
- (void)presentAutoTrialOverlay:(long long)arg1;
- (void)currentPopupControllerWasDismissed;
- (void)presentNextUpsell;
- (_Bool)presentUpsell:(id)arg1;
- (_Bool)shouldPresentPopup;
- (void)disablePopups;
- (void)keyboardDidHide;
- (void)keyboardDidShow;
- (void)dispatchBlock:(CDUnknownBlockType)arg1 on:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (void)dismissPresentedUpsells;
- (void)dealloc;
- (id)initWithLogger:(id)arg1 logCenter:(id)arg2 productActivationController:(id)arg3 productInformationController:(id)arg4 actionFactory:(id)arg5 experiments:(id)arg6;
- (id)initWithLogger:(id)arg1 logCenter:(id)arg2 productActivationController:(id)arg3 productInformationController:(id)arg4 actionFactory:(id)arg5 experiments:(id)arg6 slateManager:(id)arg7 slateBuilderProvider:(id)arg8 autoTrialStateManager:(id)arg9 driverDistractionController:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

