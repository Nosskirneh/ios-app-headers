//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface UILabel (YTLabels)
+ (struct CGSize)estimateSizeToFitText:(id)arg1 maxWidth:(double)arg2;
+ (id)clearLabelWithFont:(id)arg1 color:(id)arg2 shadowType:(long long)arg3;
+ (id)clearLabelWithFont:(id)arg1 color:(id)arg2;
+ (id)clearLabel;
- (id)yt_textLines;
- (void)sizeToFitWithMaxWidth:(double)arg1;
- (void)configureSeparatorLabel;
- (double)actualFontSize;
- (void)setFont:(id)arg1 color:(id)arg2 shadowType:(long long)arg3;
- (void)setTypeKind:(long long)arg1 typeVariant:(long long)arg2;
- (void)setTypeKind:(long long)arg1;
@end

