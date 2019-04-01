//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OnePixelLineView, UIButton, UILabel;

@interface VOXSettingsSectionHeaderView : UIView
{
    OnePixelLineView *_onePixelLineView;
    UILabel *_sectionNameLabel;
    UIButton *_tooltipButton;
    CDUnknownBlockType _tooltipAction;
}

@property(copy, nonatomic) CDUnknownBlockType tooltipAction; // @synthesize tooltipAction=_tooltipAction;
@property(retain, nonatomic) UIButton *tooltipButton; // @synthesize tooltipButton=_tooltipButton;
@property(retain, nonatomic) UILabel *sectionNameLabel; // @synthesize sectionNameLabel=_sectionNameLabel;
@property(retain, nonatomic) OnePixelLineView *onePixelLineView; // @synthesize onePixelLineView=_onePixelLineView;
- (void).cxx_destruct;
- (void)tooltipDidPress:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

