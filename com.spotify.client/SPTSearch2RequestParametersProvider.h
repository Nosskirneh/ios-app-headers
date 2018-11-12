//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SPTFeatureFlagSignal, SPTPodcastTestManager, SPTProductState, SPTSearch2UserTierProviding;

@interface SPTSearch2RequestParametersProvider : NSObject
{
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTProductState> _productState;
    id <SPTFeatureFlagSignal> _freeTierSignal;
    id <SPTSearch2UserTierProviding> _userTierProvider;
}

@property(readonly, nonatomic) id <SPTSearch2UserTierProviding> userTierProvider; // @synthesize userTierProvider=_userTierProvider;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierSignal; // @synthesize freeTierSignal=_freeTierSignal;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
- (void).cxx_destruct;
- (unsigned long long)searchExperience;
- (unsigned long long)entityVersion;
- (id)makeDefaultSearchRequestParameters;
- (id)initWithPodcastService:(id)arg1 sessionService:(id)arg2 userTierProvider:(id)arg3;

@end

