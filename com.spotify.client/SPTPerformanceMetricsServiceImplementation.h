//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNavigationManagerDelegate.h"
#import "SPTPerformanceMetricsService.h"

@class NSString, SPTAllocationContext, SPTPerformanceMetricsTransports, SPTPerformanceMetricsViewLoggerFactoryImplementation, SPTStartupTracer;

@interface SPTPerformanceMetricsServiceImplementation : NSObject <SPTNavigationManagerDelegate, SPTPerformanceMetricsService>
{
    id <CosmosFeature> _cosmosFeature;
    id <SPTContainerService> _containerService;
    id <SPTNetworkService> _networkService;
    SPTStartupTracer *_startupTracer;
    id <SPTResolver> _resolver;
    SPTPerformanceMetricsTransports *_transports;
    SPTPerformanceMetricsViewLoggerFactoryImplementation *_viewLoggerFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTPerformanceMetricsViewLoggerFactoryImplementation *viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
@property(retain, nonatomic) SPTPerformanceMetricsTransports *transports; // @synthesize transports=_transports;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
- (void).cxx_destruct;
- (void)navigationManager:(id)arg1 didNavigateFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)navigationManager:(id)arg1 willNavigateFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)enableCpuMonitor:(_Bool)arg1;
- (void)unload;
- (void)load;
- (id)provideViewLoggerFactory;
- (id)provideTransportRegistry;
- (id)provideResolver;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
