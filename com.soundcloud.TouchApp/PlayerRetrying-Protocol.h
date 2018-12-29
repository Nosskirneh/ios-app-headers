//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol Player, PlayerRetrierDelegate;

@protocol PlayerRetrying
@property(nonatomic) __weak id <PlayerRetrierDelegate> delegate;
- (void)handleResumingPlaybackForPlayer:(id <Player>)arg1 isPlayingAd:(_Bool)arg2;
- (unsigned long long)updatedPlayerStateWithState:(unsigned long long)arg1;
@end
