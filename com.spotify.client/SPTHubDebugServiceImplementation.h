//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTDebugService, SPTGLUEService, SPTHubFrameworkService;

@interface SPTHubDebugServiceImplementation : NSObject <SPTService>
{
    id <SPTHubFrameworkService> _hubsRendererFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTContainerService> _containerService;
    id <SPTDebugService> _debugService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubsRendererFrameworkService; // @synthesize hubsRendererFrameworkService=_hubsRendererFrameworkService;
- (void).cxx_destruct;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

