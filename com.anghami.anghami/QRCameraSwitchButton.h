//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface QRCameraSwitchButton : UIButton
{
    UIColor *_edgeColor;
    UIColor *_fillColor;
    UIColor *_edgeHighlightedColor;
    UIColor *_fillHighlightedColor;
}

@property(retain, nonatomic) UIColor *fillHighlightedColor; // @synthesize fillHighlightedColor=_fillHighlightedColor;
@property(retain, nonatomic) UIColor *edgeHighlightedColor; // @synthesize edgeHighlightedColor=_edgeHighlightedColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *edgeColor; // @synthesize edgeColor=_edgeColor;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

