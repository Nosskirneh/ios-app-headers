//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class GKSButtonContentView, NSString, UIColor, UIFont;
@protocol GKSButtonContentViewDelegate;

@interface GKSButtonContentViewObject : GOOBaseContentViewObject
{
    _Bool _enabled;
    _Bool _isRaised;
    NSString *_title;
    long long _alignment;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_buttonColor;
    UIColor *_backgroundColor;
    NSString *_accessibilityIdentifier;
    id <GKSButtonContentViewDelegate> _delegate;
    GKSButtonContentView *_contentView;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) __weak GKSButtonContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <GKSButtonContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isRaised; // @synthesize isRaised=_isRaised;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1;

@end

