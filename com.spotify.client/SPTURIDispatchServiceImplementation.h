//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTURIDispatchService-Protocol.h"

@class NSString, SPTAllocationContext, SPTLinkDispatcherImplementation, SPTURISubtypeRegistryImplementation;
@protocol SPTContainerUIService, SPTCoreService;

@interface SPTURIDispatchServiceImplementation : NSObject <SPTURIDispatchService>
{
    id <SPTContainerUIService> _containerUIService;
    id <SPTCoreService> _coreService;
    SPTLinkDispatcherImplementation *_linkDispatcher;
    SPTURISubtypeRegistryImplementation *_URISubtypeRegistry;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTURISubtypeRegistryImplementation *URISubtypeRegistry; // @synthesize URISubtypeRegistry=_URISubtypeRegistry;
@property(retain, nonatomic) SPTLinkDispatcherImplementation *linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
- (void).cxx_destruct;
- (id)provideURISubtypeRegistry;
- (id)provideDeprecatedLegacyLinkDispatcher;
- (id)provideLinkDispatcher;
- (id)provideDefaultLinkDispatcher;
- (id)provideURISchemeRegistry;
- (id)provideExternalLinkController;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

