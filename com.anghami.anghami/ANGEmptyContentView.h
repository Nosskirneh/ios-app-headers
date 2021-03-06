//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ANGAsyncImageView, ANGPlaylist, UIButton, UILabel;

@interface ANGEmptyContentView : UIView
{
    int _type;
    ANGPlaylist *_playlist;
    ANGAsyncImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_button;
}

+ (id)initWithType:(int)arg1 andFrame:(struct CGRect)arg2;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak ANGAsyncImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) ANGPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (void)addSongs;
- (void)createNewPlaylist;
- (void)hideButton;
- (void)buttonClicked:(id)arg1;
- (void)initViews;
- (void)awakeFromNib;

@end

