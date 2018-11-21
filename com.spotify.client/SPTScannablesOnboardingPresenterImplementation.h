//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesOnboardingPresenter-Protocol.h"

@class NSString, SPTScannablesSlateFactory;
@protocol SPTLocalSettings, SPTSlateManager, SPTTooltipPresentationManager;

@interface SPTScannablesOnboardingPresenterImplementation : NSObject <SPTScannablesOnboardingPresenter>
{
    id <SPTSlateManager> _slateManager;
    SPTScannablesSlateFactory *_slateFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTTooltipPresentationManager> _tooltipManager;
}

@property(readonly, nonatomic) id <SPTTooltipPresentationManager> tooltipManager; // @synthesize tooltipManager=_tooltipManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) SPTScannablesSlateFactory *slateFactory; // @synthesize slateFactory=_slateFactory;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
- (void).cxx_destruct;
- (id)contextMenuOnboardingDidDismissValue;
- (_Bool)shouldPresentContextMenuOnboarding;
- (id)contextMenuOnboardingTooltipItemForEntityURL:(id)arg1;
- (void)presentContextMenuOnboardingAnchoredToView:(id)arg1 entityURL:(id)arg2;
- (void)presentScannerOnboardingSlateWithDelegate:(id)arg1;
@property(readonly, nonatomic, getter=isPresentingContextMenuOnboarding) _Bool presentingContextMenuOnboarding;
- (id)initWithTooltipManager:(id)arg1 slateManager:(id)arg2 slateFactory:(id)arg3 localSettings:(id)arg4;
- (_Bool)sta_isScannablesTooltipVisible;
- (void)sta_forceHideScannablesTooltip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

