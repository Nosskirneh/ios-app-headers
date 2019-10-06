//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMPlayerConfiguration-Protocol.h"
#import "SPTAbbaFeatureFlagsObserver-Protocol.h"

@class NSString, NSURL, SPTDataLoaderKeymasterAuthoriser;
@protocol SPTAbbaFeatureFlags;

@interface SPTVideoFeaturePlayerConfiguration : NSObject <SPTAbbaFeatureFlagsObserver, BMPlayerConfiguration>
{
    _Bool _subtitlesEnabled;
    _Bool _cachingFlatFilesEnabled;
    _Bool _preventDisplaySleepDuringVideoPlayback;
    unsigned long long _videoCDNLoggingOption;
    id <SPTAbbaFeatureFlags> _featureFlags;
    SPTDataLoaderKeymasterAuthoriser *_keymasterAuthoriser;
    NSString *_manifestURLTemplate;
}

@property(copy, nonatomic) NSString *manifestURLTemplate; // @synthesize manifestURLTemplate=_manifestURLTemplate;
@property(retain, nonatomic) SPTDataLoaderKeymasterAuthoriser *keymasterAuthoriser; // @synthesize keymasterAuthoriser=_keymasterAuthoriser;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) _Bool preventDisplaySleepDuringVideoPlayback; // @synthesize preventDisplaySleepDuringVideoPlayback=_preventDisplaySleepDuringVideoPlayback;
@property(readonly, nonatomic) _Bool cachingFlatFilesEnabled; // @synthesize cachingFlatFilesEnabled=_cachingFlatFilesEnabled;
@property(readonly, nonatomic) _Bool subtitlesEnabled; // @synthesize subtitlesEnabled=_subtitlesEnabled;
@property(readonly, nonatomic) unsigned long long videoCDNLoggingOption; // @synthesize videoCDNLoggingOption=_videoCDNLoggingOption;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fairplayLicenseURL;
@property(readonly, nonatomic) NSURL *fairplayApplicationCertificateURL;
- (id)remoteManifestURLForManifestID:(id)arg1;
- (void)featureFlagsDidChange:(id)arg1;
- (void)updateRolloutFlatFilesCaching;
- (void)updateABSubtitles;
- (void)updateVideoCDNSampling;
- (void)updateFeatureFlagsTemplates;
- (void)dealloc;
- (void)updateFeatureFlags;
- (id)initWithFeatureFlags:(id)arg1 keymasterAuthoriser:(id)arg2 preventDisplaySleepDuringVideoPlayback:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

