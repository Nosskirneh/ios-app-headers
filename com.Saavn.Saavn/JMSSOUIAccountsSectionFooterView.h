//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JMSSOUITheme, UIButton, UIImageView, UILabel;
@protocol JMSSOUIAccountsSectionFooterViewDelegate;

@interface JMSSOUIAccountsSectionFooterView : UIView
{
    UIView *_holderView;
    UIImageView *_addImageView;
    UILabel *_footerSectionLabel;
    UIImageView *_arrowImageView;
    UIButton *_addAccountButton;
    id <JMSSOUIAccountsSectionFooterViewDelegate> _delegate;
    JMSSOUITheme *_theme;
}

+ (id)footerView;
- (void).cxx_destruct;
- (void)didClickOnAddButton:(id)arg1;
- (void)updateButtonImages;
- (void)updateTheme;
- (void)setTheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)awakeFromNib;

@end

