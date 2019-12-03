//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, SPTTheme, UICollectionView, UICollectionViewFlowLayout, UILabel;

@interface SPTDrivingModeHomeFeedShelfView : UIView
{
    UICollectionView *_collectionView;
    SPTTheme *_theme;
    UICollectionViewFlowLayout *_collectionViewLayout;
    CAGradientLayer *_gradient;
    UIView *_titleGradientView;
    UILabel *_titleLabel;
    NSString *_shelfTitle;
}

@property(copy, nonatomic) NSString *shelfTitle; // @synthesize shelfTitle=_shelfTitle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleGradientView; // @synthesize titleGradientView=_titleGradientView;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)setupTitleGradientView;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)setupTitleViewContainer;
- (void)layoutSubviews;
- (id)initWithTheme:(id)arg1 shelfTitle:(id)arg2;

@end

