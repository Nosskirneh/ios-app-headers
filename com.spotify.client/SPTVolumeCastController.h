//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKSessionManagerListener-Protocol.h"
#import "SPTVolumeRemoteController-Protocol.h"

@class GCKCastContext, NSNumber, NSString;
@protocol SPTGaiaConnectAPI, SPTVolumeRemoteDelegate;

@interface SPTVolumeCastController : NSObject <GCKSessionManagerListener, SPTVolumeRemoteController>
{
    id <SPTVolumeRemoteDelegate> delegate;
    GCKCastContext *_castContext;
    id <SPTGaiaConnectAPI> _connectManager;
}

@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) GCKCastContext *castContext; // @synthesize castContext=_castContext;
@property(nonatomic) __weak id <SPTVolumeRemoteDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)sessionManager:(id)arg1 castSession:(id)arg2 didReceiveDeviceVolume:(float)arg3 muted:(_Bool)arg4;
- (void)sendVolumeUpdate:(double)arg1;
@property(readonly, nonatomic) NSNumber *lastKnownVolumeForActiveDevice;
@property(readonly, nonatomic) double volumeStep;
@property(readonly, nonatomic) _Bool activeDeviceSupportsVolume;
@property(readonly, nonatomic) _Bool isActive;
- (void)startObservingRemoteVolume;
- (id)initWithCastContext:(id)arg1 connectManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

