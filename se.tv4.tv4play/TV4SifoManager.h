//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TV4SifoManager : NSObject
{
}

+ (_Bool)handleRequest:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (_Bool)isTNSSifoRequest:(id)arg1;
- (void)trackPlayableAssetStarted:(id)arg1 contentID:(id)arg2;
- (void)trackPageview:(id)arg1;
- (void)setupSifo;

@end
