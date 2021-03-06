//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "URLServicePresenter-Protocol.h"

@class NSArray, NSString, _TtC10SoundCloud20SoundCloudURLMatcher;

@interface URLServicePresenterSoundCloudGo : NSObject <URLServicePresenter>
{
    _TtC10SoundCloud20SoundCloudURLMatcher *_soundCloudURLMatcher;
    NSArray *_goPaths;
}

@property(readonly, copy, nonatomic) NSArray *goPaths; // @synthesize goPaths=_goPaths;
@property(readonly, nonatomic) _TtC10SoundCloud20SoundCloudURLMatcher *soundCloudURLMatcher; // @synthesize soundCloudURLMatcher=_soundCloudURLMatcher;
- (void).cxx_destruct;
- (id)launcherForURL:(id)arg1 isForeground:(_Bool)arg2;
- (_Bool)canPresentURL:(id)arg1;
- (_Bool)isAuthenticationRequired;
- (id)initWithSoundCloudURLMatcher:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

