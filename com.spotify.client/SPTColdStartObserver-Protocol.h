//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTColdStartObserver <NSObject>
- (void)logFinishedLoadingCoreFeature:(NSString *)arg1 duration:(double)arg2;
- (void)logAppStartupWithStepName:(NSString *)arg1 categories:(NSString *)arg2 eventType:(long long)arg3 level:(long long)arg4;

@optional
- (void)logAppStartupWithStepName:(NSString *)arg1;
@end

