//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SuperCardCell.h"

@class UILabel;

@interface SuperTrackCardCell : SuperCardCell
{
    UILabel *_hashTagLabel;
    UILabel *_durationLabel;
}

+ (double)artworkAspectRatio;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) __weak UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(nonatomic) __weak UILabel *hashTagLabel; // @synthesize hashTagLabel=_hashTagLabel;
- (void).cxx_destruct;
- (void)layoutArtworkImageViewIfNeeded;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)pageModel;

@end

