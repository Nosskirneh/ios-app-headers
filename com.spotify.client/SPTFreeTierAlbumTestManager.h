//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SPTFeatureFlagSignal;

@interface SPTFreeTierAlbumTestManager : NSObject
{
    id <SPTFeatureFlagSignal> _nftAlbumFeatureEnabledSignal;
}

@property(readonly, nonatomic) id <SPTFeatureFlagSignal> nftAlbumFeatureEnabledSignal; // @synthesize nftAlbumFeatureEnabledSignal=_nftAlbumFeatureEnabledSignal;
- (void).cxx_destruct;
- (id)provideNftAlbumFeatureEnabledSignal;
- (id)initWithFeatureFlagFactory:(id)arg1 swiftAlbumEnabledSignal:(id)arg2 legacyAlbumEnabledSignal:(id)arg3;

@end

