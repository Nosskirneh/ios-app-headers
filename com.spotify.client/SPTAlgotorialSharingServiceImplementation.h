//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAlgotorialSharingService-Protocol.h"

@class NSMutableDictionary, NSString, SPTAllocationContext, SPTDataLoaderFactory;
@protocol SPTContainerService, SPTNetworkService;

@interface SPTAlgotorialSharingServiceImplementation : NSObject <SPTAlgotorialSharingService>
{
    id <SPTContainerService> _containerService;
    id <SPTNetworkService> _networkService;
    SPTDataLoaderFactory *_dataLoaderFactory;
    NSMutableDictionary *_registrationsByURIs;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSMutableDictionary *registrationsByURIs; // @synthesize registrationsByURIs=_registrationsByURIs;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)registerAlgotorialLinkForSpotifyURI:(id)arg1 queryParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)requiresAlgotorialRegistration:(id)arg1 queryParameters:(id)arg2;
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

