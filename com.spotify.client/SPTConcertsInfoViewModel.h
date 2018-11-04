//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTConcertsEntityViewModelObserver.h"

@class NSString, SPTConcertsEntityState;

@interface SPTConcertsInfoViewModel : NSObject <SPTConcertsEntityViewModelObserver>
{
    NSString *_text;
    SPTConcertsEntityState *_state;
}

@property(copy, nonatomic) SPTConcertsEntityState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)entityViewModel:(id)arg1 didTransitionToState:(id)arg2 fromState:(id)arg3;
@property(readonly, nonatomic) long long defaultType;
@property(readonly, nonatomic) _Bool shouldShowCustomText;
@property(readonly, copy, nonatomic) NSString *pageTitle;
@property(readonly, copy, nonatomic) NSString *localizedFeatureName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
