//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTRecentlyPlayedTestManager : NSObject
{
    _Bool _recentlyPlayedListCachingEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTFeatureFlagSignal> _recentlyPlayedCachingSignal;
    NSSet *_disallowedContentTypes;
}

@property(copy, nonatomic) NSSet *disallowedContentTypes; // @synthesize disallowedContentTypes=_disallowedContentTypes;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> recentlyPlayedCachingSignal; // @synthesize recentlyPlayedCachingSignal=_recentlyPlayedCachingSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic, getter=isRecentlyPlayedListCachingEnabled) _Bool recentlyPlayedListCachingEnabled; // @synthesize recentlyPlayedListCachingEnabled=_recentlyPlayedListCachingEnabled;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupCachedRecentlyPlayedListSignal;
- (_Bool)disallowAdditionalContentType:(unsigned long long)arg1;
- (id)initWithFeatureFlagFactory:(id)arg1 freeTierEnabledSignal:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

