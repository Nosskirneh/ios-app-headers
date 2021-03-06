//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSNotificationCenter, NSOperationQueue, NSString;

@interface NotificationBuilder : NSObject <NSCopying>
{
    NSString *_notificationName;
    id _notificationObject;
    NSOperationQueue *_notificationQueue;
    NSDictionary *_notificationUserInfo;
    NSNotificationCenter *_notificationCenter;
}

+ (CDUnknownBlockType)create;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSDictionary *notificationUserInfo; // @synthesize notificationUserInfo=_notificationUserInfo;
@property(retain, nonatomic) NSOperationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) id notificationObject; // @synthesize notificationObject=_notificationObject;
@property(retain, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDUnknownBlockType)addUserInfo;
- (CDUnknownBlockType)userInfo;
- (CDUnknownBlockType)queue;
- (CDUnknownBlockType)object;
- (CDUnknownBlockType)center;
- (CDUnknownBlockType)name;
- (CDUnknownBlockType)build;

@end

