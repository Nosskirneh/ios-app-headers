//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SPTLoginDeferredDispatcher : NSObject
{
    NSMutableArray *_handlers;
}

@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasPendingHandlers;
@property(nonatomic) _Bool allowDispatch;
- (void)dispatchBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

