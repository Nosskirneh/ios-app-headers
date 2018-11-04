//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAVPlayerSource.h"

@class AVPlayer, FBKVOController, NSString;

@interface SPTVideoPlayerSource : NSObject <SPTAVPlayerSource>
{
    AVPlayer *_player;
    FBKVOController *_kvoController;
}

@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)playerStatusChanged;
- (void)recreatePlayer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

