//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TWTRStore : NSObject
{
    NSMutableDictionary *_subscriptions;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (id)subscriptionsForClassName:(id)arg1;
- (id)subscriptionsForClassName:(id)arg1 objectID:(id)arg2;
- (void)unsafeUnsubscribeSubscriber:(id)arg1 className:(id)arg2 objectID:(id)arg3;
- (void)unsafeAddSubscriber:(id)arg1 className:(id)arg2 key:(id)arg3;
- (void)notifySubscribersOfChangesToObject:(id)arg1 withID:(id)arg2;
- (void)unsubscribeSubscriber:(id)arg1 fromClass:(Class)arg2 objectID:(id)arg3;
- (void)subscribeSubscriber:(id)arg1 toClass:(Class)arg2 objectID:(id)arg3;
- (id)init;

@end
