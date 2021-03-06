//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GCKDevice, GCKRemoteMediaClient;
@protocol _TtP6Deezer25GoogleCastSessionListener_;

@protocol _TtP6Deezer25GoogleCastSessionProtocol_
- (void)disconnectCastSession;
- (void)disconnectFromDevice;
- (void)updateWithVolume:(float)arg1;
- (void)startWithDevice:(GCKDevice *)arg1;
- (void)addListener:(id <_TtP6Deezer25GoogleCastSessionListener_>)arg1;
- (float)sessionVolume;
- (long long)sessionState;
- (GCKRemoteMediaClient *)activeMediaClient;
- (_Bool)isActive;
- (_Bool)isReachable;
@end

