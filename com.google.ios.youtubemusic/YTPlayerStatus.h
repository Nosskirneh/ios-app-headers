//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTPlayerStatus : NSObject
{
    _Bool _externalPlayback;
    _Bool _backgroundPlayback;
    _Bool _inlinePlaybackActive;
    _Bool _cardboardModeActive;
    _Bool _userAudioOnlyModeActive;
    _Bool _blackoutActive;
    int _layout;
}

@property(readonly, nonatomic) int layout; // @synthesize layout=_layout;
@property(readonly, nonatomic, getter=isBlackoutActive) _Bool blackoutActive; // @synthesize blackoutActive=_blackoutActive;
@property(readonly, nonatomic, getter=isUserAudioOnlyModeActive) _Bool userAudioOnlyModeActive; // @synthesize userAudioOnlyModeActive=_userAudioOnlyModeActive;
@property(readonly, nonatomic, getter=isCardboardModeActive) _Bool cardboardModeActive; // @synthesize cardboardModeActive=_cardboardModeActive;
@property(readonly, nonatomic, getter=isInlinePlaybackActive) _Bool inlinePlaybackActive; // @synthesize inlinePlaybackActive=_inlinePlaybackActive;
@property(readonly, nonatomic) _Bool backgroundPlayback; // @synthesize backgroundPlayback=_backgroundPlayback;
@property(readonly, nonatomic) _Bool externalPlayback; // @synthesize externalPlayback=_externalPlayback;
@property(readonly, nonatomic) int visibility;
- (unsigned long long)hash;
- (_Bool)isEqualToPlayerStatus:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithExternalPlayback:(_Bool)arg1 backgroundPlayback:(_Bool)arg2 inlinePlaybackActive:(_Bool)arg3 cardboardModeActive:(_Bool)arg4 layout:(int)arg5 userAudioOnlyModeActive:(_Bool)arg6 blackoutActive:(_Bool)arg7;

@end

