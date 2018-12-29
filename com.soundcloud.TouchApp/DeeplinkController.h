//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DeeplinkResolver-Protocol.h"

@class NSArray, NSString;

@interface DeeplinkController : NSObject <DeeplinkResolver>
{
    _Bool _didSetup;
    NSArray *_resolvers;
    NSArray *_handlers;
}

@property(readonly, nonatomic) NSArray *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) NSArray *resolvers; // @synthesize resolvers=_resolvers;
@property(nonatomic) _Bool didSetup; // @synthesize didSetup=_didSetup;
- (void).cxx_destruct;
- (void)handleDeepLink:(id)arg1;
- (_Bool)resolveUniversalLink:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 origin:(long long)arg4 resolutionBlock:(CDUnknownBlockType)arg5;
- (_Bool)resolveLink:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 origin:(long long)arg4 resolutionBlock:(CDUnknownBlockType)arg5;
- (void)setup;
- (id)initWithResolvers:(id)arg1 handlers:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
