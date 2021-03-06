//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMDataLoader-Protocol.h"

@class GIMMe, NSString, YTReachabilityController;
@protocol HAMDataLoader, HAMNetworkStatsProvider, OS_dispatch_queue;

@interface MLPlaybackDataLoader : NSObject <HAMDataLoader>
{
    id <HAMDataLoader> _dataLoader;
    id <HAMNetworkStatsProvider> _networkStatsProvider;
    YTReachabilityController *_reachability;
    long long _requestNumber;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)invalidate;
- (id)taskWithRequest:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
- (id)initWithDataLoader:(id)arg1 networkStatsProvider:(id)arg2 firstRequestNumber:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

