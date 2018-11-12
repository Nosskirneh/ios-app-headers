//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SPTArtistSettingsManager, SPTArtistTestManager;

@interface SPTArtistEndpointFactory : NSObject
{
    SPTArtistSettingsManager *_settingsManager;
    SPTArtistTestManager *_testManager;
}

@property(retain, nonatomic) SPTArtistTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTArtistSettingsManager *settingsManager; // @synthesize settingsManager=_settingsManager;
- (void).cxx_destruct;
- (id)queryParameters;
- (id)hubsContentURLForArtistURL:(id)arg1;
- (id)entitySubviewsEndpointPathForArtistURL:(id)arg1 type:(long long)arg2;
- (id)entityEndpointPathForArtistURL:(id)arg1;
- (id)versionForSubviews;
- (id)versionForMainView;
- (id)serviceName;
- (id)initWithSettingsManager:(id)arg1 testManager:(id)arg2;

@end

