//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MLCaptionDisplaySettings : NSObject
{
    _Bool _forceFontName;
    _Bool _forceFontWeight;
    _Bool _forceTextEdgeStyle;
    _Bool _forceTextOpacity;
    _Bool _forceTextColor;
    _Bool _forceTextBackgroundOpacity;
    _Bool _forceTextBackgroundColor;
    _Bool _forceWindowOpacity;
    _Bool _forceWindowColor;
    _Bool _forceRelativeCharacterSize;
    NSString *_fontName;
    double _fontWeight;
    long long _textEdgeStyle;
    double _textOpacity;
    UIColor *_textColor;
    double _textBackgroundOpacity;
    UIColor *_textBackgroundColor;
    double _windowOpacity;
    UIColor *_windowColor;
    double _relativeCharacterSize;
}

+ (id)hexStringFromColor:(id)arg1;
@property(readonly, nonatomic) _Bool forceRelativeCharacterSize; // @synthesize forceRelativeCharacterSize=_forceRelativeCharacterSize;
@property(readonly, nonatomic) double relativeCharacterSize; // @synthesize relativeCharacterSize=_relativeCharacterSize;
@property(readonly, nonatomic) _Bool forceWindowColor; // @synthesize forceWindowColor=_forceWindowColor;
@property(readonly, nonatomic) UIColor *windowColor; // @synthesize windowColor=_windowColor;
@property(readonly, nonatomic) _Bool forceWindowOpacity; // @synthesize forceWindowOpacity=_forceWindowOpacity;
@property(readonly, nonatomic) double windowOpacity; // @synthesize windowOpacity=_windowOpacity;
@property(readonly, nonatomic) _Bool forceTextBackgroundColor; // @synthesize forceTextBackgroundColor=_forceTextBackgroundColor;
@property(readonly, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(readonly, nonatomic) _Bool forceTextBackgroundOpacity; // @synthesize forceTextBackgroundOpacity=_forceTextBackgroundOpacity;
@property(readonly, nonatomic) double textBackgroundOpacity; // @synthesize textBackgroundOpacity=_textBackgroundOpacity;
@property(readonly, nonatomic) _Bool forceTextColor; // @synthesize forceTextColor=_forceTextColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) _Bool forceTextOpacity; // @synthesize forceTextOpacity=_forceTextOpacity;
@property(readonly, nonatomic) double textOpacity; // @synthesize textOpacity=_textOpacity;
@property(readonly, nonatomic) _Bool forceTextEdgeStyle; // @synthesize forceTextEdgeStyle=_forceTextEdgeStyle;
@property(readonly, nonatomic) long long textEdgeStyle; // @synthesize textEdgeStyle=_textEdgeStyle;
@property(readonly, nonatomic) _Bool forceFontWeight; // @synthesize forceFontWeight=_forceFontWeight;
@property(readonly, nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property(readonly, nonatomic) _Bool forceFontName; // @synthesize forceFontName=_forceFontName;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
- (id)initWithFontName:(id)arg1 forceFontName:(_Bool)arg2 fontWeight:(double)arg3 forceFontWeight:(_Bool)arg4 textEdgeStyle:(long long)arg5 forceTextEdgeStyle:(_Bool)arg6 textOpacity:(double)arg7 forceTextOpacity:(_Bool)arg8 textColor:(id)arg9 forceTextColor:(_Bool)arg10 textBackgroundOpacity:(double)arg11 forceTextBackgroundOpacity:(_Bool)arg12 textBackgroundColor:(id)arg13 forceTextBackgroundColor:(_Bool)arg14 windowOpacity:(double)arg15 forceWindowOpacity:(_Bool)arg16 windowColor:(id)arg17 forceWindowColor:(_Bool)arg18 relativeCharacterSize:(double)arg19 forceRelativeCharacterSize:(_Bool)arg20;
- (id)fontFamilyOption;
- (id)textEdgeStyleString;
@property(readonly, nonatomic) NSString *MDXFormat;

@end

