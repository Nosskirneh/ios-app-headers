//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WMPProgressView : UIView
{
    int _lineCap;
    UIColor *_fillColor;
    double _lineWidth;
    UIColor *_placeholderColor;
    double _progressValue;
}

@property(nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) double progressValue; // @synthesize progressValue=_progressValue;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

