//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface FBSDKAccessTokenExpirer : NSObject
{
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)_timerDidFire;
- (void)_checkAccessTokenExpirationDate;
- (void)dealloc;
- (id)init;

@end

