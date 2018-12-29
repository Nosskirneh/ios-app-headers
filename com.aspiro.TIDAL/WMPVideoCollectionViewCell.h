//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, _TtC4WiMP14ForceClickView;

@interface WMPVideoCollectionViewCell : UICollectionViewCell
{
    _TtC4WiMP14ForceClickView *_clicker;
    UIImageView *_videoImageView;
    UILabel *_videoTitleLabel;
    UILabel *_artistLabel;
    UILabel *_videoDurationLabel;
    UIImageView *_explicitIcon;
    UIImageView *_liveIcon;
    UIView *_videoDurationContainerView;
}

@property(retain, nonatomic) UIView *videoDurationContainerView; // @synthesize videoDurationContainerView=_videoDurationContainerView;
@property(retain, nonatomic) UIImageView *liveIcon; // @synthesize liveIcon=_liveIcon;
@property(retain, nonatomic) UIImageView *explicitIcon; // @synthesize explicitIcon=_explicitIcon;
@property(retain, nonatomic) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(retain, nonatomic) UILabel *videoTitleLabel; // @synthesize videoTitleLabel=_videoTitleLabel;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) _TtC4WiMP14ForceClickView *clicker; // @synthesize clicker=_clicker;
- (void).cxx_destruct;
- (void)setExplicitIconHidden:(_Bool)arg1;
- (void)setArtworkAccessibilityLabel:(id)arg1;
- (void)setupViews;
- (void)configureColors;
- (void)awakeFromNib;

@end
