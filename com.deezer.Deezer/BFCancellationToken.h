//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BFCancellationToken : NSObject
{
    _Bool _cancellationRequested;
    _Bool _disposed;
    NSMutableArray *_registrations;
    NSObject *_lock;
}

@property(nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
- (void).cxx_destruct;
- (void)throwIfDisposed;
- (void)dispose;
- (void)cancelAfterDelay:(int)arg1;
- (void)cancelPrivate;
- (void)unregisterRegistration:(id)arg1;
- (id)registerCancellationObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)notifyCancellation:(id)arg1;
- (void)cancel;
@property(readonly, nonatomic, getter=isCancellationRequested) _Bool cancellationRequested; // @synthesize cancellationRequested=_cancellationRequested;
- (id)init;

@end

