//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlayerTransition.h"

@protocol PlayerHideTransitionDelegate;

@interface PlayerHideTransition : PlayerTransition
{
    id <PlayerHideTransitionDelegate> _delegate;
}

@property(nonatomic) __weak id <PlayerHideTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationEnded:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 waveformView:(id)arg2;

@end

