//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTViewOfflineSwitch;

@protocol SPTViewOfflineSwitchDelegate <NSObject>
- (unsigned long long)offlineSwitchViewOfflineAvailability:(SPTViewOfflineSwitch *)arg1;
- (void)offlineSwitchViewDidChangeState:(SPTViewOfflineSwitch *)arg1 isOn:(_Bool)arg2;
@end

