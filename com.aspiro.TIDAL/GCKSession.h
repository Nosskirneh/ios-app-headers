//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GCKDevice, GCKMediaMetadata, GCKSessionTraits, NSString;
@protocol GCKSessionDelegate;

@interface GCKSession : NSObject
{
    _Bool _suspended;
    _Bool _currentDeviceMuted;
    float _currentDeviceVolume;
    GCKDevice *_device;
    NSString *_sessionID;
    long long _connectionState;
    NSString *_deviceStatusText;
    GCKSessionTraits *_traits;
    GCKMediaMetadata *_mediaMetadata;
    id <GCKSessionDelegate> _internalDelegate;
}

@property(nonatomic) __weak id <GCKSessionDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(readonly, nonatomic) GCKMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(nonatomic) _Bool currentDeviceMuted; // @synthesize currentDeviceMuted=_currentDeviceMuted;
@property(nonatomic) float currentDeviceVolume; // @synthesize currentDeviceVolume=_currentDeviceVolume;
@property(readonly, copy, nonatomic) GCKSessionTraits *traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSString *deviceStatusText; // @synthesize deviceStatusText=_deviceStatusText;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) GCKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)setDeviceMuted:(_Bool)arg1;
- (void)setDeviceVolume:(float)arg1;
- (void)internalResume;
- (void)internalSuspendWithReason:(long long)arg1;
- (void)internalEndAndStopCasting:(_Bool)arg1;
- (void)internalStart;
- (id)initWithDevice:(id)arg1 traits:(id)arg2 sessionID:(id)arg3;
- (id)description;
- (void)notifyDidReceiveDeviceStatus:(id)arg1;
- (void)notifyDidReceiveDeviceVolume:(float)arg1 muted:(_Bool)arg2;
- (void)notifyDidEndWithError:(id)arg1;
- (void)notifyDidResume;
- (void)notifyDidSuspendWithReason:(long long)arg1;
- (void)notifyDidFailToStartWithError:(id)arg1;
- (void)notifyDidStartWithSessionID:(id)arg1;
- (void)resume;
- (void)suspendWithReason:(long long)arg1;
- (void)endAndStopCasting:(_Bool)arg1;
- (void)start;

@end
