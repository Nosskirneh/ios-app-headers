//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTFreeTierPlaylistFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _playlistAssistedCurationPremiumEnabled;
}

@property(readonly, nonatomic) _Bool playlistAssistedCurationPremiumEnabled; // @synthesize playlistAssistedCurationPremiumEnabled=_playlistAssistedCurationPremiumEnabled;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

