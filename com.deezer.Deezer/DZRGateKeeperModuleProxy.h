//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class DZRGateKeeperModule, NSMutableDictionary;

@interface DZRGateKeeperModuleProxy : NSProxy
{
    Class _moduleClass;
    id _moduleDelegate;
    NSMutableDictionary *_stubs;
    _Bool _activated;
    DZRGateKeeperModule *_module;
}

@property(retain, nonatomic) DZRGateKeeperModule *module; // @synthesize module=_module;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
- (void).cxx_destruct;
- (void)forwardSelector:(SEL)arg1 returningDefaultInteger:(long long)arg2;
- (void)forwardSelector:(SEL)arg1 returningDefaultDouble:(double)arg2;
- (void)forwardSelector:(SEL)arg1 returningDefaultFloat:(float)arg2;
- (void)forwardSelector:(SEL)arg1 returningDefaultBOOL:(_Bool)arg2;
- (void)forwardSelector:(SEL)arg1 returningDefaultObject:(id)arg2;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithClass:(Class)arg1;

@end

