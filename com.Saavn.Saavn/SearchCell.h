//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface SearchCell : UITableViewCell
{
    UIView *imageBevel;
    UIView *topBevel;
    UIView *btmBevel;
    UIView *selectedBackground;
    _Bool isMoreCell;
    _Bool isPersonCell;
    _Bool hasExtraLabel;
    UILabel *_extraLabel;
}

@property(retain, nonatomic) UILabel *extraLabel; // @synthesize extraLabel=_extraLabel;
- (void).cxx_destruct;
- (void)updateUIMode;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)showBottomSeparatorWithInsets:(struct UIEdgeInsets)arg1;
- (void)showBottomSeparator;
- (void)showTopSeparatorWithInsets:(struct UIEdgeInsets)arg1;
- (void)showTopSeparator;
- (void)showExtraLabel:(id)arg1;
- (void)personCell;
- (void)moreCell;
- (void)initSelectedView;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

