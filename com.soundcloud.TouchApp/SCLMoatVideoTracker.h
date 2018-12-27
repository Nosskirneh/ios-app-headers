//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLMoatBaseTracker.h"

@class NSString, SCLMoatBaseVideoTracker;

@interface SCLMoatVideoTracker : SCLMoatBaseTracker
{
    SCLMoatBaseVideoTracker *_managedTracker;
    NSString *_partnerCode;
}

+ (id)trackerWithPartnerCode:(id)arg1;
@property(retain, nonatomic) NSString *partnerCode; // @synthesize partnerCode=_partnerCode;
@property(retain, nonatomic) SCLMoatBaseVideoTracker *managedTracker; // @synthesize managedTracker=_managedTracker;
- (void).cxx_destruct;
- (void)changeTargetLayer:(id)arg1 withContainingView:(id)arg2;
- (_Bool)trackVideoAd:(id)arg1 usingAVMoviePlayer:(id)arg2 withLayer:(id)arg3 withContainingView:(id)arg4;
- (_Bool)trackVideoAd:(id)arg1 usingMPMoviePlayer:(id)arg2;
- (void)stopTracking;
- (id)initWithPartnerCode:(id)arg1;
- (void)dealloc;

@end

