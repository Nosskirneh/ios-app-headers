//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTContactContentViewBase.h"

@class SKTNetworkImageView, UIImageView, UIView;

@interface SKTContactGridCellView : SKTContactContentViewBase
{
    UIImageView *_inAppIconView;
    SKTNetworkImageView *_profileImageView;
    UIView *_avatarBorderCircle;
}

+ (struct CGSize)profileImageSizeForObject:(id)arg1;
+ (id)detailTextFromObject:(id)arg1;
+ (long long)numberOfDetailTextLinesFromObject:(id)arg1;
+ (long long)numberOfTextLinesFromObject:(id)arg1;
+ (long long)contentVerticalAlignmentFromObject:(id)arg1;
+ (id)detailTextFontFromObject:(id)arg1;
+ (id)textFontFromObject:(id)arg1;
+ (struct UIEdgeInsets)padding;
+ (double)verticalDistanceBetweenLabelsFromObject:(id)arg1;
+ (struct UIEdgeInsets)textInsetsFromObject:(id)arg1;
+ (double)minimumFittingHeightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) UIView *avatarBorderCircle; // @synthesize avatarBorderCircle=_avatarBorderCircle;
@property(retain, nonatomic) SKTNetworkImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(retain, nonatomic) UIImageView *inAppIconView; // @synthesize inAppIconView=_inAppIconView;
- (void).cxx_destruct;
- (void)updateAvatarBorderCircle;
- (void)buildInAppIconViewWithColorOverrides:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)changeSelectedState:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

