//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface RHStationTableCell : UITableViewCell
{
    UIImageView *_stationArtwork;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UIButton *_plusButton;
}

+ (double)cellHeight;
@property(nonatomic) __weak UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *stationArtwork; // @synthesize stationArtwork=_stationArtwork;
- (void).cxx_destruct;
- (void)configureForNetworkStatus;
- (void)networkStatusChanged:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)awakeFromNib;

@end

