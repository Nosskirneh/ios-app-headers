//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIColor;

@interface MDCAppBarButtonBarBuilder : NSObject
{
    NSMutableDictionary *_fonts;
    NSMutableDictionary *_titleColors;
    UIColor *_buttonTitleColor;
    UIColor *_buttonUnderlyingColor;
}

+ (void)configureButton:(id)arg1 fromButtonItem:(id)arg2;
+ (struct UIEdgeInsets)contentInsetsForButton:(id)arg1 layoutPosition:(unsigned long long)arg2 layoutHints:(unsigned long long)arg3 layoutDirection:(long long)arg4 userInterfaceIdiom:(long long)arg5;
@property(retain, nonatomic) UIColor *buttonUnderlyingColor; // @synthesize buttonUnderlyingColor=_buttonUnderlyingColor;
@property(retain, nonatomic) UIColor *buttonTitleColor; // @synthesize buttonTitleColor=_buttonTitleColor;
- (void).cxx_destruct;
- (void)transferCustomViewOwnershipForBarButtonItem:(id)arg1;
- (void)updateButton:(id)arg1 withItem:(id)arg2 forState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)updateButton:(id)arg1 withItem:(id)arg2 barMetrics:(long long)arg3;
- (_Bool)usePadInsetsForButtonBar:(id)arg1;
- (id)buttonBar:(id)arg1 viewForItem:(id)arg2 layoutHints:(unsigned long long)arg3;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleColorForState:(unsigned long long)arg1;
- (void)setTitleFont:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleFontForState:(unsigned long long)arg1;
- (id)init;

@end

