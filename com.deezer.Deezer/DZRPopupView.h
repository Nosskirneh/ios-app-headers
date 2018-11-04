//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface DZRPopupView : UIView
{
    UIView *_rasterView;
    UIView *_shadowTriangleView;
    UIView *_topTriangle;
    UIView *_shadowView;
    UIView *_contentView;
    UILabel *_contentText;
}

@property(retain, nonatomic) UILabel *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *topTriangle; // @synthesize topTriangle=_topTriangle;
@property(retain, nonatomic) UIView *shadowTriangleView; // @synthesize shadowTriangleView=_shadowTriangleView;
@property(retain, nonatomic) UIView *rasterView; // @synthesize rasterView=_rasterView;
- (void).cxx_destruct;
- (void)tappedPopup:(id)arg1;
- (void)setTextMessage:(id)arg1;
- (void)awakeFromNib;

@end

