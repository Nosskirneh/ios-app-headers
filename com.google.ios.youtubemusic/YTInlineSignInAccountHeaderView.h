//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class FLXLayout, YTFormattedStringLabel, YTLabel;

@interface YTInlineSignInAccountHeaderView : UICollectionReusableView
{
    FLXLayout *_layout;
    YTLabel *_label;
    YTFormattedStringLabel *_unlimitedStatusLabel;
}

@property(retain, nonatomic) YTFormattedStringLabel *unlimitedStatusLabel; // @synthesize unlimitedStatusLabel=_unlimitedStatusLabel;
@property(retain, nonatomic) YTLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)root;
- (void)layoutSubviews;
- (void)setUnlimitedStatus:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

