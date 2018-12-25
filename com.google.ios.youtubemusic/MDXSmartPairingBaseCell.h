//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "MDXSmartPairingCell-Protocol.h"

@class NSString, YTLabel;
@protocol MDXSmartPairingCellDelegate;

@interface MDXSmartPairingBaseCell : YTCollectionViewCell <MDXSmartPairingCell>
{
    id <MDXSmartPairingCellDelegate> _delegate;
    YTLabel *_headLabel;
    YTLabel *_titleLabel;
    YTLabel *_detailsLabel;
}

+ (double)preferedHeightWithCellItem:(id)arg1 forWidth:(double)arg2;
@property(readonly, nonatomic) YTLabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(readonly, nonatomic) YTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) YTLabel *headLabel; // @synthesize headLabel=_headLabel;
@property(nonatomic) __weak id <MDXSmartPairingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutWithSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

