//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, YTIMusicPivotBadgeRenderer;

@interface YTMMusicPivotBadgeView : UIView
{
    struct CGSize _textSize;
    NSString *_text;
    NSDictionary *_textAttributes;
    YTIMusicPivotBadgeRenderer *_entry;
}

@property(retain, nonatomic) YTIMusicPivotBadgeRenderer *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (void)sizeHeightToFitWithMaxWidth:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end

