//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTNowPlayingContainerIdleMonitorDelegate <NSObject>
- (_Bool)shouldPreventObserverNotifications;
- (void)idlePeriodDidEnd:(_Bool)arg1;
- (void)idlePeriodDidBegin:(_Bool)arg1;

@optional
- (void)idleMonitorDidPauseMonitoring;
- (void)idleMonitorDidStartMonitoring;
@end

