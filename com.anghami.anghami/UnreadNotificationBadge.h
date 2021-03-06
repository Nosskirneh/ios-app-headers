//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BadgeStyle, NSString, UIFont;

@interface UnreadNotificationBadge : UIView
{
    NSString *badgeText;
    double badgeCornerRoundness;
    double badgeScaleFactor;
    BadgeStyle *badgeStyle;
    _Bool _isInboxBadge;
    UIFont *_badgeFont;
}

+ (void)updateNotificationForBadge:(id)arg1 delay:(double)arg2;
+ (void)startUpdatingBadges;
@property(retain, nonatomic) UIFont *badgeFont; // @synthesize badgeFont=_badgeFont;
@property(nonatomic) _Bool isInboxBadge; // @synthesize isInboxBadge=_isInboxBadge;
@property(retain, nonatomic) BadgeStyle *badgeStyle; // @synthesize badgeStyle;
@property(nonatomic) double badgeScaleFactor; // @synthesize badgeScaleFactor;
@property(nonatomic) double badgeCornerRoundness; // @synthesize badgeCornerRoundness;
@property(retain, nonatomic) NSString *badgeText; // @synthesize badgeText;
- (void).cxx_destruct;
- (void)dealloc;
- (void)menuCountUpdated:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)fontForBadgeWithSize:(double)arg1;
- (void)drawFrameWithContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)drawShineWithContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)drawRoundedRectWithContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)autoBadgeSizeWithString:(id)arg1;
- (id)unreadNotificationCount;
- (id)unreadNotificationCount:(_Bool)arg1;
- (id)init;
- (id)initAsInboxBadge:(_Bool)arg1;
- (id)initWithString:(id)arg1 withScale:(double)arg2 withStyle:(id)arg3 isInbox:(_Bool)arg4;

@end

