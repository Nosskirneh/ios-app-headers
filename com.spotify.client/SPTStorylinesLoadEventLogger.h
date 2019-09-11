//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter, SPTPlayer;

@interface SPTStorylinesLoadEventLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTPlayer> _player;
}

@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logStorylinesLoadEventForEntityUri:(id)arg1 storylinesIdentifier:(id)arg2 assetIdentifier:(id)arg3 requestType:(long long)arg4 eventType:(long long)arg5 source:(long long)arg6 detail:(id)arg7;
- (void)logPlayerStateWithEvent:(id)arg1;
- (id)initWithLogCenter:(id)arg1 player:(id)arg2;

@end

