//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, SPTKeyboardShortcutRegistration;

@protocol SPTKeyboardShortcutsService <SPTService>
- (SPTKeyboardShortcutRegistration *)registerKeyCommandWithInput:(NSString *)arg1 modifierFlags:(long long)arg2 action:(void (^)(void))arg3 discoverabilityTitle:(NSString *)arg4;
@end

