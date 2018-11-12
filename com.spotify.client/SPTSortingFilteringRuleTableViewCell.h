//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTSortingFilteringRuleTableViewCellStyle, UIImageView;

@interface SPTSortingFilteringRuleTableViewCell : UITableViewCell <GLUEStyleable>
{
    _Bool _ruleSelected;
    GLUELabel *_titleLabel;
    UIImageView *_iconView;
    SPTSortingFilteringRuleTableViewCellStyle *_style;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *iconWidthConstraint; // @synthesize iconWidthConstraint=_iconWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconHeightConstraint; // @synthesize iconHeightConstraint=_iconHeightConstraint;
@property(retain, nonatomic) SPTSortingFilteringRuleTableViewCellStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool ruleSelected; // @synthesize ruleSelected=_ruleSelected;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
@property(copy, nonatomic) NSString *ruleTitle;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

