//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTHomeMixEvent.h"

@class SPTPlayerState;

@interface SPTHomeMixEventPlaybackStateChanged : SPTHomeMixEvent
{
    SPTPlayerState *_prevState;
    SPTPlayerState *_nextState;
}

@property(readonly, nonatomic) SPTPlayerState *nextState; // @synthesize nextState=_nextState;
@property(readonly, nonatomic) SPTPlayerState *prevState; // @synthesize prevState=_prevState;
- (void).cxx_destruct;
- (id)initWithPrevState:(id)arg1 nextState:(id)arg2;

@end

