//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface MDCCollectionViewTextCell : MDCCollectionViewCell
{
    UIView *_contentWrapper;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (struct CGSize)frameSizeForLabel:(id)arg1;
- (void)applyMetrics;
- (struct CGRect)contentWrapperFrame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)commonMDCCollectionViewTextCellInit;
- (void)resetMDCCollectionViewTextCellLabelProperties;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

