//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivityRequestHandler-Protocol.h"

@class NSString, SPTWatchConnectivityDataLoader;

@interface SPTWatchPlatformPingRequestHandler : NSObject <SPTWatchConnectivityRequestHandler>
{
    SPTWatchConnectivityDataLoader *_dataLoader;
}

@property(readonly, nonatomic) SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

