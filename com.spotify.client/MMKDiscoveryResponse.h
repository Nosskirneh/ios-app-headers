//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKMessage.h"

@class NSString;

@interface MMKDiscoveryResponse : MMKMessage
{
    NSString *_playerId;
    NSString *_customUrlScheme;
}

@property(readonly, copy, nonatomic) NSString *customUrlScheme; // @synthesize customUrlScheme=_customUrlScheme;
@property(readonly, copy, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPlayerId:(id)arg1 customUrlScheme:(id)arg2;

@end

