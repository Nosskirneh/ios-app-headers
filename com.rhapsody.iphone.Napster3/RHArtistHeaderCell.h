//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface RHArtistHeaderCell : UITableViewCell
{
    UILabel *_biographyLabel;
    UIImageView *_artistImageView;
    UIView *_overlay;
}

+ (double)cellHeight;
@property(nonatomic) __weak UIView *overlay; // @synthesize overlay=_overlay;
@property(nonatomic) __weak UIImageView *artistImageView; // @synthesize artistImageView=_artistImageView;
@property(nonatomic) __weak UILabel *biographyLabel; // @synthesize biographyLabel=_biographyLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end
