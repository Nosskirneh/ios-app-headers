//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTextKitTruncating-Protocol.h"

@class ASTextKitContext, NSAttributedString, NSCharacterSet, NSString;

@interface ASTextKitTailTruncater : NSObject <ASTextKitTruncating>
{
    ASTextKitContext *_context;
    NSAttributedString *_truncationAttributedString;
    NSCharacterSet *_avoidTailTruncationSet;
    vector_b5e32e34 _visibleRanges;
}

@property(readonly, nonatomic) vector_b5e32e34 visibleRanges; // @synthesize visibleRanges=_visibleRanges;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange firstVisibleRange;
- (void)truncate;
- (unsigned long long)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2 textStorage:(id)arg3;
- (unsigned long long)_calculateCharacterIndexBeforeTruncationMessage:(id)arg1 textStorage:(id)arg2 textContainer:(id)arg3;
- (id)initWithContext:(id)arg1 truncationAttributedString:(id)arg2 avoidTailTruncationSet:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
