//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class LyricsItem, NSDictionary, UILabel, UITextView, UIView;

@interface LyricsCell : UITableViewCell
{
    UIView *nowPlayingLine;
    _Bool isNowPlaying;
    LyricsItem *cellData;
    NSDictionary *lyricsDisplayDict;
    NSDictionary *annotationDisplayDict;
    UITextView *lyricsTextLabel;
    UITextView *annotationTextLabel;
    UILabel *annotationHeaderLabel;
    double annotationHeaderHeight;
    UIView *annotationCircle;
    UIView *annotationViewLine;
    long long _rowIndex;
}

+ (double)annotationHeight:(id)arg1 inWidth:(double)arg2;
+ (double)lyricsHeight:(id)arg1 inWidth:(double)arg2;
+ (double)margin;
+ (double)inset;
+ (id)annotationStyle;
+ (id)annotationFont;
+ (double)annotationHeaderHeight;
+ (id)annotationHeaderFont;
+ (id)lyricsStyle;
+ (id)lyricsFont;
+ (id)reuseId;
@property(nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
- (void).cxx_destruct;
- (_Bool)getNowPlaying;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)hideOrShowNowPlayingLine:(_Bool)arg1;
- (void)setNowPlaying:(_Bool)arg1;
- (void)setData:(id)arg1;
- (void)updateUIMode;
- (double)getAnnotationtextHeight;
- (double)getLyricsHeight;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

