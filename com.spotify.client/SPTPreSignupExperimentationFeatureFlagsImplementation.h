//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPreSignupExperimentationFeatureFlags-Protocol.h"

@class NSDictionary, NSString;

@interface SPTPreSignupExperimentationFeatureFlagsImplementation : NSObject <SPTPreSignupExperimentationFeatureFlags>
{
    NSDictionary *_flags;
}

@property(retain, nonatomic) NSDictionary *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (long long)stateForFlag:(id)arg1;
- (id)initWithFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

