//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface RHTableSectionHeaderView : UIView
{
    UILabel *_titleLabel;
}

+ (id)headerViewWithDeviceCorrectPadding;
+ (id)headerView;
+ (double)viewHeight;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

