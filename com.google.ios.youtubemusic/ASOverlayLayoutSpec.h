//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASLayoutSpec.h"

@protocol ASLayoutElement;

@interface ASOverlayLayoutSpec : ASLayoutSpec
{
}

+ (id)overlayLayoutSpecWithChild:(id)arg1 overlay:(id)arg2;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1 restrictedToSize:(CDStruct_99d2e400)arg2 relativeToParentSize:(struct CGSize)arg3;
@property(retain, nonatomic) id <ASLayoutElement> overlay;
- (id)child;
- (void)setChild:(id)arg1;
- (id)initWithChild:(id)arg1 overlay:(id)arg2;

@end

