//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UILabel;

@interface ANGSearchTabbarButton : UIControl
{
    UILabel *_label;
    _Bool _isSelected;
    NSString *_identifier;
    NSString *_text;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)refreshColors;
- (id)initWithIdentifier:(id)arg1 text:(id)arg2;

@end

