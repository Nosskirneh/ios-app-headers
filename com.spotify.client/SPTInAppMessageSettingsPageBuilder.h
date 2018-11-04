//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureSettingsUIProvider.h"

@class NSString, SPTDataLoader, SPTInAppMessageActionFactory, SPTInAppMessageQAToolBannerMessageController, SPTInAppMessageQAToolCardMessageController, SPTInAppMessageQAToolCardPresentationController, SPTInAppMessageQAToolViewController, SPTInAppMessageQAToolViewModel;

@interface SPTInAppMessageSettingsPageBuilder : NSObject <SPTFeatureSettingsUIProvider>
{
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTDataLoader *_qaDataLoader;
    SPTInAppMessageQAToolViewModel *_qaViewModel;
    SPTInAppMessageQAToolCardPresentationController *_cardPresentationController;
    SPTInAppMessageQAToolViewController *_qaViewController;
    id <SPTAlertController> _alertController;
    id <SPTLocalSettings> _localSettings;
    SPTInAppMessageQAToolBannerMessageController *_bannerMessageController;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    SPTInAppMessageQAToolCardMessageController *_cardMessageController;
}

@property(retain, nonatomic) SPTInAppMessageQAToolCardMessageController *cardMessageController; // @synthesize cardMessageController=_cardMessageController;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) SPTInAppMessageQAToolBannerMessageController *bannerMessageController; // @synthesize bannerMessageController=_bannerMessageController;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTInAppMessageQAToolViewController *qaViewController; // @synthesize qaViewController=_qaViewController;
@property(retain, nonatomic) SPTInAppMessageQAToolCardPresentationController *cardPresentationController; // @synthesize cardPresentationController=_cardPresentationController;
@property(retain, nonatomic) SPTInAppMessageQAToolViewModel *qaViewModel; // @synthesize qaViewModel=_qaViewModel;
@property(readonly, nonatomic) SPTDataLoader *qaDataLoader; // @synthesize qaDataLoader=_qaDataLoader;
@property(readonly, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
- (void).cxx_destruct;
- (void)removeQAToolViewModelObservers;
- (void)addQAToolViewModelObservers;
- (void)connectDelegates;
- (id)setupQATool;
- (id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned long long)arg2;
- (id)itemForDevProdToggle;
- (id)itemForPresentingQATool;
- (void)itemizeSettingsPage:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureSettingsItemFactory:(id)arg1 slateManager:(id)arg2 slateBuilderProvider:(id)arg3 actionFactory:(id)arg4 alertController:(id)arg5 qaToolDataLoader:(id)arg6 localSettings:(id)arg7 bannerPresentationManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

