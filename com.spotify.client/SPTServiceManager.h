//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTServiceProvider-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSOperation, NSOperationQueue, NSString;
@protocol SPTServiceInstanceInteractor, SPTServiceManagerDelegate;

@interface SPTServiceManager : NSObject <SPTServiceProvider>
{
    NSOperation *_lastLoadOperation;
    SPTServiceManager *_parent;
    id <SPTServiceManagerDelegate> _delegate;
    NSArray *_enabledServices;
    long long _state;
    NSString *_scope;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_operations;
    NSMutableDictionary *_services;
    NSMutableArray *_serviceLoadOrder;
    NSString *_currentlyConfiguringService;
    id <SPTServiceInstanceInteractor> _instanceInteractor;
}

@property(readonly, copy, nonatomic) id <SPTServiceInstanceInteractor> instanceInteractor; // @synthesize instanceInteractor=_instanceInteractor;
@property(retain, nonatomic) NSString *currentlyConfiguringService; // @synthesize currentlyConfiguringService=_currentlyConfiguringService;
@property(retain, nonatomic) NSMutableArray *serviceLoadOrder; // @synthesize serviceLoadOrder=_serviceLoadOrder;
@property(readonly, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(retain, nonatomic) NSMutableDictionary *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSArray *enabledServices; // @synthesize enabledServices=_enabledServices;
@property(nonatomic) __weak id <SPTServiceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTServiceManager *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSOperation *lastLoadOperation; // @synthesize lastLoadOperation=_lastLoadOperation;
- (void).cxx_destruct;
- (_Bool)canProvideServiceWithIdentifier:(id)arg1;
- (id)provideOptionalServiceForIdentifier:(id)arg1;
- (id)provideServiceForIdentifier:(id)arg1;
- (void)unloadServices;
- (void)loadServicesWithCompletion:(CDUnknownBlockType)arg1;
- (id)serviceWithIdentifier:(id)arg1;
- (void)tellServicesToUnload;
- (void)tellServicesToLoad:(id)arg1;
- (id)configureAllServices;
- (void)addServiceFromClass:(Class)arg1;
- (void)instantiateAllServices;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithScope:(id)arg1 enabledServices:(id)arg2 instanceInteractor:(id)arg3 parent:(id)arg4;
- (id)graphVizForDependencyGraph:(id)arg1 loadOrder:(id)arg2;
- (void)dumpGraphVizToFile:(id)arg1 forDependencyGraph:(id)arg2 loadOrder:(id)arg3;
- (void)maybeDumpDependencyGraphAndExit:(id)arg1 loadOrder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

