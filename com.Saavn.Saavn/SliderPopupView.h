//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface SliderPopupView : UIView
{
    _Bool _valueInSeconds;
    float _value;
    UIFont *_font;
    NSString *_text;
}

@property(nonatomic) _Bool valueInSeconds; // @synthesize valueInSeconds=_valueInSeconds;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) float value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

