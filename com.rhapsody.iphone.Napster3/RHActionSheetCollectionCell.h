//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface RHActionSheetCollectionCell : UICollectionViewCell
{
    UIImageView *_iconImage;
    UILabel *_titleLabel;
}

+ (struct CGSize)size;
+ (id)nibName;
+ (id)reuseId;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)setupWithTitle:(id)arg1 icon:(id)arg2;
- (void)awakeFromNib;

@end
