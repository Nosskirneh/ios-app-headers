//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANGFollowRequest, ANGFollowRequestTableViewCell;

@protocol ANGFollowRequestTableViewCellDelegate <NSObject>

@optional
- (void)followRequestTableViewCell:(ANGFollowRequestTableViewCell *)arg1 didTapDeclineForRequest:(ANGFollowRequest *)arg2;
- (void)followRequestTableViewCell:(ANGFollowRequestTableViewCell *)arg1 didTapAcceptForRequest:(ANGFollowRequest *)arg2;
@end

