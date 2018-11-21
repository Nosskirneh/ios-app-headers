//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainerIdleMonitorObservable, SPTNowPlayingInformationUnitViewModel, SPTNowPlayingManager, SPTNowPlayingNavigationBarModel, SPTNowPlayingStateObservable;

@protocol SPTNowPlayingService <SPTService>
- (id <SPTNowPlayingInformationUnitViewModel>)createInformationUnitViewModel;
- (id <SPTNowPlayingNavigationBarModel>)provideNavigationBarModel;
- (id <SPTNowPlayingAuxiliaryActionsHandler>)provideAuxiliaryActionsHandler;
- (id <SPTNowPlayingStateObservable>)provideNowPlayingStateObservable;
- (id <SPTNowPlayingContainerIdleMonitorObservable>)provideNowPlayingContainerIdleMonitorObservable;
- (id <SPTNowPlayingManager>)provideNowPlayingManager;
@end

