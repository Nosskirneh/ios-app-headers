//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncingService-Protocol.h"

@class NSString, NotificationSettingsSyncFactory, SyncCenter;

@interface NotificationSettingsService : NSObject <SyncingService>
{
    SyncCenter *_syncCenter;
    NotificationSettingsSyncFactory *_syncFactory;
}

@property(readonly, nonatomic) NotificationSettingsSyncFactory *syncFactory; // @synthesize syncFactory=_syncFactory;
@property(readonly, nonatomic) SyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
- (void).cxx_destruct;
- (id)syncNotificationsSettings;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)sync;
- (id)initWithSyncCenter:(id)arg1 syncFactory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
