//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTSlideForActionsView;

@protocol YTSlideForActionsViewDelegate <NSObject>
- (void)slideForActionsViewDidFinishExitConfirmationModeAnimation;
- (void)slideForActionsViewDidFinishEnterConfirmationModeAnimation;
- (void)slideForActionsViewDidExitConfirmationMode:(YTSlideForActionsView *)arg1;
- (void)slideForActionsViewDidEnterConfirmationMode:(YTSlideForActionsView *)arg1;

@optional
- (void)slideForActionsViewWillEnterConfirmationMode:(YTSlideForActionsView *)arg1;
@end

