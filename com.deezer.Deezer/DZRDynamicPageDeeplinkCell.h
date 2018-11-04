//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "DZRDynamicPageCell-Protocol.h"

@class DZRDynamicPageURLImagePatternView, NSString, UIImageView, UILabel;

@interface DZRDynamicPageDeeplinkCell : UICollectionViewCell <DZRDynamicPageCell>
{
    DZRDynamicPageURLImagePatternView *_patternBackgroundView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

+ (id)cellIdentifier;
+ (struct CGSize)sizeWithItem:(id)arg1 inSection:(id)arg2 usingBounds:(struct CGRect)arg3;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DZRDynamicPageURLImagePatternView *patternBackgroundView; // @synthesize patternBackgroundView=_patternBackgroundView;
- (void).cxx_destruct;
- (void)iPadLayout;
- (void)iPhoneLayout;
- (void)layoutSubviews;
- (void)populateWithItem:(id)arg1 inSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

