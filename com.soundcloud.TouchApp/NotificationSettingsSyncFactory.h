//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NotificationSettingsCallFactory;

@interface NotificationSettingsSyncFactory : NSObject
{
    NotificationSettingsCallFactory *_callFactory;
}

@property(readonly, nonatomic) NotificationSettingsCallFactory *callFactory; // @synthesize callFactory=_callFactory;
- (void).cxx_destruct;
- (id)syncForSettingNotificationSettings:(id)arg1;
- (id)syncForGettingNotificationSettings;
- (id)initWithCallFactory:(id)arg1;
- (id)init;

@end
