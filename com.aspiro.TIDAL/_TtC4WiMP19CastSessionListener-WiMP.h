//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4WiMP19CastSessionListener.h"

#import "GCKSessionManagerListener-Protocol.h"

@interface _TtC4WiMP19CastSessionListener (WiMP) <GCKSessionManagerListener>
- (void)sessionManager:(id)arg1 session:(id)arg2 didReceiveDeviceVolume:(float)arg3 muted:(_Bool)arg4;
- (void)sessionManager:(id)arg1 didSuspendCastSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didSuspendSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didEndSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didResumeCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didFailToStartCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didStartCastSession:(id)arg2;
@end
