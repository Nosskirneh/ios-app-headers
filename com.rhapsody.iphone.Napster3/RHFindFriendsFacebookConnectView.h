//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RHFindFriendsViewModel, UIButton, UILabel;

@interface RHFindFriendsFacebookConnectView : UIView
{
    RHFindFriendsViewModel *_viewModel;
    UILabel *_connectTitleLabel;
    UILabel *_connectTextLabel;
    UIButton *_connectButton;
}

+ (id)newWithViewModel:(id)arg1;
@property(nonatomic) __weak UIButton *connectButton; // @synthesize connectButton=_connectButton;
@property(nonatomic) __weak UILabel *connectTextLabel; // @synthesize connectTextLabel=_connectTextLabel;
@property(nonatomic) __weak UILabel *connectTitleLabel; // @synthesize connectTitleLabel=_connectTitleLabel;
@property(retain, nonatomic) RHFindFriendsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)connectAction:(id)arg1;
- (void)awakeFromNib;

@end
