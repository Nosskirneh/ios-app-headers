//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSLayoutManagerDelegate-Protocol.h"

@class NSString;

@interface ASTextNodeWordKerner : NSObject <NSLayoutManagerDelegate>
{
}

- (double)_wordKernedSpaceWidthForCharacterAtIndex:(unsigned long long)arg1 atGlyphPosition:(struct CGPoint)arg2 forTextContainer:(id)arg3 layoutManager:(id)arg4;
- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const long long *)arg3 characterIndexes:(const unsigned long long *)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

