//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FBAdNotificationCenter : NSObject
{
    NSMutableArray *_notifications;
    id _object;
}

+ (void)removeAllObserversForObject:(id)arg1;
+ (void)setNotificationCenter:(id)arg1 forObject:(id)arg2;
+ (id)notificationCenterForObject:(id)arg1 update:(_Bool)arg2;
+ (id)notificationCenterForObject:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak id object; // @synthesize object=_object;
@property(retain, nonatomic) NSMutableArray *notifications; // @synthesize notifications=_notifications;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAllObservers;
- (void)addNotificationWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)addNotificationWithName:(id)arg1 object:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addNotificationWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)notificationCenter;
- (id)init;

@end

