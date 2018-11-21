//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccountProductActivationObserver-Protocol.h"
#import "SPTUpsellAction-Protocol.h"

@class NSString, SPTPopupManager;
@protocol SPTAccountProductActivationController, SPTLinkDispatcher, SPTUIModeTransitionCoordinator, SPTUIModeTransitionToken, SPTUpsellOnDemandInteractions;

@interface SPTUpsellIAPAction : NSObject <SPTAccountProductActivationObserver, SPTUpsellAction>
{
    _Bool _freeTierEnabled;
    NSString *_productIdentifier;
    id <SPTUpsellOnDemandInteractions> _onDemandManager;
    id <SPTUIModeTransitionCoordinator> _transitionCoordinator;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTPopupManager *_popupManager;
    id <SPTUIModeTransitionToken> _transitionToken;
    id <SPTAccountProductActivationController> _productActivationController;
}

+ (long long)availableProductForIdentifier:(id)arg1;
@property(readonly, nonatomic) id <SPTAccountProductActivationController> productActivationController; // @synthesize productActivationController=_productActivationController;
@property(nonatomic) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) id <SPTUIModeTransitionToken> transitionToken; // @synthesize transitionToken=_transitionToken;
@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTUIModeTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(retain, nonatomic) id <SPTUpsellOnDemandInteractions> onDemandManager; // @synthesize onDemandManager=_onDemandManager;
@property(readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
- (void)productActivationController:(id)arg1 didFailActivatingProduct:(long long)arg2 error:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)perform;
- (void)openTrialStartedURL;
- (void)showLoginFailureErrorView;
- (void)handleResult:(long long)arg1;
- (void)callTransitionaryUI;
- (void)triggerInAppPurchaseOfAvailableProduct:(long long)arg1;
- (void)dealloc;
- (id)initWithProductActivationController:(id)arg1 productIdentifier:(id)arg2 onDemandManager:(id)arg3 transitionCoordinator:(id)arg4 linkDispatcher:(id)arg5 popupManager:(id)arg6 freeTierEnabled:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

