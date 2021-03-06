//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSTCollectionReusableView.h"

@class UIImageView, UILabel, UIView;

@interface RHBaseCollectionViewHeader : PSTCollectionReusableView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_disclosureImageView;
    UIView *_topBorderView;
    CDUnknownBlockType _clickAction;
}

@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(nonatomic) __weak UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(nonatomic) __weak UIImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)prepareForReuse;
- (void)configureViewWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)configureViewWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

