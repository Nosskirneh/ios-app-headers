//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RHFindFriendsViewModel, UIButton, UILabel;

@interface RHFindFacebookFriendsHeaderView : UIView
{
    RHFindFriendsViewModel *_viewModel;
    UILabel *_listenersCountLabel;
    UIButton *_followUnfollowAllButton;
    UILabel *_titleLabel;
}

+ (id)newWithViewModel:(id)arg1;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *followUnfollowAllButton; // @synthesize followUnfollowAllButton=_followUnfollowAllButton;
@property(nonatomic) __weak UILabel *listenersCountLabel; // @synthesize listenersCountLabel=_listenersCountLabel;
@property(retain, nonatomic) RHFindFriendsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)followUnfollowAllAction:(id)arg1;
- (void)configureKVO;
- (void)setStyle;
- (void)awakeFromNib;

@end
