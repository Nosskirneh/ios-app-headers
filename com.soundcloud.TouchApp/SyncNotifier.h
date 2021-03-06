//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SyncNotificationFactory;

@interface SyncNotifier : NSObject
{
    SyncNotificationFactory *_notificationsFactory;
}

@property(readonly, nonatomic) SyncNotificationFactory *notificationsFactory; // @synthesize notificationsFactory=_notificationsFactory;
- (void).cxx_destruct;
- (_Bool)event:(id)arg1 equalTo:(id)arg2;
- (id)callbackSignalForEvent:(id)arg1;
- (id)callbackEventSignalForEvent:(id)arg1;
- (id)signalForEvent:(id)arg1;
- (id)syncEventForData:(id)arg1 action:(unsigned long long)arg2;
- (id)syncWithData:(id)arg1 forAction:(unsigned long long)arg2;
- (id)initWithNotificationsFactory:(id)arg1;
- (id)init;

@end

