//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTServiceManagerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SPTStartupTracer;
@protocol SPTServiceInstanceInteractor, SPTServiceList, SPTServiceOrchestratorDelegate;

@interface SPTServiceOrchestrator : NSObject <SPTServiceManagerDelegate>
{
    id <SPTServiceOrchestratorDelegate> _delegate;
    id <SPTServiceInstanceInteractor> _instanceInteractor;
    id <SPTServiceList> _serviceList;
    NSMutableDictionary *_serviceManagers;
    SPTStartupTracer *_startupTracer;
}

@property(readonly, nonatomic) SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(retain, nonatomic) NSMutableDictionary *serviceManagers; // @synthesize serviceManagers=_serviceManagers;
@property(retain, nonatomic) id <SPTServiceList> serviceList; // @synthesize serviceList=_serviceList;
@property(readonly, nonatomic) id <SPTServiceInstanceInteractor> instanceInteractor; // @synthesize instanceInteractor=_instanceInteractor;
@property(nonatomic) __weak id <SPTServiceOrchestratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)serviceManagerDidUnloadServices:(id)arg1;
- (void)serviceManagerWillUnloadServices:(id)arg1;
- (void)serviceManagerDidLoadServices:(id)arg1;
- (void)serviceManagerWillLoadServices:(id)arg1;
- (id)scopeForServiceManager:(id)arg1;
- (void)setupServiceForScope:(id)arg1;
- (void)unloadAllServices;
- (id)childManagersForScope:(id)arg1;
- (id)childScopesForScope:(id)arg1;
- (void)unloadServicesForScope:(id)arg1;
- (void)loadServicesForScope:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)serviceManagerForScope:(id)arg1;
- (id)initWithServiceList:(id)arg1 instanceInteractor:(id)arg2 startupTracer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

