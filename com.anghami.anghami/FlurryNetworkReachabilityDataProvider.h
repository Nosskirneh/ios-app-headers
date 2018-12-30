//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlurryActor.h"

@class FlurryReachability, NSError;

@interface FlurryNetworkReachabilityDataProvider : FlurryActor
{
    _Bool _connectedToNetwork;
    _Bool _reachabilitySetup;
    int _internalNetworkStatus;
    NSError *_lastNetworkOperationError;
    FlurryReachability *_reachability;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FlurryReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) int internalNetworkStatus; // @synthesize internalNetworkStatus=_internalNetworkStatus;
@property(nonatomic) _Bool reachabilitySetup; // @synthesize reachabilitySetup=_reachabilitySetup;
@property(nonatomic) _Bool connectedToNetwork; // @synthesize connectedToNetwork=_connectedToNetwork;
@property(retain, nonatomic) NSError *lastNetworkOperationError; // @synthesize lastNetworkOperationError=_lastNetworkOperationError;
- (void).cxx_destruct;
- (void)updateNetworkStatus:(id)arg1;
- (void)startup;
- (int)networkStatus;
- (_Bool)isNetworkReachable;
- (_Bool)isNetworkLikelyNotReachable;
- (void)setNetworkLikelyNotReachable;
- (id)init;

@end

