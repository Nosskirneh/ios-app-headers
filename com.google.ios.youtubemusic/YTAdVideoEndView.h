//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YTAdPlayerBarView, YTAdProgressWheel;

@interface YTAdVideoEndView : UIView
{
    YTAdProgressWheel *_progressWheel;
    YTAdPlayerBarView *_playerBarView;
    UIView *_activeAdVideoEndView;
}

@property(retain, nonatomic) UIView *activeAdVideoEndView; // @synthesize activeAdVideoEndView=_activeAdVideoEndView;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;
- (void)layoutSubviews;
- (id)init;

@end
