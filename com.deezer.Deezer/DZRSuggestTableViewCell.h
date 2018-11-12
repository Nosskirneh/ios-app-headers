//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel;

@interface DZRSuggestTableViewCell : UITableViewCell
{
    UIImageView *_arrowImageView;
    UILabel *_itemNameLabel;
    UILabel *_itemDetailLabel;
    NSArray *_deviceRelatedMargins;
    NSLayoutConstraint *_nameLabelSingleRowHeightConstraint;
    NSLayoutConstraint *_nameLabelDoubleRowHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *nameLabelDoubleRowHeightConstraint; // @synthesize nameLabelDoubleRowHeightConstraint=_nameLabelDoubleRowHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *nameLabelSingleRowHeightConstraint; // @synthesize nameLabelSingleRowHeightConstraint=_nameLabelSingleRowHeightConstraint;
@property(retain, nonatomic) NSArray *deviceRelatedMargins; // @synthesize deviceRelatedMargins=_deviceRelatedMargins;
@property(retain, nonatomic) UILabel *itemDetailLabel; // @synthesize itemDetailLabel=_itemDetailLabel;
@property(retain, nonatomic) UILabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void).cxx_destruct;
- (void)populateWithItem:(id)arg1 type:(long long)arg2 searchText:(id)arg3;
- (void)awakeFromNib;

@end
