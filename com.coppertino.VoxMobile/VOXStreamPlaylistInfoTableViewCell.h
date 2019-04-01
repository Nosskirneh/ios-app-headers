//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXSwipeTableViewCell.h"

@class UIImageView, UIView, VOXLabelsContainerView, VOXTrackContainerIndicatorView;

@interface VOXStreamPlaylistInfoTableViewCell : VOXSwipeTableViewCell
{
    VOXTrackContainerIndicatorView *_playlistIndicatorView;
    VOXLabelsContainerView *_labelsContainerView;
    UIImageView *_artworkImageView;
    UIView *_topSeparatorView;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(nonatomic) __weak UIImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(retain, nonatomic) VOXLabelsContainerView *labelsContainerView; // @synthesize labelsContainerView=_labelsContainerView;
@property(nonatomic) __weak VOXTrackContainerIndicatorView *playlistIndicatorView; // @synthesize playlistIndicatorView=_playlistIndicatorView;
- (void).cxx_destruct;
- (id)usernameAttributedStringForPoster:(id)arg1 owner:(id)arg2;
- (void)reloadCellWithStreamPlaylistEntitiy:(id)arg1 stateIndicatorModel:(id)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

