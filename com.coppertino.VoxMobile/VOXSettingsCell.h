//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, OnePixelLineView, UIButton, UIColor;

@interface VOXSettingsCell : UITableViewCell
{
    _Bool _switchState;
    NSString *_title;
    NSString *_subTitle;
    UIColor *_subTitleColor;
    UIButton *_tooltipButton;
    CDUnknownBlockType _tooltipAction;
    unsigned long long _state;
    CDUnknownBlockType _actionBlock;
    OnePixelLineView *_separatorView;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak OnePixelLineView *separatorView; // @synthesize separatorView=_separatorView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) _Bool switchState; // @synthesize switchState=_switchState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType tooltipAction; // @synthesize tooltipAction=_tooltipAction;
@property(retain, nonatomic) UIButton *tooltipButton; // @synthesize tooltipButton=_tooltipButton;
@property(retain, nonatomic) UIColor *subTitleColor; // @synthesize subTitleColor=_subTitleColor;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)tooltipDidPress:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

