//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol PlaylistEngagementViewing;

@protocol PlaylistEngagementViewDelegate <NSObject>
- (void)engagementViewDidTapMoreButton:(id <PlaylistEngagementViewing>)arg1;
- (void)engagementViewDidEnableOffline:(_Bool)arg1 fromView:(id <PlaylistEngagementViewing>)arg2;
- (void)engagementViewDidTapLikeButton:(id <PlaylistEngagementViewing>)arg1;
@end
