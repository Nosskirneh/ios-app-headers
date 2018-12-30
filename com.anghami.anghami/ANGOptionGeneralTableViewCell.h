//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ANGOptionCellDataSource, UIImageView, UILabel, UIView;

@interface ANGOptionGeneralTableViewCell : UITableViewCell
{
    ANGOptionCellDataSource *_option;
    UIImageView *_optionImageView;
    UILabel *_optionNameLabel;
    UIImageView *_selectionImage;
    UIView *_containerView;
    UIView *_separatorLine;
}

@property(nonatomic) __weak UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIImageView *selectionImage; // @synthesize selectionImage=_selectionImage;
@property(nonatomic) __weak UILabel *optionNameLabel; // @synthesize optionNameLabel=_optionNameLabel;
@property(nonatomic) __weak UIImageView *optionImageView; // @synthesize optionImageView=_optionImageView;
@property(retain, nonatomic) ANGOptionCellDataSource *option; // @synthesize option=_option;
- (void).cxx_destruct;
- (void)setIsSelected:(_Bool)arg1;
- (void)setupImage;
- (void)setupName;
- (void)initWithDataSource:(id)arg1;
- (void)awakeFromNib;

@end
