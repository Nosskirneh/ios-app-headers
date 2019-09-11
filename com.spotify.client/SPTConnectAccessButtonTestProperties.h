//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectAccessButtonTestManager-Protocol.h"

@class NSString, SPTConnectUIFeatureProperties;
@protocol SPTRemoteConfigurationResolver;

@interface SPTConnectAccessButtonTestProperties : NSObject <SPTConnectAccessButtonTestManager>
{
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTConnectUIFeatureProperties *_properties;
}

@property(retain, nonatomic) SPTConnectUIFeatureProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
- (void).cxx_destruct;
- (_Bool)connectAccessButtonEnabled;
- (id)initWithRemoteConfigurationResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

