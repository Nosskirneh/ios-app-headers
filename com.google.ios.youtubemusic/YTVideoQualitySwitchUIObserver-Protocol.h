//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTVideoQualitySwitchController;

@protocol YTVideoQualitySwitchUIObserver <NSObject>
- (void)videoQualitySwitchController:(YTVideoQualitySwitchController *)arg1 didFailWithErrorMessage:(NSString *)arg2;
- (void)videoQualitySwitchControllerStatusDidChange:(YTVideoQualitySwitchController *)arg1;
@end

