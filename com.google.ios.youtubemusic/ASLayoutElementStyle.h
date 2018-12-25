//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASAbsoluteLayoutElement-Protocol.h"
#import "ASLayoutElementExtensibility-Protocol.h"
#import "ASLocking-Protocol.h"
#import "ASStackLayoutElement-Protocol.h"

@class NSString;
@protocol ASLayoutElementStyleDelegate;

@interface ASLayoutElementStyle : NSObject <ASStackLayoutElement, ASAbsoluteLayoutElement, ASLayoutElementExtensibility, ASLocking>
{
    // Error parsing type: {RecursiveMutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: __instanceLock__
    struct ASLayoutElementStyleExtensions _extensions;
    // Error parsing type: {atomic<ASLayoutElementSize>="__a_"A{?}}, name: _size
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _spacingBefore
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _spacingAfter
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _flexGrow
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _flexShrink
    // Error parsing type: {atomic<ASDimension>="__a_"A{?}}, name: _flexBasis
    // Error parsing type: {atomic<ASStackLayoutAlignSelf>="__a_"AQ}, name: _alignSelf
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _ascender
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _descender
    // Error parsing type: {atomic<CGPoint>="__a_"A{CGPoint}}, name: _layoutPosition
    struct YGNode *_yogaNode;
    // Error parsing type: {atomic<YGWrap>="__a_"Ai}, name: _flexWrap
    // Error parsing type: {atomic<ASStackLayoutDirection>="__a_"AQ}, name: _flexDirection
    // Error parsing type: {atomic<YGDirection>="__a_"Ai}, name: _direction
    // Error parsing type: {atomic<ASStackLayoutJustifyContent>="__a_"AQ}, name: _justifyContent
    // Error parsing type: {atomic<ASStackLayoutAlignItems>="__a_"AQ}, name: _alignItems
    // Error parsing type: {atomic<YGPositionType>="__a_"Ai}, name: _positionType
    // Error parsing type: {atomic<ASEdgeInsets>="__a_"A{?}}, name: _position
    // Error parsing type: {atomic<ASEdgeInsets>="__a_"A{?}}, name: _margin
    // Error parsing type: {atomic<ASEdgeInsets>="__a_"A{?}}, name: _padding
    // Error parsing type: {atomic<ASEdgeInsets>="__a_"A{?}}, name: _border
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _aspectRatio
    unsigned long long _parentAlignStyle;
    id <ASLayoutElementStyleDelegate> _delegate;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) __weak id <ASLayoutElementStyleDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setParentAlignStyle:(unsigned long long)arg1;
- (void)setAspectRatio:(double)arg1;
- (void)setBorder:(CDStruct_5e071070)arg1;
- (void)setPadding:(CDStruct_5e071070)arg1;
- (void)setMargin:(CDStruct_5e071070)arg1;
- (void)setPosition:(CDStruct_5e071070)arg1;
- (void)setPositionType:(int)arg1;
- (void)setAlignItems:(unsigned long long)arg1;
- (void)setJustifyContent:(unsigned long long)arg1;
- (void)setDirection:(int)arg1;
- (void)setFlexDirection:(unsigned long long)arg1;
- (void)setFlexWrap:(int)arg1;
- (unsigned long long)parentAlignStyle;
- (double)aspectRatio;
- (CDStruct_5e071070)border;
- (CDStruct_5e071070)padding;
- (CDStruct_5e071070)margin;
- (CDStruct_5e071070)position;
- (int)positionType;
- (unsigned long long)alignItems;
- (unsigned long long)justifyContent;
- (int)direction;
- (unsigned long long)flexDirection;
- (int)flexWrap;
- (void)dealloc;
- (void)destroyYogaNode;
- (struct YGNode *)yogaNodeCreateIfNeeded;
- (struct YGNode *)yogaNode;
- (void)propertyDidChange:(id)arg1;
- (id)propertiesForDescription;
@property(readonly, copy) NSString *description;
- (struct UIEdgeInsets)layoutOptionExtensionEdgeInsetsAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionEdgeInsets:(struct UIEdgeInsets)arg1 atIndex:(int)arg2;
- (long long)layoutOptionExtensionIntegerAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionInteger:(long long)arg1 atIndex:(int)arg2;
- (_Bool)layoutOptionExtensionBoolAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionBool:(_Bool)arg1 atIndex:(int)arg2;
@property(nonatomic) struct CGPoint layoutPosition;
@property(nonatomic) double descender;
@property(nonatomic) double ascender;
@property(nonatomic) unsigned long long alignSelf;
@property(nonatomic) CDStruct_7f320dbc flexBasis;
@property(nonatomic) double flexShrink;
@property(nonatomic) double flexGrow;
@property(nonatomic) double spacingAfter;
@property(nonatomic) double spacingBefore;
@property(nonatomic) CDStruct_69654f45 maxLayoutSize; // @dynamic maxLayoutSize;
@property(nonatomic) CDStruct_69654f45 minLayoutSize; // @dynamic minLayoutSize;
@property(nonatomic) CDStruct_69654f45 preferredLayoutSize; // @dynamic preferredLayoutSize;
@property(nonatomic) struct CGSize maxSize; // @dynamic maxSize;
@property(nonatomic) struct CGSize minSize; // @dynamic minSize;
@property(nonatomic) struct CGSize preferredSize; // @dynamic preferredSize;
@property(nonatomic) CDStruct_7f320dbc maxHeight; // @dynamic maxHeight;
@property(nonatomic) CDStruct_7f320dbc minHeight; // @dynamic minHeight;
@property(nonatomic) CDStruct_7f320dbc maxWidth; // @dynamic maxWidth;
@property(nonatomic) CDStruct_7f320dbc minWidth; // @dynamic minWidth;
@property(nonatomic) CDStruct_7f320dbc height; // @dynamic height;
@property(nonatomic) CDStruct_7f320dbc width; // @dynamic width;
- (void)setSize:(CDStruct_99d2e400)arg1;
- (CDStruct_99d2e400)size;
- (_Bool)tryLock;
- (void)unlock;
- (void)lock;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

