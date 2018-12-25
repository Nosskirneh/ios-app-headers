//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor;

@interface YTCEA708Pen : NSObject <NSCopying>
{
    unsigned char _size;
    unsigned char _offset;
    unsigned char _textTag;
    unsigned char _fontTag;
    unsigned char _edgeType;
    _Bool _underlined;
    _Bool _italic;
    unsigned char _penOpacity;
    unsigned char _backgroundOpacity;
    UIColor *_penColor;
    UIColor *_backgroundColor;
    UIColor *_edgeColor;
}

+ (id)predefinedPen:(unsigned char)arg1;
@property(readonly, nonatomic) unsigned char backgroundOpacity; // @synthesize backgroundOpacity=_backgroundOpacity;
@property(readonly, nonatomic) unsigned char penOpacity; // @synthesize penOpacity=_penOpacity;
@property(readonly, nonatomic) UIColor *edgeColor; // @synthesize edgeColor=_edgeColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *penColor; // @synthesize penColor=_penColor;
@property(readonly, nonatomic) _Bool italic; // @synthesize italic=_italic;
@property(readonly, nonatomic) _Bool underlined; // @synthesize underlined=_underlined;
@property(readonly, nonatomic) unsigned char edgeType; // @synthesize edgeType=_edgeType;
@property(readonly, nonatomic) unsigned char fontTag; // @synthesize fontTag=_fontTag;
@property(readonly, nonatomic) unsigned char textTag; // @synthesize textTag=_textTag;
@property(readonly, nonatomic) unsigned char offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned char size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)setColor:(unsigned char [3])arg1;
- (void)setAttributes:(unsigned char [2])arg1;
- (void)copyAttributesAndColorFromPen:(id)arg1;
- (id)penWithColor:(unsigned char [3])arg1;
- (id)penWithAttributes:(unsigned char [2])arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(unsigned char)arg1 font:(unsigned char)arg2 offset:(unsigned char)arg3 italics:(_Bool)arg4 underline:(_Bool)arg5 edgeType:(unsigned char)arg6 penColor:(id)arg7 penOpacity:(unsigned char)arg8 backgroundColor:(id)arg9 backgroundOpacity:(unsigned char)arg10 edgeColor:(id)arg11;

@end
