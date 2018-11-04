//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface DZRPlayButtonProgressView : UIView
{
    UIColor *_tintColor;
    UIColor *_backgroundColor;
    double _progressWidth;
}

@property(nonatomic) double progressWidth; // @synthesize progressWidth=_progressWidth;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (double)progress;
- (id)initWithFrame:(struct CGRect)arg1;

@end

