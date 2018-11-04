//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTConnectivityManager.h"

@class NSString;

@interface SPTConnectivityManager : NSObject <SPTConnectivityManager>
{
    struct ConnectivityManager *_connectivityManager;
    id <SPTAsyncScheduler> _scheduler;
}

@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
@property _Bool keepAliveAPNetwork;
- (void)setKeepAliveAPNetwork:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setAllowNetwork:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property _Bool allowNetwork;
- (void)setAllowSyncOver3G:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property _Bool allowSyncOver3G;
- (void)setConnectionType:(long long)arg1 callback:(CDUnknownBlockType)arg2;
@property long long connectionType;
- (void)invalidate;
- (id)initWithCoreConnectivityManager:(struct ConnectivityManager *)arg1 scheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

