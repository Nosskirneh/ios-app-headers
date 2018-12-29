//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP12SCCollection22AutoPlayEnabledStoring_-Protocol.h"
#import "_TtP8Playback24AutoplaySettingsFetching_-Protocol.h"

@class NSString, NSUserDefaults;

@interface UserSettings : NSObject <_TtP12SCCollection22AutoPlayEnabledStoring_, _TtP8Playback24AutoplaySettingsFetching_>
{
    NSUserDefaults *_userDefaults;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)loadDefaultValues:(id)arg1;
- (id)settingsRootDictionary;
- (id)settingsDefaults;
- (id)appDefaults;
- (void)registerDefaults;
- (void)setCustomLoggingLevel:(id)arg1;
- (id)customLoggingLevel;
@property(retain, nonatomic) NSString *troubleshootingId;
- (void)setDebugMenuEnabled:(_Bool)arg1;
- (_Bool)debugMenuEnabled;
- (void)setCleanImageCache:(_Bool)arg1;
- (_Bool)cleanImageCache;
- (void)setCleanDatabase:(_Bool)arg1;
- (_Bool)cleanDatabase;
- (void)setForceLogout:(_Bool)arg1;
- (_Bool)forceLogout;
- (void)setAutoplayRelatedTracks:(_Bool)arg1;
@property(readonly, nonatomic) _Bool autoplayRelatedTracks;
- (id)initWithUserDefaults:(id)arg1;

@end
