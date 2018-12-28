//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADOViewController, UIViewController;

@protocol GADOOverlayPresenting <NSObject>
@property(readonly, nonatomic, getter=isReadyToPresent) _Bool readyToPresent;
@property(nonatomic) __weak GADOViewController *presentedViewController;
- (void)setNeedsUpdateOrientation;
- (void)dismissWithCompletionHandler:(void (^)(void))arg1;
- (UIViewController *)presentationViewController;
- (void)presentFromViewController:(UIViewController *)arg1 completion:(void (^)(void))arg2;
@end

