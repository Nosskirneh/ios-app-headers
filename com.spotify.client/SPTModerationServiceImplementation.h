//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTModerationService-Protocol.h"

@class NSString, SPTAllocationContext, SPTModerationActionRegistrar, SPTModerationReportDecorationRegistryImplementation, SPTModerationTestManager, SPTModerationTimestampDecorator, SPTModerationWebViewAuthoriserFactory, SPTModerationWebViewControllerFactory, SPTModerationWebViewURLProviderFactory;
@protocol SPContextMenuFeature, SPTCoreService, SPTFeatureFlaggingService, SPTGLUEService, SPTNetworkService, SPTPlayerFeature, SPTSessionService, SPTUIPresentationService, SPTURIDispatchService;

@interface SPTModerationServiceImplementation : NSObject <SPTModerationService>
{
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTNetworkService> _networkService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTGLUEService> _glueService;
    SPTModerationTimestampDecorator *_timestampDecorator;
    SPTModerationTestManager *_testManager;
    SPTModerationReportDecorationRegistryImplementation *_decorationRegistry;
    SPTModerationWebViewControllerFactory *_moderationWebViewControllerFactory;
    SPTModerationWebViewAuthoriserFactory *_moderationWebViewAuthoriserFactory;
    SPTModerationWebViewURLProviderFactory *_moderationWebViewURLProviderFactory;
    SPTModerationActionRegistrar *_moderationActionsRegistrar;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTModerationActionRegistrar *moderationActionsRegistrar; // @synthesize moderationActionsRegistrar=_moderationActionsRegistrar;
@property(retain, nonatomic) SPTModerationWebViewURLProviderFactory *moderationWebViewURLProviderFactory; // @synthesize moderationWebViewURLProviderFactory=_moderationWebViewURLProviderFactory;
@property(retain, nonatomic) SPTModerationWebViewAuthoriserFactory *moderationWebViewAuthoriserFactory; // @synthesize moderationWebViewAuthoriserFactory=_moderationWebViewAuthoriserFactory;
@property(retain, nonatomic) SPTModerationWebViewControllerFactory *moderationWebViewControllerFactory; // @synthesize moderationWebViewControllerFactory=_moderationWebViewControllerFactory;
@property(retain, nonatomic) SPTModerationReportDecorationRegistryImplementation *decorationRegistry; // @synthesize decorationRegistry=_decorationRegistry;
@property(retain, nonatomic) SPTModerationTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTModerationTimestampDecorator *timestampDecorator; // @synthesize timestampDecorator=_timestampDecorator;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
- (void).cxx_destruct;
- (id)provideModerationFeatureState;
- (id)provideDecorationRegistry;
- (void)unloadPlayerTimestampDecorator;
- (void)loadPlayerTimestampDecorator;
- (void)registerContextMenuActions;
- (void)loadTestManager;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

