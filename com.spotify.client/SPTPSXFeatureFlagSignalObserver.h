//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"

@class NSString;

@interface SPTPSXFeatureFlagSignalObserver : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _signalEnabled;
    id <SPTFeatureFlagSignal> _featureFlagSignal;
}

@property(readonly, nonatomic) id <SPTFeatureFlagSignal> featureFlagSignal; // @synthesize featureFlagSignal=_featureFlagSignal;
@property(nonatomic, getter=isSignalEnabled) _Bool signalEnabled; // @synthesize signalEnabled=_signalEnabled;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)dealloc;
- (id)initWithFeatureFlagSignal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

