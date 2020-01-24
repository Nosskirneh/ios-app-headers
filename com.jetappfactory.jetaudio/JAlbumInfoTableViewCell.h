//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GTMFadeTruncatingLabel, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface JAlbumInfoTableViewCell : UITableViewCell
{
    UIImageView *_artworkImageView;
    UIImageView *_artworkBorderImageView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    GTMFadeTruncatingLabel *_genreLabel;
    UILabel *_yearLabel;
    UILabel *_durationLabel;
    UIView *_separatorView;
    UIButton *_ctxMenuButton;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_titleMaxHeightConstraint;
    NSLayoutConstraint *_titleMinHeightConstraint;
    UIButton *_backButton;
    NSLayoutConstraint *_titleLabelCenterYConstraint;
    NSLayoutConstraint *_artworkImageViewWidthConstraint;
    NSLayoutConstraint *_artworkImageViewHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *artworkImageViewHeightConstraint; // @synthesize artworkImageViewHeightConstraint=_artworkImageViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *artworkImageViewWidthConstraint; // @synthesize artworkImageViewWidthConstraint=_artworkImageViewWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelCenterYConstraint; // @synthesize titleLabelCenterYConstraint=_titleLabelCenterYConstraint;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak NSLayoutConstraint *titleMinHeightConstraint; // @synthesize titleMinHeightConstraint=_titleMinHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleMaxHeightConstraint; // @synthesize titleMaxHeightConstraint=_titleMaxHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(nonatomic) __weak UIButton *ctxMenuButton; // @synthesize ctxMenuButton=_ctxMenuButton;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(nonatomic) __weak UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
@property(nonatomic) __weak GTMFadeTruncatingLabel *genreLabel; // @synthesize genreLabel=_genreLabel;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *artworkBorderImageView; // @synthesize artworkBorderImageView=_artworkBorderImageView;
@property(nonatomic) __weak UIImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
