//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXTrackTableViewCell.h"

#import "VOXItemStateIndicatorViewProtocol-Protocol.h"
#import "VOXOfflineModeProtocol-Protocol.h"

@class NSString, OnePixelLineView, UIImageView, UILabel, VOXDownloadStateView, VOXLabelsContainerView, VOXTileTrackIndicatorView;

@interface VOXTileTrackTableViewCell : VOXTrackTableViewCell <VOXItemStateIndicatorViewProtocol, VOXOfflineModeProtocol>
{
    VOXLabelsContainerView *_labelsContainerView;
    VOXTileTrackIndicatorView *_trackIndicatorView;
    OnePixelLineView *_cellSeparatorView;
    UIImageView *_artworkImageView;
    VOXDownloadStateView *_downloadStateView;
    UILabel *_durationLabel;
    UIImageView *_downloadStateImageView;
    UIImageView *_likedStateView;
    UIImageView *_offlineIndicator;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak UIImageView *offlineIndicator; // @synthesize offlineIndicator=_offlineIndicator;
@property(nonatomic) __weak UIImageView *likedStateView; // @synthesize likedStateView=_likedStateView;
@property(nonatomic) __weak UIImageView *downloadStateImageView; // @synthesize downloadStateImageView=_downloadStateImageView;
@property(nonatomic) __weak UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(nonatomic) __weak VOXDownloadStateView *downloadStateView; // @synthesize downloadStateView=_downloadStateView;
@property(nonatomic) __weak UIImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(nonatomic) __weak OnePixelLineView *cellSeparatorView; // @synthesize cellSeparatorView=_cellSeparatorView;
@property(nonatomic) __weak VOXTileTrackIndicatorView *trackIndicatorView; // @synthesize trackIndicatorView=_trackIndicatorView;
@property(retain, nonatomic) VOXLabelsContainerView *labelsContainerView; // @synthesize labelsContainerView=_labelsContainerView;
- (void).cxx_destruct;
- (void)configureOnlineMode;
- (void)configureOfflineMode;
- (id)pausePlaybackVisualization;
- (void)refreshIndicatorViewWithModel:(id)arg1;
- (id)indicatorView;
- (void)reloadCellWithPlayableItem:(id)arg1 withPosition:(long long)arg2 stateIndicatorModel:(id)arg3;
- (void)layoutSubviews;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

