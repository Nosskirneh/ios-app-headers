//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRGateKeeperModule.h"

@interface DZRQueueListMessagesGateKeeperModule : DZRGateKeeperModule
{
}

+ (id)deactivatedModule;
+ (id)name;
- (void)sendPlaybackStateToLive;
- (void)fetchPlaybackState;
- (void)sendRepeatModeToLive:(long long)arg1;
- (void)sendCurrentIndexToLive:(unsigned long long)arg1;
- (id)cloudBasedQueueListUI;
- (id)livePlaybackService;
- (void)subscribeUnsubscribeToMessenger:(id)arg1;
- (id)init;
- (id)initWithMessenger:(id)arg1;
- (_Bool)isDZRQueueListMessagesEnabled;

@end

