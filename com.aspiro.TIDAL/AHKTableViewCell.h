//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIView;

@interface AHKTableViewCell : UITableViewCell
{
    UIView *_backgroundSubView;
    UIView *_separatorView;
    UILabel *_label;
    UIView *_radioButtonView;
    NSLayoutConstraint *_separatorViewHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *separatorViewHeightConstraint; // @synthesize separatorViewHeightConstraint=_separatorViewHeightConstraint;
@property(nonatomic) __weak UIView *radioButtonView; // @synthesize radioButtonView=_radioButtonView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UIView *backgroundSubView; // @synthesize backgroundSubView=_backgroundSubView;
- (void).cxx_destruct;
- (void)setSelectedTheme;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)markAsSelected:(_Bool)arg1;
- (void)awakeFromNib;

@end

