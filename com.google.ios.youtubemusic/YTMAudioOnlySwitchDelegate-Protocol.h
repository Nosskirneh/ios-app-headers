//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTMAudioOnlySwitch;

@protocol YTMAudioOnlySwitchDelegate <NSObject>
- (void)audioOnlySwitch:(YTMAudioOnlySwitch *)arg1 didEnableAudioOnly:(_Bool)arg2;

@optional
- (void)audioOnlySwitchDidTapWhenDisabled:(YTMAudioOnlySwitch *)arg1;
@end
