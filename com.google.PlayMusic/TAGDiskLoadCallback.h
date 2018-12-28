//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAGLoadCallback-Protocol.h"

@class NSString, TAGContainer;
@protocol TAGContainerCallback;

__attribute__((visibility("hidden")))
@interface TAGDiskLoadCallback : NSObject <TAGLoadCallback>
{
    id <TAGContainerCallback> _callback;
    TAGContainer *_container;
}

@property(retain) TAGContainer *container; // @synthesize container=_container;
@property(retain) id <TAGContainerCallback> callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)close;
- (int)failureToRefreshFailure:(long long)arg1;
- (void)onFailure:(long long)arg1;
- (void)onSuccess:(id)arg1;
- (void)startLoad;
- (id)initWithCallback:(id)arg1 container:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

