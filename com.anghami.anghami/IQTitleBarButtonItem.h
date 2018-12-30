//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IQBarButtonItem.h"

@class UIButton, UIColor, UIFont, UIView;

@interface IQTitleBarButtonItem : IQBarButtonItem
{
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIColor *_selectableTitleColor;
    UIView *_titleView;
    UIButton *_titleButton;
}

@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIColor *selectableTitleColor; // @synthesize selectableTitleColor=_selectableTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setInvocation:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

