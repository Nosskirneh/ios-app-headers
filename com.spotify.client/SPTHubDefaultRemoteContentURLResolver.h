//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTHubRemoteContentURLResolver-Protocol.h"

@class NSString, SPTHubCapabilitiesManager;
@protocol SPTFeatureFlagSignal, SPTPodcastFeature;

@interface SPTHubDefaultRemoteContentURLResolver : NSObject <SPTHubRemoteContentURLResolver, SPTFeatureFlagSignalObserver>
{
    _Bool _freeTierEnabled;
    unsigned long long _hubIdentifier;
    SPTHubCapabilitiesManager *_capabilitiesManager;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
}

@property(nonatomic) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(readonly, nonatomic) SPTHubCapabilitiesManager *capabilitiesManager; // @synthesize capabilitiesManager=_capabilitiesManager;
@property(readonly, nonatomic) unsigned long long hubIdentifier; // @synthesize hubIdentifier=_hubIdentifier;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)URLForEndpointPath:(id)arg1;
- (id)endpointPathForViewURI:(id)arg1 forExternalData:(_Bool)arg2;
- (id)remoteHubContentURLForEndpointPath:(id)arg1 forExternalData:(_Bool)arg2;
- (id)remoteHubContentURLForViewURI:(id)arg1;
- (id)initWithHubIdentifier:(unsigned long long)arg1 capabilitiesManager:(id)arg2 podcastFeature:(id)arg3 freeTierEnabledSignal:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

