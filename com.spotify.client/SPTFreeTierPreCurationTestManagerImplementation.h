//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTFreeTierPreCurationTestManager.h"

@class NSString;

@interface SPTFreeTierPreCurationTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTFreeTierPreCurationTestManager>
{
    _Bool _preCurationAllSongsEnabled;
    _Bool _preCurationSkipDialogEnabled;
    _Bool _preCurationOnDemandEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTFeatureFlagSignal> _localBansEnabledSignal;
    id <SPTFeatureFlagSignal> _preCurationAllSongsEnabledSignal;
    id <SPTFeatureFlagSignal> _preCurationSkipDialogEnabledSignal;
    id <SPTFeatureFlagSignal> _preCurationOnDemandEnabledSignal;
}

@property(nonatomic, getter=isPreCurationOnDemandEnabled) _Bool preCurationOnDemandEnabled; // @synthesize preCurationOnDemandEnabled=_preCurationOnDemandEnabled;
@property(nonatomic, getter=isPreCurationSkipDialogEnabled) _Bool preCurationSkipDialogEnabled; // @synthesize preCurationSkipDialogEnabled=_preCurationSkipDialogEnabled;
@property(nonatomic, getter=isPreCurationAllSongsEnabled) _Bool preCurationAllSongsEnabled; // @synthesize preCurationAllSongsEnabled=_preCurationAllSongsEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> preCurationOnDemandEnabledSignal; // @synthesize preCurationOnDemandEnabledSignal=_preCurationOnDemandEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> preCurationSkipDialogEnabledSignal; // @synthesize preCurationSkipDialogEnabledSignal=_preCurationSkipDialogEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> preCurationAllSongsEnabledSignal; // @synthesize preCurationAllSongsEnabledSignal=_preCurationAllSongsEnabledSignal;
@property(readonly, nonatomic) __weak id <SPTFeatureFlagSignal> localBansEnabledSignal; // @synthesize localBansEnabledSignal=_localBansEnabledSignal;
@property(readonly, nonatomic) __weak id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupPreCurationFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 freeTierEnabledSignal:(id)arg2 localBansEnabledSignal:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

