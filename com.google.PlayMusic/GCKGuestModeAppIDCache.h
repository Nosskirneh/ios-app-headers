//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GCKGuestModeAppIDCache : NSObject
{
    NSMutableDictionary *_appIDCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)isPublishedAppID:(id)arg1 appIDPublishedHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
