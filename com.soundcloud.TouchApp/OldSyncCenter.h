//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RACDisposable, SyncNotificationFactory, SyncQueue;

@interface OldSyncCenter : NSObject
{
    SyncNotificationFactory *_syncNotificationFactory;
    SyncQueue *_queue;
    RACDisposable *_disposable;
}

+ (id)sharedInstance;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(readonly, nonatomic) SyncQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) SyncNotificationFactory *syncNotificationFactory; // @synthesize syncNotificationFactory=_syncNotificationFactory;
- (void).cxx_destruct;
- (void)handleSyncEvent:(id)arg1;
- (id)registerForSyncNotifications;
- (void)handle;
- (id)initWithSyncNotificationFactory:(id)arg1 queue:(id)arg2;

@end

