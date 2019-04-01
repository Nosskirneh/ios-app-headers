//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXSwipeTableViewCell.h"

#import "VOXItemStateIndicatorViewProtocol-Protocol.h"

@class NSString, OnePixelLineView, UIImageView, UILabel, VOXArtworkBorderedImageView, VOXLabelsContainerView, VOXTileTrackIndicatorView;

@interface VOXSearchTableViewCell : VOXSwipeTableViewCell <VOXItemStateIndicatorViewProtocol>
{
    UIImageView *_likeImageView;
    VOXArtworkBorderedImageView *_artworkImageView;
    VOXLabelsContainerView *_labelsContainerView;
    OnePixelLineView *_cellSeparatorView;
    VOXTileTrackIndicatorView *_trackIndicatorView;
    UILabel *_durationLabel;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(nonatomic) __weak VOXTileTrackIndicatorView *trackIndicatorView; // @synthesize trackIndicatorView=_trackIndicatorView;
@property(nonatomic) __weak OnePixelLineView *cellSeparatorView; // @synthesize cellSeparatorView=_cellSeparatorView;
@property(retain, nonatomic) VOXLabelsContainerView *labelsContainerView; // @synthesize labelsContainerView=_labelsContainerView;
@property(nonatomic) __weak VOXArtworkBorderedImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(nonatomic) __weak UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
- (void).cxx_destruct;
- (id)pausePlaybackVisualization;
- (void)refreshIndicatorViewWithModel:(id)arg1;
- (id)indicatorView;
- (void)reloadCellWithSearchTrackModel:(id)arg1 stateIndicatorModel:(id)arg2;
- (void)reloadCellWithSearchArtistEntity:(id)arg1 stateIndicatorModel:(id)arg2;
- (void)reloadCellWithSearchAlbumEntity:(id)arg1 stateIndicatorModel:(id)arg2;
- (void)reloadCellWithSearchTrackEntity:(id)arg1 stateIndicatorModel:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

