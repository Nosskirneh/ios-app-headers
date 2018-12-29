//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "URLServicePresenter-Protocol.h"

@class NSString, UserFeaturesService, _TtC10SoundCloud20SoundCloudURLMatcher;

@interface URLServicePresenterOfflineSettings : NSObject <URLServicePresenter>
{
    UserFeaturesService *_userFeaturesService;
    _TtC10SoundCloud20SoundCloudURLMatcher *_soundCloudURLMatcher;
}

@property(readonly, nonatomic) _TtC10SoundCloud20SoundCloudURLMatcher *soundCloudURLMatcher; // @synthesize soundCloudURLMatcher=_soundCloudURLMatcher;
@property(readonly, nonatomic) UserFeaturesService *userFeaturesService; // @synthesize userFeaturesService=_userFeaturesService;
- (void).cxx_destruct;
- (id)launcherForURL:(id)arg1 isForeground:(_Bool)arg2;
- (_Bool)canPresentURL:(id)arg1;
- (_Bool)isAuthenticationRequired;
- (id)initWithUserFeatureService:(id)arg1 soundCloudURLMatcher:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
