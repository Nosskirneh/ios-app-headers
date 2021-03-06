//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ANGAsyncImageView, NSLayoutConstraint, UILabel, UIView;

@interface ANGPlanTableViewCell : UITableViewCell
{
    UILabel *_mainLabel;
    UILabel *_subLabel;
    UIView *_radioButton;
    ANGAsyncImageView *_backgroundImageView;
    UIView *_shadowView;
    UILabel *_priceLabel;
    UILabel *_perLabel;
    UILabel *_currencyLabel;
    ANGAsyncImageView *_bigImageView;
    NSLayoutConstraint *_bigImageHeight;
}

@property(retain, nonatomic) NSLayoutConstraint *bigImageHeight; // @synthesize bigImageHeight=_bigImageHeight;
@property(retain, nonatomic) ANGAsyncImageView *bigImageView; // @synthesize bigImageView=_bigImageView;
@property(retain, nonatomic) UILabel *currencyLabel; // @synthesize currencyLabel=_currencyLabel;
@property(retain, nonatomic) UILabel *perLabel; // @synthesize perLabel=_perLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) ANGAsyncImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *radioButton; // @synthesize radioButton=_radioButton;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

