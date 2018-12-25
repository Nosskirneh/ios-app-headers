//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIFont;

@interface GSKTextFrame : NSObject
{
    _Bool _hasExtraParagraphLineSpacing;
    UIFont *_font;
    NSArray *_lineLayouts;
    unsigned long long _numberOfLines;
    double _lineHeight;
    id _ctFrame;
    NSAttributedString *_currentAttributedString;
    struct CGRect _bounds;
}

@property(copy, nonatomic) NSAttributedString *currentAttributedString; // @synthesize currentAttributedString=_currentAttributedString;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) id ctFrame; // @synthesize ctFrame=_ctFrame;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) _Bool hasExtraParagraphLineSpacing; // @synthesize hasExtraParagraphLineSpacing=_hasExtraParagraphLineSpacing;
@property(readonly, nonatomic) NSArray *lineLayouts; // @synthesize lineLayouts=_lineLayouts;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)drawRectInCurrentBounds;
- (id)wordOrigins;
- (id)getLineOrigins;
- (id)textPositionOfFrameWithGlyphAtIndex:(unsigned long long)arg1;
- (id)stringForLineIndex:(unsigned long long)arg1;
- (double)heightWithMaximumLineCount:(unsigned long long)arg1;
- (id)linesLayouts;
- (unsigned long long)lineCount;
- (void)layoutTextInBounds:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (void)setFontColor:(id)arg1 forRange:(struct _NSRange)arg2;
- (id)decorateAttributedString:(id)arg1 font:(id)arg2 fontColor:(id)arg3 forRange:(struct _NSRange)arg4;
- (void)setFrameForText:(id)arg1 bounds:(struct CGRect)arg2;
@property(readonly, nonatomic) struct __CTFrame *coreTextFrame; // @dynamic coreTextFrame;
- (id)init;

@end
