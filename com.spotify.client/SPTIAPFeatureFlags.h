//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTIAPFeatureFlags.h"

@class NSString;

@interface SPTIAPFeatureFlags : NSObject <SPTAbbaFeatureFlagsObserver, SPTIAPFeatureFlags>
{
    _Bool newStackEnabled;
    _Bool betaDetectorEnabled;
    id <SPTAbbaFeatureFlags> _abbaFlags;
}

@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFlags; // @synthesize abbaFlags=_abbaFlags;
@property(nonatomic, getter=isBetaDetectorEnabled) _Bool betaDetectorEnabled; // @synthesize betaDetectorEnabled;
@property(nonatomic, getter=isNewStackEnabled) _Bool newStackEnabled; // @synthesize newStackEnabled;
- (void).cxx_destruct;
- (void)featureFlagsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

