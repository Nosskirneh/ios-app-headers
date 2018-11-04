//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBContentOperation.h"
#import "SPTNetworkConnectivityControllerObserver.h"

@class NSString, SPTNetworkConnectivityController;

@interface SPTPremiumDestinationCachedUIOfflineDetectionContentOperation : NSObject <SPTNetworkConnectivityControllerObserver, EXP_HUBContentOperation>
{
    _Bool _observing;
    id <EXP_HUBContentOperationDelegate> _delegate;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithNetworkConnectivityController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

