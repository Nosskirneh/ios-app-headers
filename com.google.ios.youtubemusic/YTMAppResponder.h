//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXRemoteClientResponderProvider-Protocol.h"
#import "YTMInnerTubeCollectionAppearanceResponderProvider-Protocol.h"
#import "YTMUpsellDialogControllerDelegate-Protocol.h"
#import "YTResponderRoot-Protocol.h"
#import "YTSSOHostViewControllerResponderProvider-Protocol.h"
#import "YTStyleContextResponderProvider-Protocol.h"

@class GIMMe, NSArray, NSString, YTAdMacroExpanderProvider, YTConfirmDialogController, YTFancyDismissibleDialogController, YTMAudioCastUpsellDialogController, YTMHintController, YTMMenuController, YTMToastController, YTMUpsellDialogController, YTOfflineButtonPromoController, YTReachabilityController;
@protocol MDXServices, YTDataServices, YTIdentityGlobals, YTNavigationProtocol, YTOfflineServices, YTResponder;

@interface YTMAppResponder : NSObject <YTMUpsellDialogControllerDelegate, YTResponderRoot, MDXRemoteClientResponderProvider, YTMInnerTubeCollectionAppearanceResponderProvider, YTSSOHostViewControllerResponderProvider, YTStyleContextResponderProvider>
{
    YTMAudioCastUpsellDialogController *_audioCastUpsellDialogController;
    YTMHintController *_hintController;
    id <YTResponder> _parentResponder;
    NSArray *_eventGroupHandlers;
    id <YTNavigationProtocol> _navigationProtocol;
    id _services;
    id <YTDataServices> _dataServices;
    id <YTOfflineServices> _offlineServices;
    id <YTIdentityGlobals> _identityGlobals;
    id <MDXServices> _MDXServices;
    GIMMe *_gimme;
    YTReachabilityController *_reachabilityController;
    YTAdMacroExpanderProvider *_adMacroExpanderProvider;
    YTMMenuController *_menuController;
    YTMToastController *_toastController;
    YTFancyDismissibleDialogController *_fancyDismissibleDialogController;
    YTMUpsellDialogController *_upsellDialogController;
    YTConfirmDialogController *_confirmDialogController;
    YTOfflineButtonPromoController *_offlineButtonPromoController;
}

@property(retain, nonatomic) YTOfflineButtonPromoController *offlineButtonPromoController; // @synthesize offlineButtonPromoController=_offlineButtonPromoController;
@property(retain, nonatomic) YTConfirmDialogController *confirmDialogController; // @synthesize confirmDialogController=_confirmDialogController;
@property(retain, nonatomic) YTMUpsellDialogController *upsellDialogController; // @synthesize upsellDialogController=_upsellDialogController;
@property(retain, nonatomic) YTFancyDismissibleDialogController *fancyDismissibleDialogController; // @synthesize fancyDismissibleDialogController=_fancyDismissibleDialogController;
@property(retain, nonatomic) YTMToastController *toastController; // @synthesize toastController=_toastController;
@property(retain, nonatomic) YTMMenuController *menuController; // @synthesize menuController=_menuController;
@property(retain, nonatomic) YTAdMacroExpanderProvider *adMacroExpanderProvider; // @synthesize adMacroExpanderProvider=_adMacroExpanderProvider;
@property(retain, nonatomic) YTReachabilityController *reachabilityController; // @synthesize reachabilityController=_reachabilityController;
@property(retain, nonatomic) GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <MDXServices> MDXServices; // @synthesize MDXServices=_MDXServices;
@property(nonatomic) __weak id <YTIdentityGlobals> identityGlobals; // @synthesize identityGlobals=_identityGlobals;
@property(nonatomic) __weak id <YTOfflineServices> offlineServices; // @synthesize offlineServices=_offlineServices;
@property(nonatomic) __weak id <YTDataServices> dataServices; // @synthesize dataServices=_dataServices;
@property(nonatomic) __weak id services; // @synthesize services=_services;
@property(retain, nonatomic) id <YTNavigationProtocol> navigationProtocol; // @synthesize navigationProtocol=_navigationProtocol;
@property(readonly, nonatomic) NSArray *eventGroupHandlers; // @synthesize eventGroupHandlers=_eventGroupHandlers;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)handleCommand:(id)arg1;
- (_Bool)handleNavigation:(id)arg1;
- (id)upsellFromBackgroundClingRenderer:(id)arg1;
- (id)hintController;
- (id)audioCastUpsellDialogController;
- (void)executeCommandWrapperPromoRenderer:(id)arg1 firstResponder:(id)arg2;
- (void)presentElementOverlayForEvent:(id)arg1;
- (void)presentInterstitialGridPromoForEvent:(id)arg1;
- (void)presentFullscreenPromoForEvent:(id)arg1;
- (void)presentInterstitialPromoForEvent:(id)arg1;
- (id)musicServices;
- (id)musicNavigation;
- (void)addEventHandlers;
- (void)setServicesForEventGroupHandlers;
- (void)addEventGroupHandlers:(id)arg1;
- (void)upsellDialogController:(id)arg1 didRequestActionWithUpsell:(id)arg2 videoID:(id)arg3;
- (id)remoteClient;
@property(readonly, nonatomic) NSString *styleContext;
- (_Bool)allowsOfflineTransition;
- (_Bool)innerTubeCollectionViewShowsVerticalScrollIndicator;
- (id)innerTubeCollectionViewBackgroundColor;
- (int)innerTubeCollectionStatusViewStyle;
- (id)visibleViewController;
- (void)tearDown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

