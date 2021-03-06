//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL;
@protocol SPTFormatListPlatformManager, SPTFormatListPlatformRegistry, SPTFormatListPlatformRemoteControlPolicyFactory, SPTFormatListPlatformRemoteControlPolicyManager, SPTFormatListPlatformResolver, SPTFormatListPlatformTestManager;

@protocol SPTFormatListPlatformService <SPTService>
- (id <SPTFormatListPlatformManager>)providePlatformManagerForFormatListURL:(NSURL *)arg1;
- (id <SPTFormatListPlatformResolver>)providePlatformResolver;
- (id <SPTFormatListPlatformRemoteControlPolicyManager>)provideRemoteControlPolicyManager;
- (id <SPTFormatListPlatformRegistry>)providePlatformRegistry;
- (id <SPTFormatListPlatformRemoteControlPolicyFactory>)provideRemoteControlPolicyFactory;
- (id <SPTFormatListPlatformTestManager>)provideTestManager;
@end

