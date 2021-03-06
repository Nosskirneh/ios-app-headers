//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTRemoteConfigurationService;

@interface SPTStartupAnalysisServiceImplementation : NSObject <SPTService>
{
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
}

+ (void)load;
+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
- (void).cxx_destruct;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

