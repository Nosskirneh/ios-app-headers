//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class RHPlaylistCellViewModel, RHStackView, UIButton, UILabel, UIView, _TtC7Napster18RHRoundedImageView, _TtC7Napster19RHDeferredImageView;

@interface RHPlaylistCellSmall : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_privacyLabel;
    UILabel *_ownerLabel;
    UIButton *_ownerButton;
    _TtC7Napster19RHDeferredImageView *_playlistImageView;
    _TtC7Napster18RHRoundedImageView *_ownerImageView;
    RHStackView *_stackView;
    UIView *_ownerView;
    RHPlaylistCellViewModel *_viewModel;
}

+ (id)cellNib;
+ (id)cellReuseIdentifier;
+ (double)cellHeight;
+ (void)loadCellParameters;
@property(retain, nonatomic) RHPlaylistCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIView *ownerView; // @synthesize ownerView=_ownerView;
@property(nonatomic) __weak RHStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak _TtC7Napster18RHRoundedImageView *ownerImageView; // @synthesize ownerImageView=_ownerImageView;
@property(nonatomic) __weak _TtC7Napster19RHDeferredImageView *playlistImageView; // @synthesize playlistImageView=_playlistImageView;
@property(nonatomic) __weak UIButton *ownerButton; // @synthesize ownerButton=_ownerButton;
@property(nonatomic) __weak UILabel *ownerLabel; // @synthesize ownerLabel=_ownerLabel;
@property(nonatomic) __weak UILabel *privacyLabel; // @synthesize privacyLabel=_privacyLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)showOwner:(id)arg1;
- (void)configureKVO;
- (void)setCellViewModel:(id)arg1 accessibilityIndex:(long long)arg2;
- (void)awakeFromNib;

@end
