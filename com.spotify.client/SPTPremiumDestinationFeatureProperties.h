//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTPremiumDestinationFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _mercuryPremiumHubsPageBackendV3Ios;
    _Bool _mercuryPremiumHubsPageShowLegacyIos;
    _Bool _premiumHeaderVoiceoverAccessibleEnabled;
}

@property(readonly, nonatomic) _Bool premiumHeaderVoiceoverAccessibleEnabled; // @synthesize premiumHeaderVoiceoverAccessibleEnabled=_premiumHeaderVoiceoverAccessibleEnabled;
@property(readonly, nonatomic) _Bool mercuryPremiumHubsPageShowLegacyIos; // @synthesize mercuryPremiumHubsPageShowLegacyIos=_mercuryPremiumHubsPageShowLegacyIos;
@property(readonly, nonatomic) _Bool mercuryPremiumHubsPageBackendV3Ios; // @synthesize mercuryPremiumHubsPageBackendV3Ios=_mercuryPremiumHubsPageBackendV3Ios;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

