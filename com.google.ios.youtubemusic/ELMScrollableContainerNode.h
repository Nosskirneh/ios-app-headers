//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASDisplayNode.h"

#import "ELMDisplayNode-Protocol.h"
#import "ELMSenderState-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ASScrollNode, ELMElement, ELMNodeController, NSString;
@protocol ELMContext;

@interface ELMScrollableContainerNode : ASDisplayNode <UIScrollViewDelegate, ELMDisplayNode, ELMSenderState>
{
    id <ELMContext> _context;
    struct CGPoint _contentOffset;
    ASScrollNode *_scrollNode;
    ELMNodeController *_scrollNodeController;
    ELMElement *_element;
}

+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
@property(readonly, nonatomic) ELMElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)applyViewProperties;
- (void)didLoad;
-     // Error parsing type: {SenderState=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16@0:8, name: senderState
- (void)controllerDidApplyProperties;
- (_Bool)managesGestureHandling;
- (void)setElement:(id)arg1 previousElement:(id)arg2;
- (void)insertYogaChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeYogaChild:(id)arg1;
- (void)addYogaChild:(id)arg1;
- (void)setYogaChildren:(id)arg1;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1;
- (void)setNeedsLayout;
- (id)targetPropertiesReceiver;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

