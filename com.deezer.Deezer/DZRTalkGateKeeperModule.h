//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRGateKeeperModule.h"

@interface DZRTalkGateKeeperModule : DZRGateKeeperModule
{
    _Bool _talkEnabled;
}

+ (void)showEpisodeNotAvailableAlert;
+ (void)showTalkNotEnabledAlert;
+ (id)name;
@property(nonatomic, getter=isTalkEnabled) _Bool talkEnabled; // @synthesize talkEnabled=_talkEnabled;
- (void)notifyOfStatusChange;
- (void)moduleUnload;
- (void)moduleLoad;
- (id)init;

@end

