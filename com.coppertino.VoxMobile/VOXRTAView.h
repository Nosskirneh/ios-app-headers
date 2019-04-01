//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface VOXRTAView : UIView
{
    float _mul;
    float band_x_step;
    double *band_x;
    float *band_values;
    UIColor *_barColor;
    float _startX;
    long long _bandCount;
}

@property(nonatomic) float startX; // @synthesize startX=_startX;
@property(nonatomic) long long bandCount; // @synthesize bandCount=_bandCount;
- (void).cxx_destruct;
- (void)clear;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRect1:(struct CGRect)arg1;
- (void)copyData:(float *)arg1 ofLength:(long long)arg2;
- (void)layoutSubviews;
- (void)freeBuffers;
- (id)initWithCoder:(id)arg1;

@end

