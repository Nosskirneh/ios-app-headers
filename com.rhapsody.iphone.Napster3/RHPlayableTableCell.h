//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, RHPlayerController, RHStackView, RHTrackMO, UIButton, UIImageView, UILabel, UIView, _TtC7Napster19RHDeferredImageView;

@interface RHPlayableTableCell : UITableViewCell
{
    _Bool _enabled;
    int _downloadStatusMode;
    CDUnknownBlockType _onMemberAvatarButtonTapAction;
    id _containerLessor;
    double _topEdgeToRankSpacing;
    double _rankToNowPlayingSpacing;
    double _nowPlayingToTrackSpacing;
    double _trackToPlayTimeSpacing;
    UILabel *_rankLabel;
    RHTrackMO *_track;
    UILabel *_trackLabel;
    UILabel *_secondaryNameLabel;
    UILabel *_tertiaryNameLabel;
    UILabel *_playTimeLabel;
    UILabel *_reasonLabel;
    UIImageView *_nowPlayingImageView;
    UIButton *_plusButton;
    UIImageView *_downloadStatusImageView;
    _TtC7Napster19RHDeferredImageView *_albumImageView;
    CDUnknownBlockType _onTapAction;
    RHStackView *_memberStackView;
    UIView *_memberContainer;
    UILabel *_memberNameLabel;
    UIButton *_memberTapButton;
    _TtC7Napster19RHDeferredImageView *_memberAvatarImageView;
    RHStackView *_contentStackView;
    UIView *_rankContainer;
    UIView *_nowPlayingContainer;
    UIView *_labelsContainer;
    UIView *_downloadContainer;
    UIView *_detailContainer;
    NSLayoutConstraint *_rankLabelTrailing;
    NSLayoutConstraint *_nowPlayingWidth;
    NSLayoutConstraint *_nowPlayingTrailing;
    NSLayoutConstraint *_downloadStateLeading;
}

+ (double)recommendedCellHeight;
+ (double)memberCellHeight;
+ (double)cellHeight;
@property(nonatomic) __weak NSLayoutConstraint *downloadStateLeading; // @synthesize downloadStateLeading=_downloadStateLeading;
@property(nonatomic) __weak NSLayoutConstraint *nowPlayingTrailing; // @synthesize nowPlayingTrailing=_nowPlayingTrailing;
@property(nonatomic) __weak NSLayoutConstraint *nowPlayingWidth; // @synthesize nowPlayingWidth=_nowPlayingWidth;
@property(nonatomic) __weak NSLayoutConstraint *rankLabelTrailing; // @synthesize rankLabelTrailing=_rankLabelTrailing;
@property(nonatomic) __weak UIView *detailContainer; // @synthesize detailContainer=_detailContainer;
@property(nonatomic) __weak UIView *downloadContainer; // @synthesize downloadContainer=_downloadContainer;
@property(nonatomic) __weak UIView *labelsContainer; // @synthesize labelsContainer=_labelsContainer;
@property(nonatomic) __weak UIView *nowPlayingContainer; // @synthesize nowPlayingContainer=_nowPlayingContainer;
@property(nonatomic) __weak UIView *rankContainer; // @synthesize rankContainer=_rankContainer;
@property(nonatomic) __weak RHStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(nonatomic) __weak _TtC7Napster19RHDeferredImageView *memberAvatarImageView; // @synthesize memberAvatarImageView=_memberAvatarImageView;
@property(nonatomic) __weak UIButton *memberTapButton; // @synthesize memberTapButton=_memberTapButton;
@property(nonatomic) __weak UILabel *memberNameLabel; // @synthesize memberNameLabel=_memberNameLabel;
@property(nonatomic) __weak UIView *memberContainer; // @synthesize memberContainer=_memberContainer;
@property(nonatomic) __weak RHStackView *memberStackView; // @synthesize memberStackView=_memberStackView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType onTapAction; // @synthesize onTapAction=_onTapAction;
@property(nonatomic) __weak _TtC7Napster19RHDeferredImageView *albumImageView; // @synthesize albumImageView=_albumImageView;
@property(nonatomic) __weak UIImageView *downloadStatusImageView; // @synthesize downloadStatusImageView=_downloadStatusImageView;
@property(nonatomic) __weak UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(nonatomic) __weak UIImageView *nowPlayingImageView; // @synthesize nowPlayingImageView=_nowPlayingImageView;
@property(nonatomic) __weak UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(nonatomic) __weak UILabel *playTimeLabel; // @synthesize playTimeLabel=_playTimeLabel;
@property(nonatomic) __weak UILabel *tertiaryNameLabel; // @synthesize tertiaryNameLabel=_tertiaryNameLabel;
@property(nonatomic) __weak UILabel *secondaryNameLabel; // @synthesize secondaryNameLabel=_secondaryNameLabel;
@property(nonatomic) __weak UILabel *trackLabel; // @synthesize trackLabel=_trackLabel;
@property(nonatomic) int downloadStatusMode; // @synthesize downloadStatusMode=_downloadStatusMode;
@property(retain, nonatomic) RHTrackMO *track; // @synthesize track=_track;
@property(nonatomic) __weak UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(nonatomic) double trackToPlayTimeSpacing; // @synthesize trackToPlayTimeSpacing=_trackToPlayTimeSpacing;
@property(nonatomic) double nowPlayingToTrackSpacing; // @synthesize nowPlayingToTrackSpacing=_nowPlayingToTrackSpacing;
@property(nonatomic) double rankToNowPlayingSpacing; // @synthesize rankToNowPlayingSpacing=_rankToNowPlayingSpacing;
@property(nonatomic) double topEdgeToRankSpacing; // @synthesize topEdgeToRankSpacing=_topEdgeToRankSpacing;
@property(retain, nonatomic) id containerLessor; // @synthesize containerLessor=_containerLessor;
@property(copy, nonatomic) CDUnknownBlockType onMemberAvatarButtonTapAction; // @synthesize onMemberAvatarButtonTapAction=_onMemberAvatarButtonTapAction;
- (void).cxx_destruct;
- (void)memberAvatarButtonTapped:(id)arg1;
@property(readonly, nonatomic) RHPlayerController *playerController;
- (struct UIEdgeInsets)layoutMargins;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateNowPlayingImageView;
- (void)handleNetworkStatusChangedNotification:(id)arg1;
- (void)layoutSubviews;
- (void)hideDownloadIndicator;
- (void)showDownloadIndicator;
- (void)configureDownloadStatusImageView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setMemberNameText:(id)arg1;
- (void)setMemberHidden:(_Bool)arg1;
- (void)setAccessibilityIndex:(long long)arg1;
- (void)setPlayTimeText:(id)arg1;
- (void)setDetailButtonHidden:(_Bool)arg1;
- (void)addDetailButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setReasonTextHidden:(_Bool)arg1;
- (void)setReasonText:(id)arg1;
- (void)setTertiaryTextHidden:(_Bool)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setSecondaryTextHidden:(_Bool)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)configureForAudiobooks;
- (void)setStyle;
- (void)setRankTextHidden:(_Bool)arg1;
- (void)setRankText:(id)arg1;
- (void)awakeFromNib;

@end

