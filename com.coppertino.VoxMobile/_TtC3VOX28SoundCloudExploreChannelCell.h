//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXSwipeTableViewCell.h"

@class OnePixelLineView, UIImageView, UILabel, VOXLabelsContainerView, VOXTrackContainerIndicatorView;

@interface _TtC3VOX28SoundCloudExploreChannelCell : VOXSwipeTableViewCell
{
    // Error parsing type: , name: labelsView
    // Error parsing type: , name: artworkImageView
    // Error parsing type: , name: cellSeparatorView
    // Error parsing type: , name: offlineLabel
    // Error parsing type: , name: containerIndicatorView
    // Error parsing type: , name: offlineIndicator
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;
@property(nonatomic, retain) UIImageView *offlineIndicator; // @synthesize offlineIndicator;
@property(nonatomic, retain) VOXTrackContainerIndicatorView *containerIndicatorView; // @synthesize containerIndicatorView;
@property(nonatomic) __weak UILabel *offlineLabel; // @synthesize offlineLabel;
@property(nonatomic) __weak OnePixelLineView *cellSeparatorView; // @synthesize cellSeparatorView;
@property(nonatomic) __weak UIImageView *artworkImageView; // @synthesize artworkImageView;
@property(nonatomic, retain) VOXLabelsContainerView *labelsView; // @synthesize labelsView;
- (void)reloadWithChannel:(id)arg1 stateIndicatorModel:(id)arg2;

@end

