//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTWatchConnectivityManager;

@interface SPTWatchConnectivityRequestTaskFactory : NSObject
{
    SPTWatchConnectivityManager *_connectivityManager;
}

@property(readonly, nonatomic) SPTWatchConnectivityManager *connectivityManager; // @synthesize connectivityManager=_connectivityManager;
- (void).cxx_destruct;
- (id)createTaskWithRequest:(id)arg1 responseHandler:(id)arg2;
- (id)initWithConnectivityManager:(id)arg1;

@end

