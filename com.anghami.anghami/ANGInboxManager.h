//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANGInboxManager : NSObject
{
}

+ (void)clearPin;
+ (void)deleteAllInboxes;
+ (void)getInboxes;
+ (void)setAllInboxAsRead;
+ (id)getLastUnreadInboxDate;
+ (long long)numberOfUnreadInbox;

@end

