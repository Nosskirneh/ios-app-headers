//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVISREFFlagsService-Protocol.h"

@class NSDictionary, NSString, SPTAllocationContext;
@protocol SPTFeatureFlagSignal, SPTFeatureFlaggingService;

@interface SPTVISREFFlagsServiceImplementation : NSObject <SPTVISREFFlagsService>
{
    _Bool _fullExperienceExistingUsersEnabled;
    _Bool _fullExperienceExistingUsersGreenButtonEnabled;
    _Bool _fullExperienceNewUsersEnabled;
    _Bool _fullExperienceNewUsersGreenButtonEnabled;
    _Bool _headerEnabled;
    _Bool _greenButtonEnabled;
    _Bool _sectionHeaderEnabled;
    _Bool _trackRowEnabled;
    _Bool _trackCloudEnabled;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    NSDictionary *_visualRefreshExperienceExistingUserSignals;
    NSDictionary *_visualRefreshExperienceNewUserSignals;
    NSDictionary *_headerEnabledSignals;
    id <SPTFeatureFlagSignal> _sectionHeaderEnabledSignal;
    id <SPTFeatureFlagSignal> _trackRowEnabledSignal;
    id <SPTFeatureFlagSignal> _trackCloudEnabledSignal;
}

+ (id)serviceIdentifier;
@property(nonatomic) _Bool trackCloudEnabled; // @synthesize trackCloudEnabled=_trackCloudEnabled;
@property(nonatomic) _Bool trackRowEnabled; // @synthesize trackRowEnabled=_trackRowEnabled;
@property(nonatomic) _Bool sectionHeaderEnabled; // @synthesize sectionHeaderEnabled=_sectionHeaderEnabled;
@property(nonatomic) _Bool greenButtonEnabled; // @synthesize greenButtonEnabled=_greenButtonEnabled;
@property(nonatomic) _Bool headerEnabled; // @synthesize headerEnabled=_headerEnabled;
@property(nonatomic) _Bool fullExperienceNewUsersGreenButtonEnabled; // @synthesize fullExperienceNewUsersGreenButtonEnabled=_fullExperienceNewUsersGreenButtonEnabled;
@property(nonatomic) _Bool fullExperienceNewUsersEnabled; // @synthesize fullExperienceNewUsersEnabled=_fullExperienceNewUsersEnabled;
@property(nonatomic) _Bool fullExperienceExistingUsersGreenButtonEnabled; // @synthesize fullExperienceExistingUsersGreenButtonEnabled=_fullExperienceExistingUsersGreenButtonEnabled;
@property(nonatomic) _Bool fullExperienceExistingUsersEnabled; // @synthesize fullExperienceExistingUsersEnabled=_fullExperienceExistingUsersEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> trackCloudEnabledSignal; // @synthesize trackCloudEnabledSignal=_trackCloudEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> trackRowEnabledSignal; // @synthesize trackRowEnabledSignal=_trackRowEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> sectionHeaderEnabledSignal; // @synthesize sectionHeaderEnabledSignal=_sectionHeaderEnabledSignal;
@property(copy, nonatomic) NSDictionary *headerEnabledSignals; // @synthesize headerEnabledSignals=_headerEnabledSignals;
@property(copy, nonatomic) NSDictionary *visualRefreshExperienceNewUserSignals; // @synthesize visualRefreshExperienceNewUserSignals=_visualRefreshExperienceNewUserSignals;
@property(copy, nonatomic) NSDictionary *visualRefreshExperienceExistingUserSignals; // @synthesize visualRefreshExperienceExistingUserSignals=_visualRefreshExperienceExistingUserSignals;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
@property(readonly, nonatomic, getter=isVisualRefreshLeftAlignedTrackCloudEnabled) _Bool visualRefreshLeftAlignedTrackCloudEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshPlaylistTrackRowArtworkEnabled) _Bool visualRefreshPlaylistTrackRowArtworkEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshSectionHeaderEnabled) _Bool visualRefreshSectionHeaderEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshGreenButtonEnabled) _Bool visualRefreshGreenButtonEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshHeaderEnabled) _Bool visualRefreshHeaderEnabled;
- (void)configureGLUELegacyIntegration;
- (void)unload;
- (void)setUpFlags;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

