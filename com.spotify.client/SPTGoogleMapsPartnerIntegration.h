//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGoogleMapsDeepLinkObserver-Protocol.h"
#import "SPTPartnerNavigationIntegration-Protocol.h"

@class NSString, SPTGoogleMapsPresenter, SPTObserverManager, UIImage;
@protocol SPTLinkDispatcher;

@interface SPTGoogleMapsPartnerIntegration : NSObject <SPTGoogleMapsDeepLinkObserver, SPTPartnerNavigationIntegration>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTObserverManager *_observerManager;
    SPTGoogleMapsPresenter *_presenter;
}

@property(retain, nonatomic) SPTGoogleMapsPresenter *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)applicationDidLaunchFromGoogleMapsDeepLink;
- (id)externalURL;
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)openAppStore;
- (void)openApp;
@property(readonly, copy, nonatomic) NSString *sentToReasonForLogging;
@property(readonly, copy, nonatomic) NSString *appNameForLogging;
@property(readonly, nonatomic) _Bool isPresentingActiveBanner;
@property(readonly, nonatomic, getter=isNavigating) _Bool navigating;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) NSString *redirectURIPath;
@property(readonly, nonatomic) NSString *redirectURI;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *name;
- (id)initWithLinkDispatcher:(id)arg1 presenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
