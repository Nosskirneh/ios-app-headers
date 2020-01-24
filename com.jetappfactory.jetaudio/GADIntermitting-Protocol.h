//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADIntermission, UIViewController;

@protocol GADIntermitting <NSObject>
@property(readonly, nonatomic) GADIntermission *intermission;
- (void)relinquishScreenWithCompletion:(void (^)(void))arg1;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)presentFromViewController:(UIViewController *)arg1 completion:(void (^)(void))arg2;

@optional
- (void)didReturnToApplication;
@end

