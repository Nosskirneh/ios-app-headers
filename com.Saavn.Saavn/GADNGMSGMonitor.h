//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNObserverCollection;

@interface GADNGMSGMonitor : NSObject
{
    GADNObserverCollection *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleGMSGNotification:(id)arg1;
- (id)init;

@end

