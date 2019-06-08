//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSTCollectionViewCell.h"

@class RHArtistMO, RHDataController, RHTargetAction, UIButton, UIImageView, UILabel, UIView, ZDSPromise;

@interface RHArtistCollectionViewCell : PSTCollectionViewCell
{
    int _artistCollectionViewCellStyle;
    struct CGSize imageSize;
    int _contentStyle;
    RHArtistMO *_artist;
    UIView *_detailsView;
    RHTargetAction *_onPlayTapAction;
    UIImageView *_artistImageView;
    UILabel *_artistLabel;
    UILabel *_ordinalLabel;
    UIButton *_playButton;
    ZDSPromise *_imagePromise;
    double _ordinalToArtistSpacing;
}

@property(nonatomic) double ordinalToArtistSpacing; // @synthesize ordinalToArtistSpacing=_ordinalToArtistSpacing;
@property(retain, nonatomic) ZDSPromise *imagePromise; // @synthesize imagePromise=_imagePromise;
@property(nonatomic) __weak UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak UILabel *ordinalLabel; // @synthesize ordinalLabel=_ordinalLabel;
@property(nonatomic) __weak UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(nonatomic) __weak UIImageView *artistImageView; // @synthesize artistImageView=_artistImageView;
@property(retain, nonatomic) RHTargetAction *onPlayTapAction; // @synthesize onPlayTapAction=_onPlayTapAction;
@property(retain, nonatomic) UIView *detailsView; // @synthesize detailsView=_detailsView;
@property(nonatomic) int contentStyle; // @synthesize contentStyle=_contentStyle;
@property(retain, nonatomic) RHArtistMO *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (void)playTapped:(id)arg1;
- (id)reachabilityService;
- (id)imageProvider;
@property(readonly) RHDataController *dataController;
- (void)handleNetworkStatusChangedNotification:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)loadImage;
- (void)configureCellWithArtistHighlight:(id)arg1 style:(int)arg2;
- (void)configureCellWithArtistHighlight:(id)arg1;
- (void)configureCellWithArtist:(id)arg1 style:(int)arg2;
- (void)configureCellWithArtist:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
@property(nonatomic) int artistCollectionViewCellStyle;

@end

