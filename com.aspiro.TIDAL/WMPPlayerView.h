//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer;

@interface WMPPlayerView : UIView
{
    AVPlayer *_player;
}

+ (Class)layerClass;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)setVideoFillMode:(id)arg1;
- (void)setCurrentPlayer:(id)arg1;
- (id)playerLayer;

@end

