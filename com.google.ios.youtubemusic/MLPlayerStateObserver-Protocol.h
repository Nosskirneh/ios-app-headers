//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLPlayerStateChangeEvent;
@protocol MLPlayer;

@protocol MLPlayerStateObserver <NSObject>
- (void)player:(id <MLPlayer>)arg1 didChangeStateWithEvent:(MLPlayerStateChangeEvent *)arg2;
@end

