//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPRemoteCommand;

@interface GAWRemoteCommandProxy : NSObject
{
    MPRemoteCommand *_remoteCommand;
}

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)addTargetWithHandler:(CDUnknownBlockType)arg1;
- (void)removeTarget:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)gaw_handlesSelector:(SEL)arg1;
- (id)initWithRemoteCommand:(id)arg1;

@end

