//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView, _TtC6Deezer16IllustrationView;
@protocol DZRNotificationTableViewCellDelegate;

@interface DZRNotificationTableViewCell : UITableViewCell
{
    id <DZRNotificationTableViewCellDelegate> _delegate;
    _TtC6Deezer16IllustrationView *_avatar;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_contentContainer;
    UIView *_actionsPlaceholder;
    UILabel *_timestamp;
    UILabel *_quote;
    UIImageView *_unreadIndicator;
    NSLayoutConstraint *_sharedContentBottomConstraint;
    NSLayoutConstraint *_unreadWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *unreadWidthConstraint; // @synthesize unreadWidthConstraint=_unreadWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *sharedContentBottomConstraint; // @synthesize sharedContentBottomConstraint=_sharedContentBottomConstraint;
@property(nonatomic) __weak UIImageView *unreadIndicator; // @synthesize unreadIndicator=_unreadIndicator;
@property(nonatomic) __weak UILabel *quote; // @synthesize quote=_quote;
@property(nonatomic) __weak UILabel *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) __weak UIView *actionsPlaceholder; // @synthesize actionsPlaceholder=_actionsPlaceholder;
@property(nonatomic) __weak UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak _TtC6Deezer16IllustrationView *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) __weak id <DZRNotificationTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectAvatar:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

