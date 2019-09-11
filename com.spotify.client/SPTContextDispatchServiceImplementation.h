//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextAwareURITypeRegistry-Protocol.h"
#import "SPTContextDispatchService-Protocol.h"

@class NSMutableSet, NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTCoreService;

@interface SPTContextDispatchServiceImplementation : NSObject <SPTContextAwareURITypeRegistry, SPTContextDispatchService>
{
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    NSMutableSet *_URITypeRegistries;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSMutableSet *URITypeRegistries; // @synthesize URITypeRegistries=_URITypeRegistries;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)typeManagerForURI:(id)arg1;
- (void)registerContextAwareURITypeManager:(id)arg1;
- (id)provideContextDispatchPageForURI:(id)arg1 context:(id)arg2;
- (id)provideContextAwareURITypeRegistry;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

