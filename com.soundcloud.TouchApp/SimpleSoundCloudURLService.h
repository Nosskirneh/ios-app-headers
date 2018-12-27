//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "URLServicePresenter-Protocol.h"

@class NSArray, NSString, _TtC10SoundCloud20SoundCloudURLMatcher;

@interface SimpleSoundCloudURLService : NSObject <URLServicePresenter>
{
    _Bool _isAuthenticationRequired;
    NSArray *_paths;
    Class _launcherClass;
    _TtC10SoundCloud20SoundCloudURLMatcher *_soundCloudURLMatcher;
}

@property(readonly, nonatomic) _TtC10SoundCloud20SoundCloudURLMatcher *soundCloudURLMatcher; // @synthesize soundCloudURLMatcher=_soundCloudURLMatcher;
@property(readonly, nonatomic) _Bool isAuthenticationRequired; // @synthesize isAuthenticationRequired=_isAuthenticationRequired;
@property(readonly, nonatomic) Class launcherClass; // @synthesize launcherClass=_launcherClass;
@property(readonly, nonatomic) NSArray *paths; // @synthesize paths=_paths;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)launcherForURL:(id)arg1 isForeground:(_Bool)arg2;
- (_Bool)canPresentURL:(id)arg1;
- (id)initWithPaths:(id)arg1 launcherClass:(Class)arg2 isAuthenticationRequired:(_Bool)arg3 soundCloudURLMatcher:(id)arg4;
- (id)initWithPaths:(id)arg1 launcherClass:(Class)arg2 isAuthenticationRequired:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

