//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, NSString;

@protocol SPTAlertController <NSObject>
- (void)showAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonsAndHandlers:(NSArray *)arg3 cancelButtonIndex:(long long)arg4;
- (void)showAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 target:(NSObject *)arg3 acceptSelector:(SEL)arg4 cancelSelector:(SEL)arg5 acceptButtonText:(NSString *)arg6 cancelButtonText:(NSString *)arg7;
- (void)showAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonText:(NSString *)arg3 target:(NSObject *)arg4 action:(SEL)arg5 withCancelButton:(_Bool)arg6;
- (void)showAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonText:(NSString *)arg3;
- (void)showAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2;
@end

