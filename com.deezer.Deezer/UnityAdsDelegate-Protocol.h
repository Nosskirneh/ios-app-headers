//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol UnityAdsDelegate <NSObject>
- (void)unityAdsDidFinish:(NSString *)arg1 withFinishState:(long long)arg2;
- (void)unityAdsDidStart:(NSString *)arg1;
- (void)unityAdsDidError:(long long)arg1 withMessage:(NSString *)arg2;
- (void)unityAdsReady:(NSString *)arg1;
@end

