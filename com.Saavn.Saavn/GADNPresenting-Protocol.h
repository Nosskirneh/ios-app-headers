//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADNEventContextSource-Protocol.h"

@class UIViewController;

@protocol GADNPresenting <GADNEventContextSource>
- (void)relinquishScreenWithCompletion:(void (^)(void))arg1;
- (void)presentFromViewController:(UIViewController *)arg1 completion:(void (^)(void))arg2;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (_Bool)canPresent;
@end

