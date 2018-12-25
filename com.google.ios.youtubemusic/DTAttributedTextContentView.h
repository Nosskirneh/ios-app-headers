//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTAccessibilityViewProxyDelegate-Protocol.h"

@class DTCoreTextLayoutFrame, DTCoreTextLayouter, NSArray, NSAttributedString, NSMutableDictionary, NSMutableSet;
@protocol DTAttributedTextContentViewDelegate;

@interface DTAttributedTextContentView : UIView <DTAccessibilityViewProxyDelegate>
{
    NSAttributedString *_attributedString;
    DTCoreTextLayoutFrame *_layoutFrame;
    struct UIEdgeInsets _edgeInsets;
    NSMutableDictionary *customViewsForAttachmentsIndex;
    _Bool _flexibleHeight;
    long long _numberOfLines;
    long long _lineBreakMode;
    NSAttributedString *_truncationString;
    _Bool _shouldAddFirstLineLeading;
    _Bool _shouldDrawImages;
    _Bool _shouldDrawLinks;
    _Bool _shouldLayoutCustomSubviews;
    unsigned long long _relayoutMask;
    NSMutableSet *customViews;
    NSMutableDictionary *customViewsForLinksIndex;
    _Bool _isTiling;
    _Bool _layoutFrameHeightIsConstrainedByBounds;
    DTCoreTextLayouter *_layouter;
    struct CGPoint _layoutOffset;
    struct CGSize _backgroundOffset;
    struct {
        unsigned int delegateSupportsCustomViewsForAttachments:1;
        unsigned int delegateSupportsCustomViewsForLinks:1;
        unsigned int delegateSupportsGenericCustomViews:1;
        unsigned int delegateSupportsNotificationBeforeDrawing:1;
        unsigned int delegateSupportsNotificationAfterDrawing:1;
        unsigned int delegateSupportsNotificationBeforeTextBoxDrawing:1;
    } _delegateFlags;
    id <DTAttributedTextContentViewDelegate> _delegate;
    NSArray *_accessibilityElements;
}

+ (Class)layerClass;
+ (void)setLayerClass:(Class)arg1;
@property(nonatomic) _Bool layoutFrameHeightIsConstrainedByBounds; // @synthesize layoutFrameHeightIsConstrainedByBounds=_layoutFrameHeightIsConstrainedByBounds;
@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(nonatomic) unsigned long long relayoutMask; // @synthesize relayoutMask=_relayoutMask;
@property(retain, nonatomic) NSMutableDictionary *customViewsForAttachmentsIndex; // @synthesize customViewsForAttachmentsIndex;
@property(retain, nonatomic) NSMutableDictionary *customViewsForLinksIndex; // @synthesize customViewsForLinksIndex;
@property(retain, nonatomic) NSMutableSet *customViews; // @synthesize customViews;
@property(nonatomic) struct CGSize backgroundOffset; // @synthesize backgroundOffset=_backgroundOffset;
@property(nonatomic) struct CGPoint layoutOffset; // @synthesize layoutOffset=_layoutOffset;
@property(nonatomic) _Bool shouldLayoutCustomSubviews; // @synthesize shouldLayoutCustomSubviews=_shouldLayoutCustomSubviews;
@property(nonatomic) _Bool shouldDrawLinks; // @synthesize shouldDrawLinks=_shouldDrawLinks;
@property(nonatomic) _Bool shouldDrawImages; // @synthesize shouldDrawImages=_shouldDrawImages;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) __weak id <DTAttributedTextContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (id)viewForTextAttachment:(id)arg1 proxy:(id)arg2;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)invalidateAccessibilityElements;
@property(retain) DTCoreTextLayoutFrame *layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(retain) DTCoreTextLayouter *layouter; // @synthesize layouter=_layouter;
- (void)setBackgroundColor:(id)arg1;
- (void)setShouldAddFirstLineLeading:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)suggestedFrameSizeToFitEntireStringConstraintedToWidth:(double)arg1;
- (struct CGRect)_frameForLayoutFrameConstraintedToWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)removeSubviewsOutsideRect:(struct CGRect)arg1;
- (void)removeAllCustomViews;
- (void)removeAllCustomViewsForLinks;
- (void)relayoutText;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSubviews;
- (void)layoutSubviewsInRect:(struct CGRect)arg1;
- (id)debugDescription;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;
- (struct CGRect)cursorRectAtIndex:(long long)arg1;
- (long long)closestCursorIndexToPoint:(struct CGPoint)arg1;
- (id)contentImageWithBounds:(struct CGRect)arg1 options:(unsigned long long)arg2;

@end

