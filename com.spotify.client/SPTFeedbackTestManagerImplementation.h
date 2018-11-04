//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeedbackTestManager.h"

@class NSString, SPTFeedbackFeatureFlagSignalObserver;

@interface SPTFeedbackTestManagerImplementation : NSObject <SPTFeedbackTestManager>
{
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    SPTFeedbackFeatureFlagSignalObserver *_feedbackV2SignalObserver;
}

@property(retain, nonatomic) SPTFeedbackFeatureFlagSignalObserver *feedbackV2SignalObserver; // @synthesize feedbackV2SignalObserver=_feedbackV2SignalObserver;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isDiscoverWeeklyV2FeedbackLoggingEnabled) _Bool discoverWeeklyV2FeedbackLoggingEnabled;
- (void)setupFeedbackFeatureFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 localSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

