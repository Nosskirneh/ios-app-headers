//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

@interface DZRLabsHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_imageHeight;
}

@property(retain, nonatomic) NSLayoutConstraint *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)heightForFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

