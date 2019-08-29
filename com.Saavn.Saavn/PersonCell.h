//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FollowButton, UIImageView, UILabel, UIView;

@interface PersonCell : UITableViewCell
{
    UIView *bevel;
    UIView *btmBevel;
    UIView *imageBevel;
    UILabel *initials;
    _Bool isCondensed;
    _Bool hideMeta;
    _Bool _isTagCell;
    _Bool _isFollowCell;
    _Bool _isShortCell;
    int btnType;
    FollowButton *_followButton;
    UIImageView *_tagToggle;
}

@property(retain, nonatomic) UIImageView *tagToggle; // @synthesize tagToggle=_tagToggle;
@property(retain, nonatomic) FollowButton *followButton; // @synthesize followButton=_followButton;
@property(nonatomic) _Bool isShortCell; // @synthesize isShortCell=_isShortCell;
@property(nonatomic) _Bool isFollowCell; // @synthesize isFollowCell=_isFollowCell;
@property(nonatomic) _Bool isTagCell; // @synthesize isTagCell=_isTagCell;
@property(nonatomic) int btnType; // @synthesize btnType;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initAsFollowCellWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)isTagged:(_Bool)arg1;
- (id)initAsTagCellWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)hideInitials;
- (void)showInitials:(id)arg1;
- (void)showInitials;
- (void)showCondensed;
- (void)showBottomBevel;
- (void)firstCell;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

