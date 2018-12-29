//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8Features14UpsellManaging_-Protocol.h"

@class NSUserDefaults, TrackAuthorizationHelper;
@protocol _TtP4Core10TechLogger_;

@interface UpsellManager : NSObject <_TtP8Features14UpsellManaging_>
{
    NSUserDefaults *_userDefaults;
    TrackAuthorizationHelper *_trackAuthorization;
    id <_TtP4Core10TechLogger_> _techLogger;
}

@property(readonly, nonatomic) id <_TtP4Core10TechLogger_> techLogger; // @synthesize techLogger=_techLogger;
@property(readonly, nonatomic) TrackAuthorizationHelper *trackAuthorization; // @synthesize trackAuthorization=_trackAuthorization;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)planDecodingSucceededTechEvent;
- (id)planDecodingFailedTechEvent;
- (id)upsellUpdateFailedTechEvent;
- (id)loadUpsells;
- (id)upsellWithIdentifier:(long long)arg1;
- (id)midTier;
- (id)highTier;
- (void)removeStoredUpsell;
- (void)updateUpsell:(id)arg1;
- (_Bool)shouldUpsellForTrack:(id)arg1;
- (_Bool)shouldUpsellForPlaylist:(id)arg1;
- (_Bool)shouldUpsell;
- (_Bool)isEligibleForTrial;
- (id)highTierUpsell;
- (id)midTierUpsell;
- (id)initWithUserDefaults:(id)arg1 trackAuthorization:(id)arg2 techLogger:(id)arg3;
- (id)init;

@end
