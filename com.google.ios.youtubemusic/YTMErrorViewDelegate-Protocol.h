//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTMErrorView;

@protocol YTMErrorViewDelegate <NSObject>
- (void)errorViewDidTapCancelButton:(YTMErrorView *)arg1;
- (void)errorViewDidTapOfflineButton:(YTMErrorView *)arg1;
- (void)errorViewDidTapRetryButton:(YTMErrorView *)arg1;
@end

