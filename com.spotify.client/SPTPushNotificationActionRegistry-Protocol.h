//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTPushNotificationAction;

@protocol SPTPushNotificationActionRegistry <NSObject>
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)registerAction:(id <SPTPushNotificationAction>)arg1 forIdentifier:(NSString *)arg2;
@end

