//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASLayoutSpec.h"

@interface ASInsetLayoutSpec : ASLayoutSpec
{
    struct UIEdgeInsets _insets;
}

+ (id)insetLayoutSpecWithInsets:(struct UIEdgeInsets)arg1 child:(id)arg2;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1 restrictedToSize:(CDStruct_99d2e400)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)initWithInsets:(struct UIEdgeInsets)arg1 child:(id)arg2;

@end

