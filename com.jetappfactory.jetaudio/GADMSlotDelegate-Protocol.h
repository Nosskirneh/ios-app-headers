//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADAdType, GADMConfig, UIViewController;

@protocol GADMSlotDelegate <NSObject>
- (void)presentInterstitialFromRootViewController:(UIViewController *)arg1;
- (_Bool)changeAdTypeTo:(GADAdType *)arg1;
- (void)mediateForAdType:(GADAdType *)arg1 config:(GADMConfig *)arg2;
@end

