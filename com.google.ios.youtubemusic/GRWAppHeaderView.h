//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface GRWAppHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
}

+ (double)preferredHeightForTitle:(id)arg1 width:(double)arg2;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

