//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface RHTasteBar : UIView
{
    double _overlap;
    CALayer *_fillLayer;
}

@property(retain, nonatomic) CALayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(nonatomic) double overlap; // @synthesize overlap=_overlap;
- (void).cxx_destruct;
- (void)setup;
- (void)updateOverlap:(_Bool)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

