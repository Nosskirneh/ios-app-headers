//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKMessage.h"

@class MMKPlayerEventMedia, NSString;

@interface MMKPlayerEvent : MMKMessage
{
    unsigned int _position;
    unsigned long long _eventName;
    NSString *_playerId;
    unsigned long long _playerState;
    unsigned long long _supportedOperations;
    unsigned long long _shuffle;
    unsigned long long _repeat;
    unsigned long long _favorite;
    MMKPlayerEventMedia *_media;
}

@property(readonly, nonatomic) MMKPlayerEventMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) unsigned long long favorite; // @synthesize favorite=_favorite;
@property(readonly, nonatomic) unsigned long long repeat; // @synthesize repeat=_repeat;
@property(readonly, nonatomic) unsigned long long shuffle; // @synthesize shuffle=_shuffle;
@property(readonly, nonatomic) unsigned int position; // @synthesize position=_position;
@property(readonly, nonatomic) unsigned long long supportedOperations; // @synthesize supportedOperations=_supportedOperations;
@property(readonly, nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(readonly, nonatomic) unsigned long long eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEventName:(unsigned long long)arg1 playerId:(id)arg2 playerState:(unsigned long long)arg3 supportedOperations:(unsigned long long)arg4 position:(unsigned int)arg5 shuffle:(unsigned long long)arg6 repeat:(unsigned long long)arg7 favorite:(unsigned long long)arg8 media:(id)arg9;

@end

