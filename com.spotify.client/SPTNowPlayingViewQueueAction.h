//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@protocol SPTNowPlayingManager;

@interface SPTNowPlayingViewQueueAction : SPAction
{
    id <SPTNowPlayingManager> _nowPlayingManager;
}

@property(readonly, nonatomic) __weak id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithNowPlayingManager:(id)arg1 logContext:(id)arg2;

@end

