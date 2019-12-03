//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSArray, UIColor;

@interface SaavnProgressSlider : UISlider
{
    UIColor *_markColor;
    double _markWidth;
    double _durationLength;
    NSArray *_markPositions;
}

@property(retain, nonatomic) NSArray *markPositions; // @synthesize markPositions=_markPositions;
@property(nonatomic) double durationLength; // @synthesize durationLength=_durationLength;
@property(nonatomic) double markWidth; // @synthesize markWidth=_markWidth;
@property(retain, nonatomic) UIColor *markColor; // @synthesize markColor=_markColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
