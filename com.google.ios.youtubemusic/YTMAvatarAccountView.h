//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, UILabel, UIView, YTMAccountIdentityView, YTMAvatarAccountSubscriptionStatusView, YTMBevelView;

@interface YTMAvatarAccountView : UIScrollView
{
    YTMAccountIdentityView *_accountIdentityView;
    YTMAvatarAccountSubscriptionStatusView *_memberStatusView;
    NSMutableArray *_menuLowerButtons;
    YTMBevelView *_menuSeparator;
    NSMutableArray *_menuUpperButtons;
    UIView *_menuView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)setMemberStatusText:(id)arg1;
- (void)setAccountMenuUpperButtons:(id)arg1 lowerButtons:(id)arg2;
- (void)setName:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setAccountBannerImage:(id)arg1;
- (void)setAvatarBorderEnabled:(_Bool)arg1;
- (void)setAvatar:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
