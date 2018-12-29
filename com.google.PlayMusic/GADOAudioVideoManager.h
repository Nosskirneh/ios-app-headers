//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol GADAudioVideoManagerDelegate;

@interface GADOAudioVideoManager : NSObject
{
    NSMutableSet *_playingVideos;
    NSMutableSet *_soundVideos;
    NSMutableSet *_userInitiatedSoundVideos;
    long long _numLoadedPlayer;
    _Bool _audioSessionIsApplicationManaged;
    id <GADAudioVideoManagerDelegate> _delegate;
}

@property(nonatomic) _Bool audioSessionIsApplicationManaged; // @synthesize audioSessionIsApplicationManaged=_audioSessionIsApplicationManaged;
@property(nonatomic) __weak id <GADAudioVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAudioSessionAfterAllVideoStopPlayingSound;
- (void)playerDidStopPlayingSound:(id)arg1;
- (void)playerWillStartPlayingSound:(id)arg1 userInitiated:(_Bool)arg2;
- (void)playerDidPauseVideo:(id)arg1;
- (void)playerWillStartPlayingVideo:(id)arg1 userInitiated:(_Bool)arg2;
- (void)playerDidUnload:(id)arg1;
- (void)playerWillLoad:(id)arg1;
- (long long)numLoadedPlayer;
- (id)init;

@end
