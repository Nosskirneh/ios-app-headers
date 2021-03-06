//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GLUEButton, GLUELabel, NSLayoutConstraint, SPTPartnerIntegrationSettingsItemViewModel, UIImageView, UIView;

@interface SPTPartnerIntegrationSettingsItemCell : UICollectionViewCell
{
    SPTPartnerIntegrationSettingsItemViewModel *_viewModel;
    UIView *_backdropView;
    GLUELabel *_titleLabel;
    GLUELabel *_descriptionLabel;
    UIImageView *_iconImageView;
    GLUEButton *_actionButton;
    NSLayoutConstraint *_cellWidthConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *cellWidthConstraint; // @synthesize cellWidthConstraint=_cellWidthConstraint;
@property(readonly, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) SPTPartnerIntegrationSettingsItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(nonatomic) double contentWidth;
- (void)didTapActionButton:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

