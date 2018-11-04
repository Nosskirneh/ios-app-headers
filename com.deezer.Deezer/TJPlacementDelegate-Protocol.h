//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, TJActionRequest, TJPlacement;

@protocol TJPlacementDelegate <NSObject>

@optional
- (void)placement:(TJPlacement *)arg1 didRequestReward:(TJActionRequest *)arg2 itemId:(NSString *)arg3 quantity:(int)arg4;
- (void)placement:(TJPlacement *)arg1 didRequestPurchase:(TJActionRequest *)arg2 productId:(NSString *)arg3;
- (void)contentDidDisappear:(TJPlacement *)arg1;
- (void)contentDidAppear:(TJPlacement *)arg1;
- (void)contentIsReady:(TJPlacement *)arg1;
- (void)requestDidFail:(TJPlacement *)arg1 error:(NSError *)arg2;
- (void)requestDidSucceed:(TJPlacement *)arg1;
@end

