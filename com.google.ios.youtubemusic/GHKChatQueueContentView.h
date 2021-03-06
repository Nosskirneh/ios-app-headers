//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class GHKChatQueueContentViewLandscapeLayout, GHKChatQueueContentViewLayout, GHKChatQueueContentViewObject, UIImageView, UILabel;

@interface GHKChatQueueContentView : GOOBaseContentView
{
    GHKChatQueueContentViewObject *_object;
    UIImageView *_backgroundIcon;
    UILabel *_queuePositionInfo;
    UILabel *_queueNotificationInfo;
    UILabel *_backToAppInfo;
    GHKChatQueueContentViewLayout *_portraitLayout;
    GHKChatQueueContentViewLandscapeLayout *_landscapeLayout;
}

+ (id)backToAppInfoText;
+ (id)notificationInfoTextDependingOnAPNSRegistration;
+ (id)notificationInfoText;
+ (id)positionInfoText:(long long)arg1;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)infoStringForPosition:(long long)arg1;
- (void).cxx_destruct;
- (void)didTapBackToApp;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

