//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CollectionSectionView.h"

@class UIImageView, UILabel;

@interface EmptyStateFooterView : CollectionSectionView
{
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIImageView *_iconImageView;
}

@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)displayContent:(id)arg1;
- (void)awakeFromNib;

@end
