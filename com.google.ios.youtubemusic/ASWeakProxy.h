//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@interface ASWeakProxy : NSProxy
{
    id _target;
}

+ (id)weakProxyWithTarget:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)description;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1;

@end

