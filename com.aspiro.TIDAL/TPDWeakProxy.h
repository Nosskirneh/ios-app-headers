//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@interface TPDWeakProxy : NSProxy
{
    id _theObject;
}

@property(nonatomic) __weak id theObject; // @synthesize theObject=_theObject;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1;

@end

