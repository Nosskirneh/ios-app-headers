//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JMSSOUITheme, UIImageView, UILabel, UIView;

@interface JMSSOUIAccountsTableViewCell : UITableViewCell
{
    UIView *_cellView;
    UILabel *_accountTitleLabel;
    UILabel *_accountSubTitleLabel;
    UIImageView *_accountImageView;
    UIImageView *_arrowImageView;
    JMSSOUITheme *_theme;
}

- (void).cxx_destruct;
- (void)updateTheme;
- (void)updateButtonImages;
- (void)updateView;
- (void)setProfileImageFromURL:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

