//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, SPTAllocationContext;
@protocol SPTCoreService, SPTCrashReporterService, SPTNetworkService, SPTUIModeTransitionCoordinator;

@interface SPTSessionServiceImplementation : NSObject
{
    id <SPTCoreService> _coreService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTNetworkService> _networkFeature;
    NSMapTable *_localSettingsCache;
    id <SPTUIModeTransitionCoordinator> _transitionCoordinator;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTUIModeTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(retain, nonatomic) NSMapTable *localSettingsCache; // @synthesize localSettingsCache=_localSettingsCache;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
- (void).cxx_destruct;
- (id)provideUIModeTransitionCoordinator;
- (id)provideOfflineNotifier;
- (id)provideProductState;
- (id)createLocalSettingsForServiceIdentifier:(id)arg1;
- (id)provideLocalSettingsForService:(id)arg1;
- (id)provideLocalSettingsForServiceIdentifier:(id)arg1;
- (id)provideCurrentSession;
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

