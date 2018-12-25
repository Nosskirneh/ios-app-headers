//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTCoreTextLayoutLine, DTTextAttachment, NSArray, NSDictionary;

@interface DTCoreTextGlyphRun : NSObject
{
    struct _NSRange _stringRange;
    struct __CTRun *_run;
    struct CGRect _frame;
    double _offset;
    double _ascent;
    double _descent;
    double _leading;
    double _width;
    _Bool _writingDirectionIsRightToLeft;
    _Bool _isTrailingWhitespace;
    long long _numberOfGlyphs;
    const struct CGPoint *_glyphPositionPoints;
    DTCoreTextLayoutLine *_line;
    NSDictionary *_attributes;
    NSArray *_stringIndices;
    DTTextAttachment *_attachment;
    _Bool _hyperlink;
    _Bool _didCheckForAttachmentInAttributes;
    _Bool _didCheckForHyperlinkInAttributes;
    _Bool _didCalculateMetrics;
    _Bool _didDetermineTrailingWhitespace;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool writingDirectionIsRightToLeft; // @synthesize writingDirectionIsRightToLeft=_writingDirectionIsRightToLeft;
@property(readonly, nonatomic) double leading; // @synthesize leading=_leading;
@property(readonly, nonatomic) double descent; // @synthesize descent=_descent;
@property(readonly, nonatomic) double ascent; // @synthesize ascent=_ascent;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic, getter=isHyperlink) _Bool hyperlink;
@property(readonly, nonatomic) DTTextAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly, nonatomic) __weak NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) long long numberOfGlyphs; // @synthesize numberOfGlyphs=_numberOfGlyphs;
- (_Bool)isTrailingWhitespace;
- (void)fixMetricsFromAttachment;
- (struct _NSRange)stringRange;
- (struct CGRect)imageBoundsInContext:(struct CGContext *)arg1;
- (id)stringIndices;
- (struct CGRect)frameOfGlyphAtIndex:(long long)arg1;
- (void)calculateMetrics;
- (struct CGPath *)newPathWithGlyphs;
- (void)drawDecorationInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRun:(struct __CTRun *)arg1 layoutLine:(id)arg2 offset:(double)arg3;

@end

