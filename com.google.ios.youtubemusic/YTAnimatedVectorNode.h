//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASDisplayNode.h"

#import "YTDisplayNode-Protocol.h"

@class NSString, YTIElement;

@interface YTAnimatedVectorNode : ASDisplayNode <YTDisplayNode>
{
    YTIElement *_element;
}

@property(readonly, nonatomic) YTIElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)loadAnimation;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (_Bool)managesGestureHandling;
- (void)controllerDidApplyProperties;
- (void)applyViewProperties;
- (void)setElement:(id)arg1 previousElement:(id)arg2;
- (_Bool)canBeLayerBacked;
- (id)initWithElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

