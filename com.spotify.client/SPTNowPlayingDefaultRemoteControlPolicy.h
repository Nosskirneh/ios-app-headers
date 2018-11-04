//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseRemoteControlPolicy.h"

@interface SPTNowPlayingDefaultRemoteControlPolicy : SPTNowPlayingBaseRemoteControlPolicy
{
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)shuffleButtonPressedWithShuffleType:(long long)arg1;
- (_Bool)shouldShuffleCommandBeEnabled;
- (_Bool)shouldShuffleCommandBeAvailable;
- (void)repeatButtonPressedWithRepeatType:(long long)arg1;
- (_Bool)shouldRepeatCommandBeEnabled;
- (_Bool)shouldRepeatCommandBeAvailable;
- (_Bool)shouldChangePlaybackPositionCommandBeEnabled;
- (_Bool)shouldChangePlaybackPositionCommandBeAvailable;
- (_Bool)shouldSeekBackwardCommandBeEnabled;
- (_Bool)shouldSeekBackwardCommandBeAvailable;
- (_Bool)shouldSeekForwardCommandBeEnabled;
- (_Bool)shouldSeekForwardCommandBeAvailable;
- (_Bool)shouldPreviousTrackCommandBeEnabled;
- (_Bool)shouldPreviousTrackCommandBeAvailable;
- (_Bool)shouldNextTrackCommandBeEnabled;
- (_Bool)shouldNextTrackCommandBeAvailable;
- (id)initWithPlayer:(id)arg1;

@end
