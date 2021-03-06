//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ProfileFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTProfileFeatureProperties, SPTProfileLogger;
@protocol FollowFeature, SPContextMenuFeature, SPTCollectionPlatformService, SPTContainerService, SPTCoreService, SPTFindFriendsFeature, SPTFreeTierService, SPTGLUEService, SPTNavigationFeature, SPTNetworkService, SPTPageRegistrationToken, SPTPerformanceMetricsService, SPTRemoteConfigurationService, SPTSessionService;

@interface ProfileFeatureImplementation : NSObject <ProfileFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTNetworkService> _networkFeature;
    id <FollowFeature> _followFeature;
    id <SPTFindFriendsFeature> _findFriendsFeature;
    id <SPTFreeTierService> _freeTierService;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTGLUEService> _glueService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    SPTProfileLogger *_logger;
    id <SPTPageRegistrationToken> _profileOverviewPageRegistrationToken;
    id <SPTPageRegistrationToken> _profilePageRegistrationToken;
    id <SPTPageRegistrationToken> _profileViewAllPageRegistrationToken;
    id <SPTPageRegistrationToken> _profileSocialRelationsPageRegistrationToken;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    SPTProfileFeatureProperties *_featureProperties;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTProfileFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(retain, nonatomic) id <SPTPageRegistrationToken> profileSocialRelationsPageRegistrationToken; // @synthesize profileSocialRelationsPageRegistrationToken=_profileSocialRelationsPageRegistrationToken;
@property(retain, nonatomic) id <SPTPageRegistrationToken> profileViewAllPageRegistrationToken; // @synthesize profileViewAllPageRegistrationToken=_profileViewAllPageRegistrationToken;
@property(retain, nonatomic) id <SPTPageRegistrationToken> profilePageRegistrationToken; // @synthesize profilePageRegistrationToken=_profilePageRegistrationToken;
@property(retain, nonatomic) id <SPTPageRegistrationToken> profileOverviewPageRegistrationToken; // @synthesize profileOverviewPageRegistrationToken=_profileOverviewPageRegistrationToken;
@property(retain, nonatomic) SPTProfileLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFindFriendsFeature> findFriendsFeature; // @synthesize findFriendsFeature=_findFriendsFeature;
@property(nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideTestManager;
- (id)provideProvideTheme;
- (id)provideProfileUserDataForUser:(id)arg1;
- (id)provideProfileUserDataForCurrentUser;
- (id)provideSocialRelationsVCIPhoneWithURI:(id)arg1 context:(id)arg2;
- (id)provideViewAllVCWithURI:(id)arg1 context:(id)arg2;
- (id)provideLeafProfileViewController:(id)arg1 context:(id)arg2;
- (id)provideRootProfileViewController:(id)arg1 context:(id)arg2;
- (void)unregisterPages;
- (void)registerPages;
- (void)configurePageRegistryState;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

