//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSLayoutManagerDelegate-Protocol.h"

@class NSString, UIColor, UIFont;

@interface _TtC2UI19LineBackgroundLabel : UIView <NSLayoutManagerDelegate>
{
    // Error parsing type: , name: textColor
    // Error parsing type: , name: textBackgroundColor
    // Error parsing type: , name: font
    // Error parsing type: , name: lineHeight
    // Error parsing type: , name: pointSize
    // Error parsing type: , name: defaultTextAttributes
    // Error parsing type: , name: layoutManager
    // Error parsing type: , name: textContainer
    // Error parsing type: , name: textStorage
    // Error parsing type: , name: backgroundImage
    // Error parsing type: , name: renderedText
}

- (CDUnknownBlockType).cxx_destruct;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)setAttributedText:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double pointSize; // @synthesize pointSize;
@property(nonatomic, copy) NSString *text;
@property(nonatomic) double horizontalPadding;
@property(nonatomic) double lineHeight; // @synthesize lineHeight;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long numberOfLines;
@property(nonatomic, retain) UIFont *font; // @synthesize font;
@property(nonatomic, retain) UIColor *textBackgroundColor; // @synthesize textBackgroundColor;
@property(nonatomic, retain) UIColor *textColor; // @synthesize textColor;
@property(nonatomic) struct CGRect bounds;

@end

