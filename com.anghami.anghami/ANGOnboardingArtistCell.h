//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ANGAsyncImageView, UIImageView, UILabel;

@interface ANGOnboardingArtistCell : UICollectionViewCell
{
    _Bool _isFirstLayoutPassed;
    _Bool _isCellSelected;
    ANGAsyncImageView *_artwork;
    UILabel *_name;
    UIImageView *_iconRight;
    UIImageView *_iconRightPlus;
}

@property(nonatomic) __weak UIImageView *iconRightPlus; // @synthesize iconRightPlus=_iconRightPlus;
@property(retain, nonatomic) UIImageView *iconRight; // @synthesize iconRight=_iconRight;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) ANGAsyncImageView *artwork; // @synthesize artwork=_artwork;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
- (void).cxx_destruct;
- (void)setIsCellSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end

