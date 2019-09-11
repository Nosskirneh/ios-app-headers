//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSData, NSString;

@interface SPTLogMessageVoiceAssistantAction2 : SPTLogMessage
{
    _Bool _isPlayingValue;
    _Bool _hasValidPlayerStateValue;
    NSString *_utteranceIdValue;
    NSString *_intentValue;
    NSString *_referrerValue;
    NSData *_playbackIdValue;
}

+ (id)messageWithUtteranceId:(id)arg1 intent:(id)arg2 referrer:(id)arg3 playbackId:(id)arg4 isPlaying:(_Bool)arg5 hasValidPlayerState:(_Bool)arg6;
@property(nonatomic) _Bool hasValidPlayerStateValue; // @synthesize hasValidPlayerStateValue=_hasValidPlayerStateValue;
@property(nonatomic) _Bool isPlayingValue; // @synthesize isPlayingValue=_isPlayingValue;
@property(copy, nonatomic) NSData *playbackIdValue; // @synthesize playbackIdValue=_playbackIdValue;
@property(copy, nonatomic) NSString *referrerValue; // @synthesize referrerValue=_referrerValue;
@property(copy, nonatomic) NSString *intentValue; // @synthesize intentValue=_intentValue;
@property(copy, nonatomic) NSString *utteranceIdValue; // @synthesize utteranceIdValue=_utteranceIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

