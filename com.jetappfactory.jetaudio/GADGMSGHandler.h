//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GADGMSGHandler : NSObject
{
    NSMutableArray *_bufferedNotifications;
}

+ (id)actionBlockDictionary;
- (void).cxx_destruct;
- (void)flushBuffer;
- (_Bool)shouldHandleNotificationSynchronously;
- (_Bool)shouldBufferNotification:(id)arg1 adView:(id)arg2;
- (_Bool)handleNotification:(id)arg1 adView:(id)arg2;
- (_Bool)handleRequest:(id)arg1 adView:(id)arg2;
- (id)init;

@end

