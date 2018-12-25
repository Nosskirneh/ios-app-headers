//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MGMRenderable-Protocol.h"

@class NSString;

@interface MGMDisplayMonogram : NSObject <MGMRenderable>
{
    _Bool _canBeCentered;
    NSString *_monogram;
    const struct __CTFont *_renderingFontRef;
}

@property(readonly) _Bool canBeCentered; // @synthesize canBeCentered=_canBeCentered;
@property(readonly) const struct __CTFont *renderingFontRef; // @synthesize renderingFontRef=_renderingFontRef;
@property(readonly, copy) NSString *monogram; // @synthesize monogram=_monogram;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMonogram:(id)arg1 fontRef:(const struct __CTFont *)arg2 centeringSupport:(_Bool)arg3;

@end

