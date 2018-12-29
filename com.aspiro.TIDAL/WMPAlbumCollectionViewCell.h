//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UISwitch, UIView, _TtC4WiMP14ForceClickView;

@interface WMPAlbumCollectionViewCell : UICollectionViewCell
{
    _TtC4WiMP14ForceClickView *_clicker;
    UIImageView *_albumImageView;
    UILabel *_albumTitleLabel;
    UILabel *_artistLabel;
    UIImageView *_explicitIcon;
    UIButton *_moreButton;
    UILabel *_albumInfoLabel;
    UILabel *_albumReleaseDateLabel;
    UISwitch *_offlineSwitch;
    UIView *_separatorLine;
    NSLayoutConstraint *_separatorLineHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *separatorLineHeightConstraint; // @synthesize separatorLineHeightConstraint=_separatorLineHeightConstraint;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UISwitch *offlineSwitch; // @synthesize offlineSwitch=_offlineSwitch;
@property(retain, nonatomic) UILabel *albumReleaseDateLabel; // @synthesize albumReleaseDateLabel=_albumReleaseDateLabel;
@property(retain, nonatomic) UILabel *albumInfoLabel; // @synthesize albumInfoLabel=_albumInfoLabel;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIImageView *explicitIcon; // @synthesize explicitIcon=_explicitIcon;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(retain, nonatomic) UILabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
@property(retain, nonatomic) UIImageView *albumImageView; // @synthesize albumImageView=_albumImageView;
@property(retain, nonatomic) _TtC4WiMP14ForceClickView *clicker; // @synthesize clicker=_clicker;
- (void).cxx_destruct;
- (void)configureFontsForType:(long long)arg1;
- (void)setExplicitTag:(_Bool)arg1;
- (void)setArtWork:(id)arg1;
- (void)offlineSwitchToggled:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setupViews;
- (void)configureColors;
- (void)loadIcons;
- (void)awakeFromNib;

@end

