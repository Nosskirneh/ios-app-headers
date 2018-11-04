//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSMutableSet, SPTAdContextManager, SPTAdFeatureFlagChecks;

@interface SPTAdRulesManager : NSObject
{
    SPTAdFeatureFlagChecks *_featureChecker;
    SPTAdContextManager *_adContextManager;
    NSArray *_midrollDisabledNavigationContextPrefixes;
    NSArray *_prerollDisabledNavigationContextPrefixes;
    NSArray *_prerollDisabledFeatureOriginPrefixes;
    NSMutableSet *_midrollDisablePlayOriginContextPrefixes;
    NSMutableDictionary *_adhocSlotDisabledReasonsDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *adhocSlotDisabledReasonsDictionary; // @synthesize adhocSlotDisabledReasonsDictionary=_adhocSlotDisabledReasonsDictionary;
@property(readonly, nonatomic) NSMutableSet *midrollDisablePlayOriginContextPrefixes; // @synthesize midrollDisablePlayOriginContextPrefixes=_midrollDisablePlayOriginContextPrefixes;
@property(readonly, nonatomic) NSArray *prerollDisabledFeatureOriginPrefixes; // @synthesize prerollDisabledFeatureOriginPrefixes=_prerollDisabledFeatureOriginPrefixes;
@property(readonly, nonatomic) NSArray *prerollDisabledNavigationContextPrefixes; // @synthesize prerollDisabledNavigationContextPrefixes=_prerollDisabledNavigationContextPrefixes;
@property(readonly, nonatomic) NSArray *midrollDisabledNavigationContextPrefixes; // @synthesize midrollDisabledNavigationContextPrefixes=_midrollDisabledNavigationContextPrefixes;
@property(nonatomic) __weak SPTAdContextManager *adContextManager; // @synthesize adContextManager=_adContextManager;
@property(nonatomic) __weak SPTAdFeatureFlagChecks *featureChecker; // @synthesize featureChecker=_featureChecker;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isContextResumeEnabled) _Bool contextResumeEnabled;
- (_Bool)isPrerollFeatureEnabled;
- (_Bool)isMidrollFeatureEnabled;
- (_Bool)removeDisabledReason:(id)arg1 forSlot:(id)arg2;
- (_Bool)addDisabledReason:(id)arg1 forSlot:(id)arg2;
- (id)disabledReasonsForSlot:(id)arg1;
- (void)removeMidrollDisabledPlayOriginContextPrefix:(id)arg1;
- (void)addMidrollDisabledPlayOriginContextPrefix:(id)arg1;
- (_Bool)isPrerollEnabledForPlayOriginFeature:(id)arg1;
- (_Bool)isMidrollEnabledForPlayOriginContextURL:(id)arg1;
- (_Bool)isPrerollEnabledForNavigationContextURL:(id)arg1;
- (_Bool)isMidrollEnabledForNavigationContextURL:(id)arg1;
@property(readonly, nonatomic, getter=isPrerollEnabled) _Bool prerollEnabled;
@property(readonly, nonatomic, getter=isMidrollEnabled) _Bool midrollEnabled;
@property(readonly, nonatomic) unsigned long long adRules;
- (id)initWithFeatureChecker:(id)arg1 adContextManager:(id)arg2;

@end

