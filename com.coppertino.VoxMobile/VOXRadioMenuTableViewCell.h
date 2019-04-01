//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class OnePixelLineView, UIImageView, UILabel;

@interface VOXRadioMenuTableViewCell : UITableViewCell
{
    UILabel *_menuTitleLabel;
    UIImageView *_menuImageView;
    OnePixelLineView *_cellSeparatorView;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak OnePixelLineView *cellSeparatorView; // @synthesize cellSeparatorView=_cellSeparatorView;
@property(nonatomic) __weak UIImageView *menuImageView; // @synthesize menuImageView=_menuImageView;
@property(nonatomic) __weak UILabel *menuTitleLabel; // @synthesize menuTitleLabel=_menuTitleLabel;
- (void).cxx_destruct;
- (void)reloadCellWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

