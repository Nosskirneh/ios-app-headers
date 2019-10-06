//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMKVOController-Protocol.h"

@class FBKVOController, NSString;

@interface SPTKVOControllerImpl : NSObject <BMKVOController>
{
    FBKVOController *_kvoController;
}

@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
- (void).cxx_destruct;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)unobserveAll;
- (void)unobserve:(id)arg1 keyPath:(id)arg2;
- (void)unobserve:(id)arg1;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

