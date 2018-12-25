//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GIPNetworkImageView, UILabel;

@interface GRWOpenAppAlertView : UIView
{
    GIPNetworkImageView *_appIconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GIPNetworkImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 appIconURL:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupView;
- (id)init;

@end

