//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTServiceInstanceInteractor.h"

@class NSString, SPTDefaultServiceInstanceInteractor, SPTStartupTracer;

@interface SPTPerformanceMonitoringServiceInteractor : NSObject <SPTServiceInstanceInteractor>
{
    SPTDefaultServiceInstanceInteractor *_defaultInteractor;
    SPTStartupTracer *_startupTracer;
}

@property(readonly, nonatomic) SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(readonly, nonatomic) SPTDefaultServiceInstanceInteractor *defaultInteractor; // @synthesize defaultInteractor=_defaultInteractor;
- (void).cxx_destruct;
- (void)unloadService:(id)arg1 scope:(id)arg2;
- (void)backgroundLoadService:(id)arg1 scope:(id)arg2;
- (_Bool)canBackgroundLoadService:(id)arg1 scope:(id)arg2;
- (void)loadService:(id)arg1 scope:(id)arg2;
- (void)configureService:(id)arg1 scope:(id)arg2 serviceProvider:(id)arg3;
- (id)instantiateServiceClass:(Class)arg1 scope:(id)arg2;
- (id)identifierForService:(id)arg1;
- (id)identifierForServiceClass:(Class)arg1;
- (id)allocationContextForIdentifier:(id)arg1;
- (id)initWithStartupTracer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

