//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASCellNode.h"

#import "ELMDisplayNode-Protocol.h"

@class ELMElement, NSString;

@interface ELMCellNode : ASCellNode <ELMDisplayNode>
{
    ELMElement *_element;
}

+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
+ (id)cellNodeWithElement:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) ELMElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)updateBackgroundColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setElement:(id)arg1 previousElement:(id)arg2;
- (void)controllerDidApplyProperties;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (_Bool)managesGestureHandling;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

