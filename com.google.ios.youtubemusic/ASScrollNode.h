//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASDisplayNode.h"

@class UIScrollView;

@interface ASScrollNode : ASDisplayNode
{
    long long _scrollableDirections;
    _Bool _automaticallyManagesContentSize;
    struct CGSize _contentCalculatedSizeFromLayout;
}

@property long long scrollableDirections;
@property _Bool automaticallyManagesContentSize;
- (void)layout;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1 restrictedToSize:(CDStruct_99d2e400)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)init;

// Remaining properties
@property(readonly) UIScrollView *view; // @dynamic view;

@end

