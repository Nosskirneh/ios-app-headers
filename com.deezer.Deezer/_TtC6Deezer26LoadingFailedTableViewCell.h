//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DZFlatButton, UILabel;

@interface _TtC6Deezer26LoadingFailedTableViewCell : UITableViewCell
{
    // Error parsing type: , name: label
    // Error parsing type: , name: button
    // Error parsing type: , name: isEmptyState
    // Error parsing type: , name: refreshFunction
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onButtonTouched;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic, copy) CDUnknownBlockType refreshFunction; // @synthesize refreshFunction;
@property(nonatomic) _Bool isEmptyState; // @synthesize isEmptyState;
@property(nonatomic) __weak DZFlatButton *button; // @synthesize button;
@property(nonatomic) __weak UILabel *label; // @synthesize label;

@end
