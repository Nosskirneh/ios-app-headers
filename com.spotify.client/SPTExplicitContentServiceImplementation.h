//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTExplicitContentService-Protocol.h"

@class NSString, SPTAllocationContext, SPTExplicitContentAccessManagerImplementation, SPTExplicitContentHubCommandHandlerFactoryImplementation, SPTExplicitContentHubContentOperationFactoryImplementation, SPTExplicitContentLogger, SPTExplicitContentPopupPresenter;
@protocol SPTContainerService, SPTGLUEService, SPTPlayerFeature, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTExplicitContentServiceImplementation : NSObject <SPTExplicitContentService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTPlayerFeature> _playerService;
    id <SPTSessionService> _sessionService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTURIDispatchService> _uriDispatchService;
    SPTExplicitContentAccessManagerImplementation *_accessManager;
    SPTExplicitContentHubCommandHandlerFactoryImplementation *_hubCommandHandlerFactory;
    SPTExplicitContentHubContentOperationFactoryImplementation *_hubContentOperationFactory;
    SPTExplicitContentLogger *_logger;
    SPTExplicitContentPopupPresenter *_popupPresenter;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTExplicitContentPopupPresenter *popupPresenter; // @synthesize popupPresenter=_popupPresenter;
@property(retain, nonatomic) SPTExplicitContentLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTExplicitContentHubContentOperationFactoryImplementation *hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
@property(retain, nonatomic) SPTExplicitContentHubCommandHandlerFactoryImplementation *hubCommandHandlerFactory; // @synthesize hubCommandHandlerFactory=_hubCommandHandlerFactory;
@property(retain, nonatomic) SPTExplicitContentAccessManagerImplementation *accessManager; // @synthesize accessManager=_accessManager;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideSettingsSection:(id)arg1;
- (void)registerSettingsSection;
- (id)provideHubContentOperationFactory;
- (id)provideHubCommandHandlerFactory;
- (id)provideAccessManager;
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

